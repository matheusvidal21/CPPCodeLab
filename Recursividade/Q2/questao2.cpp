//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>

int menorValor(int vetor[], int size, int i = 0){ //Função recursiva
    /*OBS: i é o indice do menor valor parcial */
    //Quando o tamanho for 0
    if(size == 0){ 
        return vetor[i]; //Retorna i, o menor elemento
    }else{
        if(vetor[size] < vetor[i]){ //Compara o último elemento com o indice do menor valor parcial
            return menorValor(vetor, size - 1, size); //Chamada recursiva, com indice do tamanho atualizado e o indice size como menor valor
        }else{ 
            return menorValor(vetor, size - 1, i); //Chamada recursiva, com o indice tamanho atualizado e o indice i como menor valor
        }
    }
}

//Função principal
int main(){
    int n, i;
    std::cout << "Quantos elementos tem o vetor? ";
    std::cin >> n;
    int vetor[n];

    std::cout << "Informe os elementos do vetor? " << std::endl;
    
    //Estrutura de repetição para receber os valores do vetor
    for(i = 0; i < n; i++){
        std::cin >> vetor[i];
    }

    //Imprime o menor valor do vetor chamando a função "menorValor"
    //n-1 para passar indice do ultimo elemento do vetor
    std::cout << "O menor elemento do vetor é: " << menorValor(vetor, n - 1) << std::endl;

    return 0;
}