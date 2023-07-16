#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Empregado {
private:
  string nome;
  string endereco;

public:
  Empregado() {}
  Empregado(string nome, string endereco) : nome(nome), endereco(endereco) {}
  virtual ~Empregado() {}
  virtual double calcularSalario() = 0;
  string getNome() const { return nome; }
};

class Chefe : public Empregado {
private:
  double salarioMensal;

public:
  Chefe() {}
  Chefe(string nome, string endereco, double salarioMensal)
      : Empregado(nome, endereco), salarioMensal(salarioMensal) {}
  ~Chefe() {}
  double calcularSalario() override { return salarioMensal; }
};

class Comissionado : public Empregado {
private:
  double salarioBase;
  double comissao;
  int quantidade;

public:
  Comissionado() {}
  Comissionado(string nome, string endereco, double salarioBase,
               double comissao, int quantidade)
      : Empregado(nome, endereco), salarioBase(salarioBase), comissao(comissao),
        quantidade(quantidade) {}
  ~Comissionado() {}
  double calcularSalario() override { return salarioBase + (comissao * quantidade); }
};

template <typename T>
void ordenaPorSalario(T d[], int N) {
  T aux;
  int indMenor;
  int i, j;
  for (i = 0; i < N - 1; i++) {
    indMenor = i;
    for (j = i + 1; j < N; j++) {
      if (d[j]->calcularSalario() < d[indMenor]->calcularSalario()) {
        indMenor = j;
      }
    }
    aux = d[i];
    d[i] = d[indMenor];
    d[indMenor] = aux;
  }
}

int main() {
  int tam = 5;
  Empregado *departamento[tam];
  // O vetor está alocando os endereços na memória de pilha (stack), 
  // Mas cada instância está sendo criada de forma dinâmica na memória livre (heap).
  Empregado *com1 = new Comissionado("matheus", "cc", 1000.40, 100, 3);
  Empregado *com2 = new Comissionado("isa", "ss", 2000.40, 50, 5);
  Empregado *com3 = new Comissionado("jose", "ll", 800.20, 150, 1);
  Empregado *chefe1 = new Chefe("francisco", "Ff", 5000.90);
  Empregado *chefe2 = new Chefe("jonas", "Jj", 6000.80);

  departamento[0] = com1;
  departamento[1] = com2;
  departamento[2] = com3;
  departamento[3] = chefe1;
  departamento[4] = chefe2;

  ofstream file("arquivo.bin", ios::binary);
  if (!file.is_open()) {
    cout << "Não foi possível abrir o arquivo para a escrita." << endl;
    return 1;
  }

  file.write(reinterpret_cast<char *>(departamento), sizeof(Empregado *) * tam);
  cout << "Dados salvos..." << endl << endl;
  file.close();

  Empregado *departamento2[tam];

  ifstream file2("arquivo.bin", ios::binary);
  if (!file2.is_open()) {
    cout << "Não foi possível abrir o arquivo para leitura." << endl;
    return 1;
  }

  file2.read(reinterpret_cast<char *>(departamento2), sizeof(Empregado *) * tam);
  cout << "Dados lidos..." << endl << endl;
  file2.close();

  for (int i = 0; i < tam; i++) {
    cout << departamento2[i]->getNome() << endl;
  }

  double salarios[tam];
  for (int i = 0; i < tam; i++) {
    salarios[i] = departamento2[i]->calcularSalario();
  }

  ordenaPorSalario(departamento2, tam);
  cout << endl;
  cout << "Salários ordenados: " << endl;
  for (int i = 0; i < tam; i++) {
    cout << departamento2[i]->calcularSalario() << endl;
  }

  for (int i = 0; i < tam; i++) {
    delete departamento[i];
  }

  return 0;
}
