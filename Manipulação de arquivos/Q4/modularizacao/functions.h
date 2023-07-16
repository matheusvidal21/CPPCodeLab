/**
 * @file functions.h
 * @brief Arquivo cabeçalho que contém todas as funções do programa
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "classes.h"

/**
 * @brief Função para copiar os dados do arquivo para um vetor Funcionario
 * @details A função copia_dados copia os dados de um arquivo para um vetor de objetos Funcionario. Ela lê o arquivo linha por linha, descartando a primeira linha. Em seguida, separa cada linha em partes e atribui essas partes aos atributos dos objetos no vetor.
 * 
 * @param file Arquivo a ser lido
 * @param numFuncionarios Inteiro que indica o número de funcionários a serem lidos do arquivo
 * @param funcionarios Ponteiro para um vetor de objetos do tipo 'Funcionario', onde os dados são armazenados
 * @return void
 * 
 */
void copia_dados(std::ifstream& file, int numFuncionarios, Funcionario* funcionarios);

/**
 * @brief Função para imprimir a folha de pagamento do departamendo recebido
 * @details A função imprime_folha_pagamento imprime a folha de pagamento de um departamento específico. Ela recebe o número de funcionários, um ponteiro para um vetor de objetos Funcionario e o departamento desejado como parâmetros. A função itera sobre o vetor de funcionários, exibindo as informações de cada funcionário pertencente ao departamento fornecido, incluindo o total de salários.
 * 
 * @param numFuncinarios Inteiro que indica o número de funcionários
 * @param funcionarios Ponteiro para um vetor de objetos do tipo 'Funcionario', contendo os dados dos funcionários
 * @param departamento Caractere que indica o departamento para o qual a folha de pagamento será impressa
 * @return void
 * 
 */
void imprime_folha_pagamento(int numFuncionarios, Funcionario* funcionarios, char departamento);

/**
 * @brief Função para criar arquivo com a folha de pagamento total
 * @details A função cria_saida cria um arquivo de saída e escreve nele os dados dos funcionários, incluindo funcional, nome, departamento e salário. Ela recebe como parâmetros um objeto std::ofstream para representar o arquivo de saída, o número de funcionários e um ponteiro para um vetor de objetos Funcionario. A função também calcula o salário total e o escreve no arquivo, junto com a quantidade de funcionários.
 * 
 * @param arquivoSaida Objeto std::ofstream que representa o arquivo de saída a ser criado e escrito.
 * @param numFuncionarios Inteiro que indica o número de funcionários
 * @param funcionarios Ponteiro para um vetor de objetos Funcionario, contendo os dados dos funcionários a serem escritos no arquivo de saída
 * @return void
 * 
 */
void cria_saida(std::ofstream& arquivoSaida, int numFuncionarios,Funcionario* funcionarios);                                                                           
#endif