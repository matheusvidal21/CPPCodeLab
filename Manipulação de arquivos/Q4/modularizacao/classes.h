/**
 * @file classes.h
 * @brief Arquivo cabeçalho que contém as classes do programa
 */

#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>

using namespace std;

/**
 * @class Funcionario
 * @brief Classe para funcionário
 */
class Funcionario{
  private: 
      string funcional;
      string nome;
      char departamento;
      double salario;

  public:
    /**
    * @brief Construtor padrão da classe
    */
      Funcionario(){ this->nome = "Sem nome"; }
    /**
    * @brief Destrutor da classe Aluno
    */
      ~Funcionario(){};

    /**
    * @brief Método set do Funcional
    * @param funcional Funcional do funcionário
    */
      void setFuncional(string funcional);
    /**
    * @brief Método set do Nome
    * @param nome Nome do funcionário
    */      
      void setNome(string nome);
    /**
    * @brief Método set do Departamento
    * @param departamento Departamento do funcionário
    */      
      void setDepartamento(char departamento);
    /**
    * @brief Método set do Salário
    * @param salario Salário do funcionário
    */      
      void setSalario(double salario);

    /**
    * @brief Método get do Funcional
    * @return O funcional do funcionário
    */    
      string getFuncional();
    /**
    * @brief Método get do Nome
    * @return O nome do funcionário
    */    
      string getNome();
    /**
    * @brief Método get do Departamento
    * @return O departamento do aluno
    */          
      char getDepartamento();
    /**
    * @brief Método get do Salário
    * @return O salário do funcionário
    */    
      double getSalario();
};

#endif