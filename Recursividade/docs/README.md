# 🔁 Recursividade

Este seção contém soluções para desafios que envolvem o uso de recursividade. A recursividade é um conceito fundamental na programação, onde uma função é capaz de chamar a si mesma repetidamente até atingir uma condição de parada.

# Desafios propostos
- [Desafio 1](#desafio-1-soma-dos-primeiros-n-cubos): Soma dos primeiros n cubos
- [Desafio 2](#desafio-2-menor-elemento-em-um-vetor): Menor elemento em um vetor
- [Desafio 3](#desafio-3-cálculo-do-número-harmônico): Cálculo do número harmônico
- [Desafio 4](#desafio-4-contagem-de-dígitos-em-um-número): Contagem de dígitos em um número
- [Desafio 5](#desafio-5-maior-número-primo-anterior-ao-fatorial): Maior número primo anterior ao fatorial

## Desafio 1: Soma dos primeiros n cubos
Implemente uma função recursiva que calcule a soma dos primeiros n cubos. A fórmula para a soma dos cubos é dada por:

S = 1³ + 2³ + ... + n³

A função recursiva deve ser capaz de calcular essa soma de forma eficiente, chamando a si mesma para calcular os cubos consecutivos até atingir a condição de parada
- Acesse a solução [aqui](../Q1/questao1.cpp).


## Desafio 2: Menor elemento em um vetor
Implemente uma função recursiva que retorne o menor elemento em um vetor. A função deve percorrer o vetor recursivamente, comparando cada elemento com o menor valor encontrado até o momento. A cada chamada recursiva, o vetor é reduzido, permitindo a comparação dos elementos restantes.
- Acesse a solução [aqui](../Q2/questao2.cpp).


## Desafio 3: Cálculo do número harmônico
Em matemática, o número harmônico Hn é definido como o enésimo termo da série harmônica. Implemente uma função recursiva que calcule o valor de qualquer Hn. Ou seja, dado um número inteiro n, a função deve ser capaz de calcular o valor correspondente do número harmônico.
- Acesse a solução [aqui](../Q3/questao3.cpp).


## Desafio 4: Contagem de dígitos em um número
Implemente uma função recursiva que determine quantas vezes um dígito d ocorre em um número natural K. Por exemplo, dado o número 362867 e o dígito 6, a função deve retornar 2, indicando que o dígito 6 ocorre duas vezes no número.
- Acesse a solução [aqui](../Q4/questao4.cpp).

## Desafio 5: Maior número primo anterior ao fatorial
Implemente uma função que leia um valor inteiro e retorne o maior número primo inteiro anterior ao valor do fatorial desse número. O programa deve ser modular, dividido em arquivos header e source para cada função específica, seguindo uma estrutura organizada.

O cálculo do fatorial e a determinação do maior número primo devem ser realizados de forma recursiva, utilizando os conceitos de recursividade para obter os resultados desejados. Um Makefile é fornecido para compilação e geração do executável final.

Por exemplo, se o valor lido for 3, o fatorial de 3 é 6 e o maior número primo anterior a 6 é 5. Se o valor lido for 5, o fatorial de 5 é 120 e o maior número primo anterior a 120 é 113. O programa deve fornecer o resultado correto para qualquer valor inteiro fornecido.
- Acesse a solução [aqui](../Q5/).

# Resumo das soluções

## Solução 1: Soma dos primeiros n cubos
A solução implementa uma função recursiva chamada somaDosCubos que calcula a soma dos primeiros n cubos. A função utiliza a recursividade para somar o cubo do número atual com a chamada recursiva para o próximo número. O caso base é quando n é igual a 1, onde a função retorna 1. A função principal lê um número n e imprime a soma dos n primeiros cubos.

## Solução 2: Menor elemento em um vetor
A solução implementa uma função recursiva chamada menorValor que encontra o menor elemento em um vetor. A função percorre o vetor recursivamente, comparando cada elemento com o menor valor encontrado até o momento. A cada chamada recursiva, o tamanho do vetor é reduzido e o índice do menor valor parcial é atualizado. A função principal lê o tamanho e os elementos do vetor e imprime o menor valor encontrado.

## Solução 3: Cálculo do número harmônico
A solução implementa uma função recursiva chamada harmonico que calcula o valor do enésimo termo da série harmônica. A função utiliza a recursividade para somar 1/n com a chamada recursiva para o próximo número. O caso base é quando n é igual a 1, onde a função retorna 1. A função principal lê um número n e imprime o número harmônico correspondente.

## Solução 4: Contagem de dígitos em um número
A solução implementa uma função recursiva chamada contarDigitos que determina quantas vezes um dígito d ocorre em um número natural K. A função utiliza a recursividade para dividir o número por 10 a cada chamada recursiva, verificando se o último dígito é igual ao d. O caso base é quando o número é menor que 10, onde a função retorna 1 se o último dígito for igual a d ou 0 caso contrário. A função principal lê o número K e o dígito d, e imprime a contagem de ocorrências.

## Solução 5: Maior número primo anterior ao fatorial
A solução consiste em um programa modular que lê um número inteiro e retorna o maior número primo inteiro anterior ao valor do fatorial desse número. Ele utiliza funções recursivas para calcular o fatorial e verificar a primalidade dos números. Os cálculos são feitos de forma modular, separando as funções em arquivos de cabeçalho e implementando um programa principal que as utiliza.


