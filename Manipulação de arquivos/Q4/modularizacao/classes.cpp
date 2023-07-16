#include "classes.h"

//Métodos getters e setters
void Funcionario::setFuncional(string funcional){
    this->funcional = funcional;
}
void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setDepartamento(char departamento){
  this->departamento = departamento;
}
void Funcionario::setSalario(double salario){
  this->salario = salario;
}
string Funcionario::getFuncional(){
  return funcional;
}
string Funcionario::getNome(){
  return nome;
}
char Funcionario::getDepartamento(){
  return departamento;
}
double Funcionario::getSalario(){
  return salario;
}
