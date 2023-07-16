# 🔄 Algoritmos de ordenação

Esta seção contém implementações de algoritmos de ordenação em C++. Acesse a implementação [aqui](ordenacao.hpp). Os seguintes algoritmos estão disponíveis:

- Bubble Sort (crescente)
- Selection Sort (decrescente)
- Merge Sort (crescente)
- Insertion Sort (crescente)
- Quick Sort (crescente)

## Bubble Sort
O Bubble Sort é um algoritmo simples de ordenação que percorre a lista várias vezes, comparando pares adjacentes e fazendo trocas se estiverem na ordem errada. O processo é repetido até que a lista esteja completamente ordenada. A complexidade do Bubble Sort é O(n^2), onde "n" é o tamanho da lista. Isso significa que o tempo de execução aumenta rapidamente à medida que o tamanho da lista aumenta. A implementação do Bubble Sort no código fornecido utiliza dois loops aninhados para percorrer a lista e realizar as trocas quando necessário:
```cpp
for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
        if (list[j] > list[j + 1]) {
            std::swap(list[j], list[j + 1]);
        }
    }
}
```

## Selection Sort
O Selection Sort é outro algoritmo simples de ordenação. Ele divide a lista em duas partes: a parte ordenada e a parte não ordenada. Em cada iteração, o menor elemento da parte não ordenada é encontrado e trocado com o primeiro elemento da parte não ordenada. Esse processo é repetido até que a lista esteja completamente ordenada. A complexidade do Selection Sort também é O(n^2), onde "n" é o tamanho da lista. A implementação do Selection Sort no código fornecido utiliza dois loops aninhados para percorrer a lista e encontrar o menor elemento:
```cpp
for (int i = 0; i < size - 1; i++) {
    int indice_minimo = i;
    for (int j = i + 1; j < size; j++) {
        if (list[j] < list[indice_minimo]) {
            indice_minimo = j;
        }
    }
    std::swap(list[i], list[indice_minimo]);
}
```


## Merge Sort 
O Merge Sort é um algoritmo de ordenação eficiente que utiliza a abordagem "divide and conquer" (dividir e conquistar). Ele divide repetidamente a lista em duas metades, ordena cada metade separadamente e depois combina as metades em uma única lista ordenada. A complexidade do Merge Sort é O(n log n), onde "n" é o tamanho da lista. Isso o torna adequado para lidar com grandes conjuntos de dados. A implementação do Merge Sort no código fornecido utiliza uma função de mesclagem recursiva para combinar as metades ordenadas:
```cpp
static void mergeSort(T list[], int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(list, left, mid);
    mergeSort(list, mid + 1, right);
    merge(list, left, mid, right);
}
```
A função merge combina duas sublistas ordenadas em uma única lista ordenada. Ela utiliza três loops para comparar os elementos das sublistas e mesclá-los em uma nova lista temporária. Em seguida, os elementos são copiados de volta para a lista original:
```cpp
static void merge(T list[], int left, int mid, int right) {
    int left_size = mid - left + 1;
    int right_size = right - mid;

    // Cria duas sublistas temporárias
    T* left_list = new T[left_size];
    T* right_list = new T[right_size];

    // Copia os elementos para as sublistas temporárias
    for (int i = 0; i < left_size; i++) {
        left_list[i] = list[left + i];
    }

    for (int j = 0; j < right_size; j++) {
        right_list[j] = list[mid + 1 + j];
    }

    // Mescla as sublistas temporárias em uma única lista ordenada
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

    // Copia os elementos restantes da sublista esquerda, se houver
    while (i < left_size) {
        list[k] = left_list[i];
        i++;
        k++;
    }

    // Copia os elementos restantes da sublista direita, se houver
    while (j < right_size) {
        list[k] = right_list[j];
        j++;
        k++;
    }

    // Libera a memória das sublistas temporárias
    delete[] left_list;
    delete[] right_list;
}
```


## Insertion Sort 
O Insertion Sort é um algoritmo de ordenação simples que percorre a lista da esquerda para a direita, inserindo cada elemento em sua posição correta na sublista já ordenada. A complexidade do Insertion Sort é O(n^2) no pior caso, onde "n" é o tamanho da lista. A implementação do Insertion Sort no código fornecido utiliza um loop for para percorrer a lista e um loop while para inserir cada elemento na posição correta:
```cpp
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
```

## Quick Sort
O Quick Sort é um algoritmo de ordenação eficiente que utiliza a abordagem "divide and conquer" (dividir e conquistar). Ele escolhe um elemento pivô da lista, particiona a lista em duas partes com base no pivô e, em seguida, recursivamente ordena as partes antes e depois do pivô. A complexidade média do Quick Sort é O(n log n), onde "n" é o tamanho da lista. A implementação do Quick Sort no código fornecido utiliza uma função de particionamento para dividir a lista:

```cpp
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
```
A função partition escolhe um pivô e rearranja os elementos da lista de forma que todos os elementos menores que o pivô estejam à sua esquerda e todos os elementos maiores estejam à sua direita. Em seguida, retorna o índice do pivô após a partição. A função quickSort chama recursivamente a si mesma para ordenar as partes antes e depois do pivô.


### Essas são apenas explicações básicas de cada algoritmo de ordenação. Para uma compreensão mais completa e detalhada de cada algoritmo, é recomendável estudar mais a fundo seus conceitos e analisar o código fornecido com atenção.
