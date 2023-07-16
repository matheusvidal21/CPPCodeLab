# 🔍 Busca Binária

Esta seção contém implementações do algoritmo de busca binária em C++. Acesse a implementação [aqui](buscabinaria.hpp).

## 📋 Sobre a Busca Binária
A busca binária é um algoritmo eficiente para encontrar um elemento em uma lista ordenada. O processo de busca é dividido pela metade em cada iteração, reduzindo o espaço de busca pela metade a cada passo. Essa abordagem torna a busca binária muito rápida para grandes conjuntos de dados.


## 🛠️ Detalhes da Implementação 
Este repositório oferece duas versões da busca binária:

### Busca Binária Iterativa
A função BuscaBinariaIterativa implementa a busca binária de forma iterativa. Ela recebe uma lista ordenada arr, o tamanho da lista tamanho e o valor a ser buscado chave. O algoritmo utiliza um loop while para dividir repetidamente a lista em duas partes até encontrar a chave desejada ou determinar que a chave não está presente na lista. O trecho de código a seguir exemplifica a busca binária iterativa:
```cpp
int inicio = 0;
int fim = tamanho - 1;

while (inicio <= fim) {
    int meio = (inicio + fim) / 2;

    if (arr[meio] == chave) {
        return meio; // Valor encontrado
    } else if (arr[meio] > chave) {
        fim = meio - 1; // Busca na metade inferior
    } else {
        inicio = meio + 1; // Busca na metade superior
    }
}

return -1; // Valor não encontrado
```

### Busca Binária Recursiva
A função BuscaBinariaRecursiva implementa a busca binária de forma recursiva. Ela recebe uma lista ordenada arr, os índices de início inicio e fim fim da sublista a ser pesquisada, e o valor a ser buscado chave. O algoritmo divide a sublista pela metade e chama recursivamente a função até encontrar a chave desejada ou determinar que a chave não está presente na sublista. O trecho de código a seguir exemplifica a busca binária recursiva:
```cpp
if (inicio > fim) {
    return -1; // Valor não encontrado
}

int meio = (inicio + fim) / 2;

if (arr[meio] == chave) {
    return meio; // Valor encontrado
} else if (arr[meio] > chave) {
    return BuscaBinariaRecursiva(arr, inicio, meio - 1, chave); // Busca na metade inferior
} else {
    return BuscaBinariaRecursiva(arr, meio + 1, fim, chave); // Busca na metade superior
}
```