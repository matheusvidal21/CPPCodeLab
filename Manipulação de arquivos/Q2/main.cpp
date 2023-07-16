/**
 * @file main.cpp
 * @brief Questão 2) Escreva um programa em C++ que preencha um vetor de 10 inteiros com informações vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem como a média dos elementos do vetor.
 * @author Matheus Vidal (20220055246)
 * @since 25/05/2022
 * @date 02/06/2022 
 */
#include <iostream>
#include <fstream>
using namespace std;
const int TAM = 10;

/**
 * @brief Função para encontrar o maior elemento do vetor
 * @details A função encontraMaior recebe um vetor de inteiros e retorna o maior valor presente no vetor
 * 
 * @param vetor Um vetor de inteiros que representa os elementos a serem verificados
 * @return Um valor inteiro que representa o maior valor encontrado no vetor
 */
int encontraMaior(int vetor[]){
  int maior = vetor[0];
  for(int i = 1; i < TAM; i++){
    if(vetor[i] > maior) maior = vetor[i];
  }
  return maior;
}

/**
 * @brief Função para encontrar o menor elemento do vetor
 * @details A função encontraMenor recebe um vetor de inteiros e retorna o menor valor presente no vetor
 * 
 * @param vetor Um vetor de inteiros que representa os elementos a serem verificados
 * @return Um valor inteiro que representa o menor valor encontrado no vetor
 */
int encontraMenor(int vetor[]){
  int menor = vetor[0];
  for(int i = 1; i < TAM; i++){
    if(vetor[i] < menor) menor = vetor[i];
  }
  return menor;
}

/**
 * @brief Função para calcular a média do vetor
 * @details 
A função calculaMedia recebe um vetor de inteiros e retorna a média dos elementos presentes no vetor, calculando a soma de todos os elementos e dividindo pelo tamanho do vetor
 * 
 * @param vetor Umm vetor de inteiros que representa os elementos a serem utilizados no cálculo da média
 * @return Um valor de ponto flutuante (float) que representa a média dos elementos do vetor
 */
float calculaMedia(int vetor[]){
  float media = 0;
  float soma = 0;
  for(int i = 0; i < TAM; i++){
    soma += vetor[i];
  }
  media = soma / TAM;
  return media;
}

/**
 * @brief Função principal do programa.
 * @return Retorna 0 em caso de sucesso.
 * 
 * @details A função main realiza as seguintes operações: abre um arquivo de entrada e um arquivo de saída, lê os valores do arquivo de entrada e armazena-os em um vetor, fecha o arquivo de entrada, encontra o menor e o maior elemento do vetor, calcula a média dos elementos, escreve os resultados no arquivo de saída e exibe uma mensagem de finalização. Caso ocorra algum erro ao abrir o arquivo de entrada, uma mensagem de erro é exibida.
 */
int main() {
  int vetor[TAM];
  ifstream arquivoEntrada;
  arquivoEntrada.open("./arquivos/entrada_q2.txt");
  ofstream arquivoSaida;
  arquivoSaida.open("./arquivos/saida_q2.txt");

  if(arquivoEntrada.is_open()){
    for(int i = 0; i < TAM; i++){
      arquivoEntrada >> vetor[i];
    }
    arquivoEntrada.close();
    int menor = encontraMenor(vetor);
    int maior = encontraMaior(vetor);
    float media = calculaMedia(vetor);
  
    arquivoSaida << "Menor elemento: " << menor << endl;
    arquivoSaida << "Maior elemento: " << maior << endl;
    arquivoSaida << "Média dos elementos: " <<media << endl;
  
    cout << "Finalizado. Os resultados foram escritos em 'saida_q2.txt'." << endl; 
    
    arquivoSaida.close();
  }else{
    cerr << "Não foi possível abrir o arquivo." << endl;
  }
  
  return 0;
}