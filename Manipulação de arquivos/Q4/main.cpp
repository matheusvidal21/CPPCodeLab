#include <iostream>
#include <fstream>
#include "./modularizacao/classes.h"
#include "./modularizacao/functions.h"
using namespace std;


int main() {
  ifstream arquivoEntrada("./arquivos/funcionarios.txt");
  ofstream arquivoSaida("./arquivos/folha_de_pagamento.txt");
  if(!arquivoEntrada.is_open() || !arquivoSaida.is_open()){
    cerr << "Não foi possível abrir o arquivo.";
    return 1;
  }

  //Recebe a primeira linha (quantidade de funcionários)
  int numFuncionarios;
  arquivoEntrada >> numFuncionarios;
  Funcionario *funcionarios = new Funcionario[numFuncionarios];
  
  copia_dados(arquivoEntrada, numFuncionarios, funcionarios);

  char depto;
  cout << "Informe o departamento que deseja: ";
  cin >> depto;

  cout << "\033[2J\033[1;1H"; //Limpa o terminal
  
  imprime_folha_pagamento(numFuncionarios, funcionarios, toupper(depto));
  arquivoEntrada.close();

  cria_saida(arquivoSaida, numFuncionarios, funcionarios);
  arquivoSaida.close();
  
  delete[] funcionarios;
  return 0;
}
