//NOME: Matheus Costa Vidal
//MATRICULA: 20220055246
#include <iostream>

//Função recursiva
int somaDosCubos(int n){ 
    if(n == 1){  //Caso base se n = 1
        return n; 
    }else{  //Para os outros casos ≠ 1
        return (n * n * n) + somaDosCubos(n - 1); //Chamada recursiva, somando n³ com (n-1)³... 
    }
}

//Função principal
int main(){
    int n;
    std::cout << "Informe um número: ";
    std::cin >> n;  

    //Imprime o número chamando a função
    std::cout << "A soma dos " << n << " primeiros cubos é: " << somaDosCubos(n) << std::endl; 

    return 0; 
}