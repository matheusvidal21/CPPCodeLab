#include "funcoes.h"

void ordenaMaior(Funcionario funcionarios[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int menor_indice = i;
    for (int j = i + 1; j < size; j++) {
      if (funcionarios[j].getSalario() >
          funcionarios[menor_indice].getSalario()) {
        menor_indice = j;
      }
    }
    std::swap(funcionarios[i], funcionarios[menor_indice]);
  }

  std::cout << "=====================================" << std::endl;
  std::cout << "Funcionários com os maiores salários: " << std::endl;

  if (size < 3) {
    for (int i = 0; i < 2; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  } else {
    for (int i = 0; i < 3; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  }
}

void ordenaMenor(Funcionario funcionarios[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int menor_indice = i;
    for (int j = i + 1; j < size; j++) {
      if (funcionarios[j].getSalario() <
          funcionarios[menor_indice].getSalario()) {
        menor_indice = j;
      }
    }
    std::swap(funcionarios[i], funcionarios[menor_indice]);
  }

  std::cout << "=====================================" << std::endl;
  std::cout << "Funcionários com os menores salários: " << std::endl;

  if (size < 3) {
    for (int i = 0; i < 2; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  } else {
    for (int i = 0; i < 3; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  }
}