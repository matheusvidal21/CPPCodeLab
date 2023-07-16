#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>

using namespace std;

class Funcionario{
  private: 
      string funcional;
      string nome;
      char departamento;
      double salario;

  public:

      Funcionario(){ this->nome = "Sem nome"; }

      ~Funcionario(){};

      void setFuncional(string funcional);
   
      void setNome(string nome);
   
      void setDepartamento(char departamento);
    
      void setSalario(double salario);
   
      string getFuncional();

      string getNome();
       
      char getDepartamento();
 
      double getSalario();
};

#endif
