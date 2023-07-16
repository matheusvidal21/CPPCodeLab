//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>
#include <cstdlib> //Biblioteca para alocação dinâmica


//Função que "converte" um número inteiro em um vetor de dígitos
int* int_para_vetor(int numero, int* tamanho){  //Recebe um número inteiro e um ponteiro para um inteiro "tamanho"
    //Declaração de um ponteiro para inteiro "vetor" e inicializado nulo                                           
    int* vetor = nullptr; 
    //ponteiro tamanho inicializado com 0                     
    *tamanho = 0;

    //Trata o número caso seja negativo
    if(numero < 0){
        numero *= -1;
    }

    while(numero > 0){ //Loop que itera enquanto o número é maior que zero, a cada iteração um dígito do número é adicionado no vetor
        vetor = (int*)realloc(vetor, (*tamanho + 1) * sizeof(int)); //Realoca a memória dinamicamente
        vetor[*tamanho] = numero % 10; //O último elemento do vetor é atribuído ao dígito mais significativo do número
        (*tamanho)++;
        numero /= 10; //O valor do número é dividido por 10 para avançar para o próximo dígito.
    }

    /*OBS: É necessário alocar dinamicamente um vetor cujo tamanho é desconhecido a priori*/

    return vetor; //Retorna o ponteiro vetor, que agora contém todos os dígitos do número
}

int qtd_de_vezes(int numero, int repetido, int i, int qtd){ //Função recursiva para contar quantas vezes repete um número
    int tamanho = 0;
    int* digitos = int_para_vetor(numero, &tamanho); //Cria um ponteiro digitos do número, chamando a função "int_para_vetor"

    //Verifica se o tamanho do vetor é 1
    if(tamanho == 1){
        //Se o único digito for igual ao número pedido, retorna 1 (repete 1 vez)
        if(digitos[i] == repetido){
            return 1;
        //Senão, retorna 0 (não repete nenhuma vez)
        }else{
            return 0;
        }
    }else if(i < tamanho){ //Enquanto o indice for menor que o tamanho do vetor, ele executa este bloco
        if(digitos[i] == repetido){ //Verifica se o dígito "i" for igual ao número pedido
            return qtd_de_vezes(numero, repetido, ++i, ++qtd); //Chamada recursiva, com próximo índice (dígito) e o acréscimo da quantidade
        }else{ 
            return qtd_de_vezes(numero, repetido, ++i, qtd); //Chamada recursiva, com próximo índice (dígito) e a mesma quantidade
        }
    }else{ //Retorna a quantidade quando i for menor que o tamanho do vetor (quando verificar todos os dígitos)
        return qtd;
    }
}

//Função principal
int main(){
    int numero, repetido;
    std::cout << "Informe um número: ";
    std::cin >> numero;
    std::cout << "Informe o número você quer saber as repetições: ";
    std::cin >> repetido;

    //Imprime a quantidade de vezes que o número se repetiu, chamando a função recursiva "qtd_de_vezes"
    if(qtd_de_vezes(numero, repetido, 0, 0) == 0){
        std::cout << "O número " << repetido << " apareceu nenhuma vez no número " << numero << std::endl;
    }else if(qtd_de_vezes(numero, repetido, 0, 0) == 1){
        std::cout << "O número " << repetido << " apareceu 1 vez no número " << numero << std::endl;
    }else{
        std::cout << "O número " << repetido << " apareceu " << qtd_de_vezes(numero, repetido, 0, 0) << " vezes no número " << numero << std::endl;
    }

    return 0;
}   