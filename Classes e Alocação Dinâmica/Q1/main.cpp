/**
 * @file iterativo.cpp
 * @brief Questão 1) Implemente as versões recursivas e iterativas para o algorítmo de “tribonacci” abaixo, pesquise e responda às seguintes questões conceituais em uma arquivo “Q1/README.md”
 * @author Matheus Vidal (20220055246)
 * @since 03/05/2022
 * @date 06/05/2022 
 */
#include <iostream>
#include "functions.h"

/**
 * @brief Função principal do programa.
 *
 * @param argc Número de argumentos passados para o programa.
 * @param argv Vetor de argumentos passados para o programa.
 * @return Retorna 0 em caso de sucesso.
 *
 * @details Na função main, é recebido "n" e depois imprimido o nº termo da sequẽncia de tribonnaci
 * @details Entrada-> Informe o termo que deseja: 5
 * @details Saída-> Iterativo: O 5º termo da sequência de tribonnaci é: 4  Recursivo: O 5º termo da sequência de tribonnaci é: 4
 */
int main() {

  int n;
  std::cout << "Informe o termo que deseja: " << std::endl;
  std::cin >> n;

  std::cout << "=========" << std::endl;
  std::cout << "Iterativo: O " << n << "º termo da sequência de tribonnaci é: "  << tribonnaciIterativo(n) << std::endl;
  std::cout << "Recursivo: O " << n << "º termo da sequência de tribonnaci é: "  << tribonnaciRecursivo(n) << std::endl;
 
  return 0;
}


