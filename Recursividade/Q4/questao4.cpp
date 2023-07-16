//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>
#include <cstdlib> //Biblioteca para alocação dinâmica


//Função recursiva para calcular o número de vezes um digito d se repete em um número K
int qtd_de_vezes(int numero, int repetido){

    //No caso do número tiver só um digito
    if(numero < 10){
        if(numero == repetido){ //Verifica se esse dígito é igual ao número informado
            return 1; //Se for, retorna 1, ou seja, o dígito é igual ao número informado
        }else{
            return 0; //se não, retorna 0
        }
    }

    int quantidade = 0;
    int resto = numero % 10; //Pega o resto, ou seja o último digito do número

    //Verifica se esse digito é igual ao número informado
    if(resto == repetido){
        quantidade++; //Se for, aumenta a quantidade de repetições
    }

    //Chamada da função recursiva, somando as quantidades que repetiu, sempre dividindo o número por 10 para ir pro próximo digito
    return quantidade + qtd_de_vezes(numero / 10, repetido);

}

//Função principal
int main(){
    int numero, repetido;
    std::cout << "Informe um número: ";
    std::cin >> numero;
    std::cout << "Informe o número que você quer saber as repetições: ";
    std::cin >> repetido;

    //Imprime a quantidade de vezes que o número se repetiu, chamando a função recursiva "qtd_de_vezes"
    if(qtd_de_vezes(numero, repetido) == 0){
        std::cout << "O número " << repetido << " apareceu nenhuma vez no número " << numero << std::endl;
    }else if(qtd_de_vezes(numero, repetido) == 1){
        std::cout << "O número " << repetido << " apareceu 1 vez no número " << numero << std::endl;
    }else{
        std::cout << "O número " << repetido << " apareceu " << qtd_de_vezes(numero, repetido) << " vezes no número " << numero << std::endl;
    }

    return 0;
}   