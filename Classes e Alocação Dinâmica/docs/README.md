# 🧩 Classes e Alocação Dinâmica

Nesta seção, implementei soluções para desafios de diferentes conceitos e tópicos, incluindo Recursividade, Git, Alocação Dinâmica e POO. Os desafios estão divididos em três questões distintas. Cada questão possui sua própria descrição e detalhes de implementação.

## Desafios propostos
- 🧮 [Questão 1](#-questão-1---sequência-tribonacci) - Sequência Tribonacci.
- 🐙 [Questão 2](#-questão-2---git-na-prática) - Git na Prática.
- 👨‍🎓 [Questão 3](#-questão-3---turma-e-alunos) - Turma e Alunos.


## 🧮 Questão 1 - Sequência Tribonacci:
Implemente as versões recursiva e iterativa do algoritmo de Tribonacci. Os números Tribonacci são definidos pela seguinte recursão:

- f(N) = 0, se N = 0
- f(N) = 0, se N = 1
- f(N) = 1, se N = 2
- f(N) = f(N-1) + f(N-2) + f(N-3), se N > 2
- 
O objetivo é criar uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de Tribonacci.

Para mais detalhes e respostas a questões relacionadas à sequência de Tribonacci, consulte a pasta [Q1](../Q1).


## 🐙 Questão 2 - Git na Prática:
Esta questão aborda perguntas frequentes sobre o Git em entrevistas de emprego. Escolha cinco perguntas dentre as seguintes:

- O que é "git cherry-pick"?
- O que é "git prefetch"?
- Você pode explicar o que "git reset" faz?
- O que é o "HEAD" no Git?
- Quando usar "git rebase" em vez de "git merge"?
- Qual é a diferença entre um 'fork' e um 'branch'?
- Após criar um commit e realizar um push, você percebeu que ainda precisa fazer algumas alterações. É possível fazer isso nesta fase do commit? Se sim, como?
- O que é um 'stash'?
- Como resolver conflitos no Git?
- O que é um "pull request"?
- Qual é a maneira mais eficiente de encontrar um commit errado?
- É possível corrigir commits quebrados?
- Qual é a diferença entre 'git get' e 'git pull'?
- Crie um arquivo Q2/README.md para responder a cada uma das perguntas selecionadas. Forneça exemplos práticos para ilustrar o fluxo de trabalho com comandos Git.

Para visualizar as respostas, consulte o arquivo [README.md](../Q2/README.md).


## 👨‍🎓 Questão 3 - Turma e Alunos:
Implemente as classes Aluno e Turma com os seguintes atributos e métodos:

`Classe Aluno:`
- Atributos privados: matrícula (int), nome (string), nota1 (float), nota2 (float), nota3 (float)
- Métodos públicos: getters e setters para todos os atributos, construtor e destrutor, calculaMedia (calcula a média das notas do aluno)

`Classe Turma:`
- Atributos privados: capacidade (int), vagas (int), alunos (Lista)
- Métodos públicos: getters e setters para os atributos, construtor (recebe a capacidade e aloca os alunos) e destrutor, imprimeAlunos (lista os alunos em ordem), ordenaCampo (ordena a lista de alunos por um campo específico, como "matrícula", "nome" ou "nota", utilizando o algoritmo de seleção)

Implemente a classe Turma usando alocação dinâmica para armazenar a lista de alunos. Teste o programa com pelo menos 5 alunos cadastrados e imprima a listagem antes e depois de ordenar os três campos (matrícula, nome, nota). Forneça exemplos de entrada e saída do código no arquivo Q3/README.md.

Para visualizar a implementação dessa questão consulte a pasta [Q3](../Q3).

## 📋 Soluções dos desafios

### Solução 1 - Sequência Tribonacci:
Na questão 1, aprendi a implementar as versões iterativa e recursiva do algoritmo da sequência de Tribonacci. Na solução iterativa, usei variáveis para armazenar os valores dos últimos três termos da sequência e um loop para calcular o próximo termo somando os três termos anteriores. Na solução recursiva, criei uma função que verifica os casos base da sequência e faz chamadas recursivas para calcular o valor do N-ésimo termo.

### Solução 3 - Turma e Alunos:
Na questão 3, aprendi a criar as classes Aluno e Turma para representar alunos e uma turma, respectivamente. Na classe Aluno, defini os atributos e implementei métodos para acessá-los, como getters e setters. Também criei um método para calcular a média das notas do aluno. Já na classe Turma, defini os atributos e implementei métodos para acessá-los, como getters e setters. Além disso, implementei métodos para imprimir os alunos da turma e ordenar a lista de alunos por campo específico. No programa principal, criei um objeto da classe Turma, recebi os dados dos alunos do usuário e utilizei os métodos da turma para imprimir a lista de alunos e ordená-la.

As soluções demonstram meu entendimento sobre a manipulação de objetos, alocação dinâmica de memória, criação e utilização de classes, implementação de métodos e organização do código.


## 🎓 Aprendizados
Durante a resolução desses desafios de programação, tive a oportunidade de aprender e aplicar diversos conceitos e técnicas. Abaixo estão alguns dos principais aprendizados adquiridos ao enfrentar esses desafios:

### Questão 1 - Sequência Tribonacci
- Compreensão e implementação de uma função recursiva para calcular a sequência de Tribonacci.
- Familiarização com a recursão e sua aplicação na solução de problemas.
- Entendimento dos casos base e das condições de parada em funções recursivas.
- Conhecimento da diferença entre abordagens recursivas e iterativas e quando utilizar cada uma delas.

### Questão 2 - Git na Prática
- Respostas e exemplos práticos para perguntas frequentes sobre o Git em entrevistas de emprego.
- Compreensão do funcionamento e aplicação de comandos Git, como cherry-pick, reset, rebase, merge e outros.
- Conhecimento sobre as melhores práticas de uso do Git no controle de versão de projetos.
###  Questão 3 - Turma e Alunos
- Implementação de classes e estruturas de dados em C++.
- Utilização de alocação dinâmica para armazenar objetos em memória.
- Implementação de métodos getters, setters, construtores e destrutores em classes.
- Aplicação de algoritmos de ordenação (selection sort) para organizar uma lista de alunos por campo específico.
