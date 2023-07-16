#include "classes.h"

Funcionario::Funcionario()
{
  nome = "Sem nome";
  salario = 0;
}

Funcionario::Funcionario(std::string nome, double salario)
{
  this->nome = nome;
  this->salario = salario;
}

std::string Funcionario::getNome() { return nome; }

void Funcionario::setNome(std::string nome) { this->nome = nome; }

void Funcionario::setSalario(float salario) { this->salario = salario; }

double Funcionario::getSalario() { return salario; }

float Funcionario::aumentarSalario(int percAumento)
{
  salario = salario + ((salario * percAumento) / 100);
  return salario;
}

Funcionario &Funcionario::operator++(int)
{
  salario += (salario * 10) / 100;
  return *this;
}

std::ostream &operator<<(std::ostream &os, Funcionario &f)
{
  os << "Nome: " << f.nome << " | Salário: R$" << f.salario;
  return os;
}

Funcionario::~Funcionario() {}