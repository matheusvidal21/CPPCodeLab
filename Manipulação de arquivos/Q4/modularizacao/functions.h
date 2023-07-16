#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "classes.h"


void copia_dados(std::ifstream& file, int numFuncionarios, Funcionario* funcionarios);

void imprime_folha_pagamento(int numFuncionarios, Funcionario* funcionarios, char departamento);

void cria_saida(std::ofstream& arquivoSaida, int numFuncionarios,Funcionario* funcionarios);                                                                           
#endif
