#include <iostream>
#include "functions.h"

int main() {

  int n;
  std::cout << "Informe o termo que deseja: " << std::endl;
  std::cin >> n;

  std::cout << "=========" << std::endl;
  std::cout << "Iterativo: O " << n << "º termo da sequência de tribonnaci é: "  << tribonnaciIterativo(n) << std::endl;
  std::cout << "Recursivo: O " << n << "º termo da sequência de tribonnaci é: "  << tribonnaciRecursivo(n) << std::endl;
 
  return 0;
}


