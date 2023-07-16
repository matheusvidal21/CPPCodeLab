#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>

class Funcionario
{
private:
    std::string nome;
    double salario;

public:
    Funcionario();
    Funcionario(std::string nome, double salario);
    std::string getNome();
    void setNome(std::string nome);
    double getSalario();
    void setSalario(float salario);
    float aumentarSalario(int percAumento);
    Funcionario &operator++(int);
    friend std::ostream &operator<<(std::ostream &os, Funcionario &f);
    ~Funcionario();
};
#endif