#include <iostream>
#include "maiorPrimo.h"


//Função recursiva para saber qual o primeiro número primo antecessor do número recebido
int maiorPrimo(int n){
    //Chama a função "ehPrimo" em n
    if(ehPrimo(n)){
        return n; //Se for primo, retorna n
    //Caso não seja primo    
    }else{ 
        return maiorPrimo(n-1); //Chamada recursiva com n - 1, até chegar em um número que o if será verdadeiro
    }
}
