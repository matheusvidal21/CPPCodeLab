#include <iostream>
#include "functions.h"


/**
 * @brief Função que calcula o termo n da sequência de Tribonnaci, de maneira iterativa
 *
 * @param n O termo da sequência
 * @return Retorna o valor do termo
 *
 */
int tribonnaciIterativo(int n){
  int a = 0;
  int b = 0;
  int c = 1;
  int tribonnaci, i;

  if(n == 0 || n == 1){
      return 0;
  }
  if(n == 2){
      return 1;
  }else{
      for(i = 3; i <= n; i++){
        tribonnaci = a + b + c;
        a = b;
        b = c;
        c = tribonnaci;
      }
    return tribonnaci;
    }
}

/**
 * @brief Função que calcula o termo n da sequência de Tribonnaci, de maneira recursiva
 *
 * @param n O termo da sequência
 * @return Retorna o valor do termo
 *

 */
int tribonnaciRecursivo(int n){

  if(n == 0 || n == 1){
    return 0;
  }
  if(n == 2){
    return 1;
  }
  
  return tribonnaciRecursivo(n - 1) + tribonnaciRecursivo(n - 2) + tribonnaciRecursivo(n - 3);
  
}