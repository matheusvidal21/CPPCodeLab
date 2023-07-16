/**
 * @file main.cpp
 * @brief Questão 4) Você deve escrever um programa em C++ usando Orientação a Objetos que, dado o arquivo com a relação de funcionários, imprima o valor gasto com a folha de pagamento para um determinado departamento. Os dados dos funcionários da empresa devem ser fornecidos para um vetor, de modo que uma função que execute tal tarefa deve ser implementada
 * @author Matheus Vidal (20220055246)
 * @since 25/05/2022
 * @date 02/06/2022 
 */
#include <iostream>
#include <fstream>
#include "./modularizacao/classes.h"
#include "./modularizacao/functions.h"
using namespace std;

/**
 * @brief Função principal do programa.
 * @return Retorna 0 em caso de sucesso.
 * 
 * @details A função main é o ponto de entrada do programa e executa uma série de operações. Ela abre um arquivo de entrada e um arquivo de saída, verifica se os arquivos foram abertos corretamente, lê a quantidade de funcionários do arquivo de entrada e cria um vetor dinâmico de objetos Funcionario. Em seguida, chama as funções copia_dados, imprime_folha_pagamento e cria_saida para manipular os dados dos funcionários e gerar uma folha de pagamento. Por fim, fecha os arquivos, libera a memória alocada e encerra o programa.
 */
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