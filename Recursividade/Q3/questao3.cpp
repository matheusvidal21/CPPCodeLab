//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>

double harmonico(int n){ //Função recursiva
    if(n == 1){ //Caso base quando n = 1
        return n;
    }else{ //Para os outros casos ≠ 1
        return ((1.0/n) + harmonico(n-1)); //Chamada recursiva, somando 1/n com 1/n-1...
    }
}

//Função principal
int main(){
    int n;
    std::cout << "Informe um número: ";
    std::cin >> n;

    //Imprime o número harmônico chamando a função recursiva e passando o valor de n
    std::cout << "O número harmônico de " << n << " é: " << harmonico(n) << std::endl; 

    return 0;
}