/**
 * @file main.cpp
 * @brief Questão 3) Implemente a turma usando alocação dinâmica para armazenar a lista de Alunos. Teste com pelo menos 5 alunos cadastrados, imprima a listagem antes e depois de ordenar os três campos.
 * @author Matheus Vidal (20220055246)
 * @since 03/05/2022
 * @date 06/05/2022 
 */
#include <iostream>
#include <string>
#include "classes.h"
using namespace std;


/**
 * @brief Função principal do programa.
 *
 * @param argc Número de argumentos passados para o programa.
 * @param argv Vetor de argumentos passados para o programa.
 * @return Retorna 0 em caso de sucesso.
 *
 * @brief Nesses trechos do código são criados os objetos. Alocando dinamicamente um vetor de objetos Aluno e depois criando um objeto Turma, na qual, dentro dela é criado uma lista de alunos (vetor de objetos Aluno)
 * @code
 * int i = 0, numAlunos = 3, pos = 1;
 * Aluno *lista = new Aluno[numAlunos];
 * int matricula = 0, nota1 = 0, nota2 = 0, nota3 = 0;
 * string nome;
 * @endcode
 * 
 * @code
 * Turma *lp = new Turma(3);
 * lp->setLista(lista);
 * cout << endl << "=== Listagem de alunos antes da ordenação ===" << endl;
 * lp->imprimeAlunos();
 * @endcode

 * @details Na função main, é recebido uma lista de alunos e criado uma turma com essa lista de alunos, após isso, é possível escolher qual critério utilizar para ordenação (Nome, matrícula ou notas) da turma
 */
int main() {
  int i = 0, numAlunos, pos = 1;

  cout << "Insira a capacidade da turma:" << endl;
  cin >> numAlunos;
  Aluno *lista = new Aluno[numAlunos]; //Lista de alunos
  int matricula = 0, nota1 = 0, nota2 = 0, nota3 = 0;
  string nome;


  //Recebe os alunos com nome, matrícula e notas
  while(i < numAlunos){

    system("clear");
    cout << "Informe a matrícula do " << pos << "° aluno: " << endl;
    cin >> matricula;
    lista[i].setMatricula(matricula);
    
    cout << "Informe o nome do " << pos << "° aluno: " << endl;
    cin >> nome;
    lista[i].setNome(nome);

    cout << "Informe a nota 1 do " << pos << "° aluno: " << endl;
    cin >> nota1;
    while (nota1 > 10.0) {
        std::cout << "A nota deve ser menor ou igual a 10, insira novamente:\n";
        std::cin >> nota1;
    }
    lista[i].setNota1(nota1);

    cout << "Informe a nota 2 do " << pos << "° aluno: " << endl;
    cin >> nota2;
    while (nota2 > 10.0) {
        std::cout << "A nota deve ser menor ou igual a 10, insira novamente:\n";
        std::cin >> nota2;
    }
    lista[i].setNota2(nota2);

    cout << "Informe a nota 3 do " << pos << "° aluno: " << endl; 
    cin >> nota3;
    while (nota3 > 10.0) {
        std::cout << "A nota deve ser menor ou igual a 10, insira novamente:\n";
        std::cin >> nota3;
    }
    lista[i].setNota3(nota3);
    i++;
    pos++;
  }

  system("clear");

  //Criando um objeto da classe Turma
  Turma *turma = new Turma(numAlunos); //Alocando dinamicamente, passando o número de alunos como capacidade
  turma->setLista(lista); //Setando lista de alunos da turma
  cout << endl << "=== Listagem de alunos antes da ordenação ===" << endl;
  turma->imprimeAlunos();

  int campo_escolhido;
  cout << "Escolha uma opção para ordenar:" << endl;
  cout << "1. Nome" << endl << "2. Matrícula" << endl << "3. Notas" << endl;
  cin >> campo_escolhido;
  
  switch(campo_escolhido){
    case 1: turma->ordenaCampo("Nome"); break;
    case 2: turma->ordenaCampo("Matrícula"); break;
    case 3: turma->ordenaCampo("Notas"); break;
    default: cout << "Insira um campo válido"; break;
  }
  cout << endl << "=== Listagem de alunos depois da ordenação ===" << endl;
  //Imprime os alunos, agora de maneira ordenada
  turma->imprimeAlunos();
  
  delete[] lista;
  delete turma;
  
  return 0;
}

