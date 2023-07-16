#ifndef BUSCABINARIA_H
#define BUSCABINARIA_H
#include <iostream>


template<typename T>
class AlgoritmosDeBuscaBinaria {
public:


    static int BuscaBinariaIterativa(T arr[], int tamanho, T chave){
        int inicio = 0;
        int fim = tamanho - 1;

        while(inicio <= fim){
            int meio = (inicio + fim)/2;
            if(arr[meio] == chave){
                return meio;
            }else if(arr[meio] > chave){
                fim = meio - 1;
            }else{
                inicio = meio + 1;
            }
        }
        return -1; // Retorna -1 se a chave não for encontrada
    }



    static int BuscaBinariaRecursiva(T arr[], int inicio, int fim, T chave){
        if(inicio > fim) return -1;// Retorna -1 se a chave não for encontrada

        int meio = (inicio+fim)/2;

        if(arr[meio] == chave){
            return meio;
        }else if(arr[meio] > chave){
            return BuscaBinariaRecursiva(arr, inicio, (meio - 1), chave);
        }else{
            return BuscaBinariaRecursiva(arr, (meio + 1), fim, chave);
        }
    }
};

#endif