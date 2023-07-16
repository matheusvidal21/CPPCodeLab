# 📂 Manipulação de arquivos

Neste conjunto de desafios, trabalhei com a manipulação de arquivos em C++. Cada questão apresenta uma tarefa específica que envolve ler informações de um arquivo de entrada, processar os dados e escrever em um arquivo de saída.

# Desafios propostos
- 📝 [Desafio 1](#desafio-1-preenchendo-um-vetor-de-strings): Preenchendo um vetor de strings
- ➕ [Desafio 2](#desafio-2-operações-em-um-vetor-de-inteiros): Operações em um vetor de inteiros
- 📊 [Desafio 3](#desafio-3-cálculo-de-média-e-situação-dos-alunos): Cálculo de média e situação dos alunos
- 💰 [Desafio 4](#desafio-5-cálculo-da-folha-de-pagamento-por-departamento): Cálculo da folha de pagamento por departamento

## 📝 Desafio 1 - Preenchendo um vetor de strings:
Escreva um programa em C++ que preencha um vetor de 4 cadeias de caracteres (strings) com informações vindas de um arquivo de entrada e imprima cada elemento do vetor na saída padrão. Considere que cada string representa o nome de uma pessoa qualquer.

Exemplo de arquivo de entrada:
```
Ana
João
Maria
Pedro
```
- Acesse a solução [aqui](../Q1/main.cpp).


## ➕ Desafio 2 - Operações em um vetor de inteiros:
Implemente uma função recursiva que retorne o menor elemento em um vetor. A função deve percorrer o vetor recursivamente, comparando cada elemento com o menor valor encontrado até o momento. A cada chamada recursiva, o vetor é reduzido, permitindo a comparação dos elementos restantes.
Escreva um programa em C++ que preencha um vetor de 10 inteiros com informações vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem como a média dos elementos do vetor.

Exemplo de arquivo de entrada:
```
5
2
9
3
8
1
7
4
6
10
```
Exemplo de arquivo de saída:
```
Menor elemento: 1
Maior elemento: 10
Média dos elementos: 5.5
```
- Acesse a solução [aqui](../Q2/main.cpp).


## 📊 Desafio 3 - Cálculo de média e situação dos alunos:
Escreva um programa em C++ que leia de um arquivo as notas dos alunos de uma turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação (aprovado - média >= 7.0 ou reprovado). Tanto no arquivo de entrada quanto no de saída, considere que os dados em cada linha estão separados por um caractere de tabulação '\t'.

Exemplo de arquivo de entrada:
```
Ana    8.5
João   7.0
Maria  5.5
Pedro  6.5
```
Exemplo de arquivo de saída:
```
Ana    Média: 8.5    Situação: Aprovado
João   Média: 7.0    Situação: Aprovado
Maria  Média: 5.5    Situação: Reprovado
Pedro  Média: 6.5    Situação: Reprovado
```

- Acesse a solução [aqui](../Q3/main.cpp).


## 💰 Desafio 4 - Cálculo da folha de pagamento por departamento:
Alfredo é dono de uma empresa que precisa calcular o valor gasto com a folha de pagamento por departamento. Ele possui um arquivo com a relação de funcionários, contendo o nome, departamento e salário de cada funcionário. Seu objetivo é criar um programa em C++ que, dado o arquivo com a relação de funcionários, imprima o valor gasto com a folha de pagamento para um determinado departamento.

Você deve implementar uma função copia_dados(FILE* fl, int n, Funcionario[] pessoal) que lê os dados dos funcionários do arquivo e os armazena em um vetor. Em seguida, implemente uma função imprime_folha_pagamento(int n, Funcionario[] pessoal, char depto) que imprime o valor gasto para um determinado departamento.

Exemplo de arquivo de entrada:
```
4
Ana    A    2000
João   B    3000
Maria  A    2500
Pedro  C    3500
```
Exemplo de chamada da função imprime_folha_pagamento:
```
imprime_folha_pagamento(num_func, pessoal, 'A');
imprime_folha_pagamento(num_func, pessoal, 'B');
imprime_folha_pagamento(num_func, pessoal, 'C');
```
Exemplo de saída:
```
Departamento A - Valor gasto: R$4500
Departamento B - Valor gasto: R$3000
Departamento C - Valor gasto: R$3500
```
Observação: Você pode adaptar o código e as estruturas necessárias para implementar as classes Funcionario e Departamento se julgar necessário. Também é possível utilizar a estrutura Vector para armazenar os funcionários.

- Acesse a solução [aqui](../Q4).

# 📋 Resumo das soluções

## Solução 1 - Preenchendo um vetor com informações de um arquivo:
Neste desafio, o programa lê um arquivo de entrada que contém informações de nomes de pessoas e armazena esses nomes em um vetor de strings. O arquivo de entrada é lido linha por linha, e cada linha é armazenada em um elemento do vetor. Após preencher o vetor, o programa imprime cada elemento do vetor na saída padrão.

## Solução 2 - Manipulação de um vetor de inteiros e escrita em arquivo:
Neste desafio, o programa lê um arquivo de entrada que contém uma sequência de números inteiros e armazena esses números em um vetor. Em seguida, o programa encontra o menor e o maior elemento do vetor, calcula a média dos elementos e escreve essas informações em um arquivo de saída. As funções encontraMaior, encontraMenor e calculaMedia são utilizadas para realizar as respectivas operações.

## Solução 3 - Manipulação de notas de alunos e escrita em arquivo:
Neste desafio, o programa lê um arquivo de entrada que contém as notas dos alunos de uma turma. Cada linha do arquivo representa um aluno e suas respectivas notas, separadas por um caractere de tabulação. O programa calcula a média de cada aluno e determina se ele foi aprovado ou reprovado, com base na média. Em seguida, o programa escreve no arquivo de saída o nome, a média e a situação (aprovado ou reprovado) de cada aluno.

## Solução 4 -Manipulação de dados de funcionários e escrita em arquivo:
Neste desafio, o programa lê um arquivo de entrada que contém informações dos funcionários de uma empresa. Os dados incluem o funcional, nome, departamento e salário de cada funcionário. O programa cria um vetor dinâmico de objetos da classe Funcionario e realiza a cópia dos dados do arquivo para o vetor. Em seguida, o programa permite ao usuário informar um departamento desejado e imprime a folha de pagamento desse departamento na saída padrão. Além disso, o programa cria um arquivo de saída contendo a folha de pagamento de todos os funcionários. As funções copia_dados, imprime_folha_pagamento e cria_saida são utilizadas para realizar as respectivas operações. A classe Funcionario é definida no arquivo classes.h.

## 📚 Aprendizados
Durante a resolução desses desafios de manipulação de arquivos em C++, adquiri conhecimentos e habilidades valiosas, incluindo:

- Leitura e escrita de arquivos utilizando as classes ifstream e ofstream.
- Processamento de dados lidos de arquivos, utilizando estruturas como vetores e strings.
- Tratamento de erros ao lidar com arquivos, utilizando estruturas condicionais e tratamento de exceções.
- Organização do código em funções e classes, visando uma estrutura clara e modular.
- Utilização de estruturas de dados dinâmicas, como vetores dinâmicos.
- Implementação de classes e objetos para representar entidades relacionadas.
- Resolução de problemas específicos, como formatos de entrada e saída, algoritmos de busca e ordenação, e cálculos específicos.

Esses desafios fortaleceram minha compreensão de C++, aprimoraram minhas habilidades de programação e me proporcionaram uma experiência prática valiosa no contexto da manipulação de arquivos.