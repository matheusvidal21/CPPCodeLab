//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>
//Inclusão dos arquivos de cabeçalhos que contém as funções
#include "fatorial.h"
#include "primalidade.h"
#include "maiorPrimo.h"

//Função principal
int main(){
    int n;
    std::cout << "Informe um número: ";
    //Recebe o número
    std::cin >> n;

    //Imprime o fatorial de "n", chamando a função "fatorial"
    std::cout << "O fatorial de " << n << " é: " << fatorial(n) << std::endl;
    //Imprime o primeiro número primo anterior ao fatorial de n, chamando a função "maiorPrimo"
    if(fatorial(n) == 2){
        std::cout << "Não existe nenhum número primo anterior a 2" << std::endl;
    }else{
        std::cout << "O maior número primo inteiro anterior a " << fatorial(n) << " é: " << maiorPrimo(fatorial(n)) << std::endl;
    }

    return 0;
}