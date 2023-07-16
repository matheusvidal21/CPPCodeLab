#include <iostream>
#include "fatorial.h"


//Função recursiva para calcular o fatorial do número recebido
int fatorial(int n){
    if(n == 1){ //Caso base, quando n = 1
        return n;
    }else{
        return n * fatorial(n-1); //Multiplica n com seu antecessor, chamando a função novamente com n-1
    }
}