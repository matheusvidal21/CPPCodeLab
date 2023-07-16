#include <iostream>
#include <fstream>
#define TAM 3
class Funcionario
{
private:
  std::string nome;
  double salario;

public:
  Funcionario(){};
  Funcionario(std::string nome, double salario);
  std::string getNome();
  void setNome(std::string nome);
  double getSalario();
  void setSalario(float salario);
  void printFuncionario();
};

Funcionario::Funcionario(std::string nome, double salario)
{
  this->nome = nome;
  this->salario = salario;
}

std::string Funcionario::getNome() { return nome; }

void Funcionario::setNome(std::string nome) { this->nome = nome; }

void Funcionario::setSalario(float salario) { this->salario = salario; }

double Funcionario::getSalario() { return salario; }

void Funcionario::printFuncionario()
{
  std::cout << "Nome: " << nome;
  std::cout << "  |  Salário: " << salario << std::endl;
}

// Função para salvar dados em um arquivo binário
void salvarDadosBinarios(Funcionario *funcionarios, int tamanho)
{
  std::fstream arquivo("dados.bin", std::ios::out | std::ios::binary);

  if (arquivo.is_open())
  {
    arquivo.write(reinterpret_cast<char *>(funcionarios), sizeof(Funcionario) * tamanho);

    arquivo.close();
    std::cout << "Dados salvos no arquivo binário." << std::endl;
  }
  else
  {
    std::cerr << "Erro ao abrir o arquivo." << std::endl;
  }
}

// Função para ler dados de um arquivo binário
void lerDadosBinarios(Funcionario *&funcionarios, int tamanho)
{
  std::fstream arquivo("dados.bin", std::ios::in | std::ios::binary);

  if (arquivo.is_open())
  {
    arquivo.read(reinterpret_cast<char *>(funcionarios), sizeof(Funcionario) * tamanho);

    arquivo.close();
    std::cout << "Dados lidos do arquivo binário." << std::endl
              << std::endl;
  }
  else
  {
    std::cerr << "Erro ao abrir o arquivo." << std::endl;
  }
}

int main()
{

  Funcionario *funcionarios = new Funcionario[TAM];

  funcionarios[0].setSalario(2000);
  funcionarios[0].setNome("Matheus");
  funcionarios[1].setSalario(3000);
  funcionarios[1].setNome("Marcos");
  funcionarios[2].setSalario(4000);
  funcionarios[2].setNome("Bruno");

  salvarDadosBinarios(funcionarios, TAM);

  funcionarios = nullptr;
  delete[] funcionarios;
  funcionarios = new Funcionario[TAM];

  lerDadosBinarios(funcionarios, TAM);

  for (int i = 0; i < TAM; i++)
  {
    funcionarios[i].printFuncionario();
  }

  funcionarios = nullptr;
  delete[] funcionarios;

  return 0;
}
