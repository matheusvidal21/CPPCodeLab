#ifndef BUSCABINARIA_H
#define BUSCABINARIA_H
#include <iostream>


/**
 * @class AlgoritmosDeBuscaBinaria
 * @brief Template de classe para algoritmo de busca binária genérico.
 * @tparam T O tipo de dado a ser buscado.
 */
template<typename T>
class AlgoritmosDeBuscaBinaria {
public:

   /**
    * @brief Realiza uma busca binária iterativa em uma lista ordenada.
    * @param arr A lista ordenada.
    * @param tamanho O tamanho da lista.
    * @param chave O valor a ser buscado.
    * @return O índice do valor encontrado ou -1 se não for encontrado.
    */
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



   /**
    * @brief Realiza uma busca binária recursiva em uma lista ordenada.
    * @param arr A lista ordenada.
    * @param inicio O índice de início da sublista.
    * @param fim O índice de fim da sublista.
    * @param chave O valor a ser buscado.
    * @return O índice do valor encontrado ou -1 se não for encontrado.
    */
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