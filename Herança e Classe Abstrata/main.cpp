#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>  //Polimorfismo paramétrico
void ordenaPorSalario(T d[], int N) {
  T aux;
  int indMenor;
  int i, j;
  for (i = 0; i < N - 1; i++) {
    indMenor = i;
    for (j = i + 1; j < N; j++) {
      if (d[j] < d[indMenor]) {
        indMenor = j;
      }
    }
    aux = d[i];
    d[i] = d[indMenor];
    d[indMenor] = aux;
  }
}

class Empregado {
private:
  string nome;
  string endereco;

public:
  Empregado() {}
  Empregado(string nome, string endereco) : nome(nome), endereco(endereco) {}
  virtual ~Empregado() {}
  virtual double calcularSalario() = 0;
  string getNome() { return nome; }
};

class Chefe : public Empregado {
private:
  double salarioMensal;

public:
  Chefe() {}
  Chefe(string nome, string endereco, double salarioMensal)
      : Empregado(nome, endereco), salarioMensal(salarioMensal) {}
  ~Chefe() {}
  double calcularSalario() { return salarioMensal; }
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
  double calcularSalario() { return salarioBase + (comissao * quantidade); }
};

/*Polimorfismo de subtipos, através da classe abstrata (Empregado), que tem o método virtual puro calcularSalario(), conseguimos fazer o polimorfismo desse método nas classes derivadas de Empregado*/

int main() {
  int tam = 5;
  Empregado *departamento[tam]; // Stack

  Empregado *com1 = new Comissionado("matheus", "cc", 1000.40, 100, 3); // Heap
  Empregado *com2 = new Comissionado("isa", "ss", 2000.40, 50, 5);
  Empregado *com3 = new Comissionado("jose", "ll", 800.20, 150, 1);
  Empregado *chefe1 = new Chefe("francisco", "Ff", 5000.90);
  Empregado *chefe2 = new Chefe("jonas", "Jj", 6000.80);

  departamento[0] = com1;
  departamento[1] = com2;
  departamento[2] = com3;
  departamento[3] = chefe1;
  departamento[4] = chefe2;

  // Salvar dados no "arquivo.bin"
  fstream file;
  file.open("arquivo.bin", ios::out | ios::binary);
  if (!file.is_open()) {
    cout << "Não foi possível abrir o arquivo para a escrita." << endl;
  }

  file.write(reinterpret_cast<char *>(departamento), sizeof(Empregado) * tam);
  cout << "Dados salvos..." << endl << endl;
  file.close();

  Empregado *departamento2[tam];
  departamento2[0] = new Comissionado;
  departamento2[1] = new Comissionado;
  departamento2[2] = new Comissionado;
  departamento2[3] = new Chefe;
  departamento2[4] = new Chefe;

  // Leitura dos dados no "arquivos.bin"
  file.open("arquivo.bin", ios::in | ios::binary);
  if (!file.is_open()) {
    cout << "Não foi possível abrir o arquivo para leitura." << endl;
  }

  file.read(reinterpret_cast<char *>(departamento), sizeof(Empregado) * tam);
  cout << "Dados lidos..." << endl << endl;
  file.close();

  for (int i = 0; i < tam; i++) {
    cout << departamento[i]->getNome() << endl;
  }

  double salarios[tam];
  salarios[0] = departamento[0]->calcularSalario();
  salarios[1] = departamento[1]->calcularSalario();
  salarios[2] = departamento[2]->calcularSalario();
  salarios[3] = departamento[3]->calcularSalario();
  salarios[4] = departamento[4]->calcularSalario();
  
  ordenaPorSalario(salarios, tam);
  cout << endl;
  cout << "Salários ordenados: " << endl;
  for (int i = 0; i < tam; i++) {
    cout << salarios[i] << endl;
  }
  
  return 0;
}
