#ifndef ORDENACAO_H
#define ORDENACAO_H
#include <iostream>


/**
 * @class AlgoritmosDeOrdenacao
 * @brief Template de classe para algoritmos de ordenação.
 * @tparam T O tipo de dado a ser ordenado.
 * @details Esta classe contém implementações de algoritmos de ordenação como Bubble Sort (crescente), Selection Sort (decrescente) e Merge Sort (crescente).
 */
template<typename T>
class AlgoritmosDeOrdenacao {
public:

   /**
    * @brief Ordena a lista de forma crescente usando o Bubble Sort.
    * @param list A lista a ser ordenada.
    * @param size O tamanho da lista.
    *
    * A complexidade do Bubble Sort é O(n^2), onde "n" é o tamanho da lista a ser ordenada.
    * Essa é uma complexidade quadrática, o que significa que o tempo de execução aumenta
    * rapidamente à medida que o tamanho da lista aumenta. A complexidade quadrática do Bubble Sort
    * ocorre porque, em cada passagem, são feitas comparações entre pares de elementos adjacentes
    * e, se necessário, são feitas trocas.
    */
    static void bubbleSort(T list[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (list[j] > list[j + 1]) {
                    std::swap(list[j], list[j + 1]);
                }
            }
        }
    }



   /**
    * @brief Ordena a lista de forma decrescente usando o Selection Sort.
    * @param list A lista a ser ordenada.
    * @param size O tamanho da lista.
    *
    * A complexidade do Selection Sort também é O(n^2), onde "n" é o tamanho da lista a ser ordenada.
    * Assim como o Bubble Sort, o Selection Sort possui uma complexidade quadrática. A complexidade
    * quadrática do Selection Sort ocorre porque, em cada iteração, é necessário percorrer a parte não
    * ordenada para encontrar o menor elemento.
    */
    static void selectionSort(T list[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int indice_minimo = i;
            for (int j = i + 1; j < size; j++) {
                if (list[j] < list[indice_minimo]) {
                if (list[j] > list[indice_minimo]) {
                    indice_minimo = j;
                }
            }
            std::swap(list[i], list[indice_minimo]);
            }
        }
    }



   /**
    * @brief Ordena a lista usando o Merge Sort.
    * @param list A lista a ser ordenada.
    * @param left O índice de início da sublista.
    * @param right O índice de fim da sublista.
    *
    * A complexidade do Merge Sort é O(n log n), onde "n" é o tamanho da lista a ser ordenada.
    * Essa é uma complexidade assintótica eficiente e torna o Merge Sort adequado para lidar com
    * grandes conjuntos de dados. O Merge Sort possui essa complexidade porque o algoritmo divide
    * repetidamente a lista em duas metades, até que sejam formadas sublistas com apenas um elemento.
    */
    static void mergeSort(T list[], int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        mergeSort(list, left, mid);
        mergeSort(list, mid + 1, right);
        merge(list, left, mid, right);
    }



    /**
     * @brief Ordena a lista de forma crescente usando o Insertion Sort.
     * @param list A lista a ser ordenada.
     * @param size O tamanho da lista.
     *
     * O Insertion Sort é um algoritmo de ordenação com complexidade O(n^2) no pior caso,
     * onde "n" é o tamanho da lista a ser ordenada. Ele percorre a lista da esquerda para
     * a direita, inserindo cada elemento em sua posição correta na sublista já ordenada.
     */
    static void insertionSort(T list[], int size) {
        for (int i = 1; i < size; i++) {
            T key = list.get(i);
            int j = i - 1;
            while (j >= 0 && list.get(j).getPrioridade() > key.getPrioridade()) {
                list.get(j + 1) = list.get(j);
                j--;
            }
            list.get(j + 1) = key;
        }
    }



    /**
     * @brief Ordena a lista usando o Quick Sort.
     * @param list A lista a ser ordenada.
     * @param left O índice de início da sublista.
     * @param right O índice de fim da sublista.
     *
     * O Quick Sort é um algoritmo de ordenação eficiente com complexidade média O(n log n),
     * onde "n" é o tamanho da lista a ser ordenada. Ele escolhe um elemento pivô, particiona
     * a lista em duas partes e recursivamente ordena as partes antes e depois do pivô.
     */
    static void quickSort(T list[], int left, int right) {
        if (left < right) {
            int pivotIndex = partition(list, left, right);
            quickSort(list, left, pivotIndex - 1);
            quickSort(list, pivotIndex + 1, right);
        }
    }



    /**
     * @brief Particiona a lista para o Quick Sort.
     * @param list A lista a ser particionada.
     * @param left O índice de início da sublista.
     * @param right O índice de fim da sublista.
     * @return O índice do pivô após a partição.
     */
    static int partition(T list[], int left, int right) {
        T pivot = list.get(right);
        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (list.get(j).getPrioridade() <= pivot.getPrioridade()) {
                i++;
                swapTasks(list.get(i), list.get(j));
            }
        }
        swapTasks(list.get(i + 1), list.get(right));
        return i + 1;
    }


private:

   /**
    * @brief Combina duas sublistas em uma única lista ordenada.
    * @param list A lista a ser combinada.
    * @param left O índice de início da primeira sublista.
    * @param mid O índice de fim da primeira sublista e início da segunda sublista.
    * @param right O índice de fim da segunda sublista.
    */
    static void merge(T list[], int left, int mid, int right) {
        int left_size = mid - left + 1;
        int right_size = right - mid;
        
        T* left_list = new T[left_size];
        T* right_list = new T[right_size];


        for (int i = 0; i < left_size; i++) {
            left_list[i] = list[left + i];
        }

        for (int j = 0; j < right_size; j++) {
            right_list[j] = list[mid + 1 + j];
        }

        int i = 0, j = 0, k = left;
        while (i < left_size && j < right_size) {
            if (left_list[i] <= right_list[j]) {
                list[k] = left_list[i];
                i++;
            } else {
                list[k] = right_list[j];
                j++;
            }
            k++;
        }

        while (i < left_size) {
            list[k] = left_list[i];
            i++;
            k++;
        }

        while (j < right_size) {
            list[k] = right_list[j];
            j++;
            k++;
        }
        delete[] left_list;
        delete[] right_list;
    }  
};


#endif