#include <iostream>
#include "primalidade.h"

//Função para verificar se o número recebido é primo
bool ehPrimo(int n){
    //Todo número menor ou igual a 1 não é primo
    if(n <= 1){
        return false;
    }
    //Loop para verificar se n tem algum divisivel além de 1 e do próprio n
    for(int i = 2; i * i < n; i++){
        if(n % i == 0){ //Se tiver algum número divisível, n não é primo, logo retornará falso
            return false;
        }
    }
    //Caso não encontre nenhum, o número é primo, logo retornará true
        return true;
}