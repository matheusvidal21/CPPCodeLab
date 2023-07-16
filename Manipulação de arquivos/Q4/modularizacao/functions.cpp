/**
 * @file functions.cpp
 * @brief Arquivo para desenvolver as funções
 */
#include "functions.h"

using namespace std;

//Função para copiar os dados do arquivo para o vetor Funcionario
void copia_dados(std::ifstream& file, int numFuncionarios, Funcionario* funcionarios){
  string linha;
  getline(file, linha); //Ler a primeira linha para descartar
  for(int i = 0; i < numFuncionarios; i++){
    string funcional, nome;
    char departamento;
    double salario;
    getline(file, linha); // Lê a linha inteira
    stringstream txt(linha);
    txt >> funcional >> nome >> departamento >> salario;
    funcionarios[i].setFuncional(funcional);
    funcionarios[i].setNome(nome);
    funcionarios[i].setDepartamento(departamento);
    funcionarios[i].setSalario(salario);
  }
}

//Função para imprimir a folha de pagamento do departamendo recebido
void imprime_folha_pagamento(int numFuncionarios, Funcionario* funcionarios, char departamento){
  double salarioTotal = 0;
  cout << "FOLHA DE PAGAMENTO DO DEPARTAMENTO '" << departamento << "'"<< endl;
  cout << "FUNCIONAL       NOME       DEPTO       SALARIO" << endl;
  for(int i = 0; i < numFuncionarios; i++){
    if(funcionarios[i].getDepartamento() == departamento){
      cout << left << setw(16) << funcionarios[i].getFuncional() << left << setw(11) << funcionarios[i].getNome() << left << setw(12) << funcionarios[i].getDepartamento() << fixed << setprecision(2) << funcionarios[i].getSalario() << endl;
      salarioTotal += funcionarios[i].getSalario();
    }    
  }
  cout << "VALOR TOTAL: R$" << fixed << setprecision(2) << salarioTotal << endl;
}

//Função para criar arquivo com a folha de pagamento total
void cria_saida(std::ofstream& arquivoSaida, int numFuncionarios,Funcionario* funcionarios){
  double salarioTotal = 0;
  for(int i = 0; i < numFuncionarios; i++){
    arquivoSaida << left << setw(16) << funcionarios[i].getFuncional() << left << setw(11) << funcionarios[i].getNome() << left << setw(12) << funcionarios[i].getDepartamento() << fixed << setprecision(2) << funcionarios[i].getSalario() << endl;
    salarioTotal += funcionarios[i].getSalario();
  }
  arquivoSaida << "QUANTIDADE DE FUNCIONÁRIOS: " << numFuncionarios << endl;
  arquivoSaida << "VALOR TOTAL: R$" << salarioTotal;
}