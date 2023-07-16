/**
 * @file main.cpp
 * @brief Questão 1) Escreva um programa em C++ que preencha um vetor de 4 cadeias de caracteres (strings) com informações vindas de um arquivo de entrada e imprima cada elemento do vetor na saída padrão. Considere que cada string representa o nome de uma pessoa qualquer.
 * @author Matheus Vidal (20220055246)
 * @since 25/05/2022
 * @date 02/06/2022 
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int MAX = 4;

/**
 * @brief Função principal do programa.
 * @return Retorna 0 em caso de sucesso.
 * 
 * @details  A função main realiza as seguintes operações: abre um arquivo de entrada, lê as linhas do arquivo e armazena cada linha em um vetor de strings chamado nomes, imprime os elementos do vetor nomes no console e fecha o arquivo de entrada. Se ocorrer algum erro ao abrir o arquivo, uma mensagem de erro é exibida. 
 */
int main() {
  ifstream arquivo;
  arquivo.open("./arquivos/entrada_q1.txt");

  if(arquivo.is_open()){
    string nomes[MAX], string;
    int i = 0;
    while(getline(arquivo, string) && i < MAX){
      nomes[i] = string;
      i++;
    }
    
    for(int j = 0; j < MAX; j++){
      cout << nomes[j] << endl;
    }
    
    arquivo.close();
  }else{
    cerr << "Não foi possível abrir o arquivo" << endl;
  }

  return 0;
}