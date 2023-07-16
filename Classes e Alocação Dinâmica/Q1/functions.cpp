#include <iostream>
#include "functions.h"

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

int tribonnaciRecursivo(int n){

  if(n == 0 || n == 1){
    return 0;
  }
  if(n == 2){
    return 1;
  }
  
  return tribonnaciRecursivo(n - 1) + tribonnaciRecursivo(n - 2) + tribonnaciRecursivo(n - 3);
  
}