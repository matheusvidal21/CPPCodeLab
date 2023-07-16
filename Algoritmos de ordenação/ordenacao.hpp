#ifndef ORDENACAO_H
#define ORDENACAO_H
#include <iostream>


template<typename T>
class AlgoritmosDeOrdenacao {
public:


    static void bubbleSort(T list[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (list[j] > list[j + 1]) {
                    std::swap(list[j], list[j + 1]);
                }
            }
        }
    }



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



    static void mergeSort(T list[], int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        mergeSort(list, left, mid);
        mergeSort(list, mid + 1, right);
        merge(list, left, mid, right);
    }



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



    static void quickSort(T list[], int left, int right) {
        if (left < right) {
            int pivotIndex = partition(list, left, right);
            quickSort(list, left, pivotIndex - 1);
            quickSort(list, pivotIndex + 1, right);
        }
    }



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