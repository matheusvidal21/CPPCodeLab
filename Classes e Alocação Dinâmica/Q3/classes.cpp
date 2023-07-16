#include "classes.h"

//MÉTODOS DA CLASSE ALUNO

Aluno::Aluno(){
  matricula = 0;
  nome = "Sem nome";
  nota1 = 0;
  nota2 = 0;
  nota3 = 0;
}

Aluno::Aluno(int matricula, string nome, float nota1, float nota2, float nota3){
  this->matricula = matricula;
  this->nome = nome;
  this->nota1 = nota1;
  this->nota2 = nota2;
  this->nota3 = nota3;
}

Aluno::~Aluno(){}

void Aluno::setMatricula(int matricula){
  this->matricula = matricula;
}

int Aluno::getMatricula(){
  return matricula;
}

void Aluno::setNome(string nome){
  this->nome = nome;
}

string Aluno::getNome(){
  return nome;
}

void Aluno::setNota1(float nota1){
  this->nota1 = nota1;
}

float Aluno::getNota1(){
  return nota1;
}

void Aluno::setNota2(float nota2){
  this->nota2 = nota2;
}

float Aluno::getNota2(){
  return nota2;
}

void Aluno::setNota3(float nota3){
  this->nota3 = nota3;
}

float Aluno::getNota3(){
  return nota3;
}

float Aluno::calculaMedia(){
  return (nota1 + nota2 + nota3)/3;
}


//MÉTODOS DA CLASSE TURMA

Turma::Turma(int capacidade){
  this->capacidade = capacidade;
}

int Turma::getCapacidade(){
  return capacidade;
}

int Turma::getVagas(){
  return vagas;
}

void Turma::setVagas(int vagas){
  this->vagas = vagas;
}

void Turma::setLista(Aluno *lista){
  lista_alunos = lista;
}

void Turma::imprimeAlunos(){
  int pos = 1;
  for(int i = 0; i < capacidade; i ++){
    cout << "Nome do " << pos << "° aluno: " <<lista_alunos[i].getNome() << endl;
    cout <<  "Matrícula do " << pos << "° aluno: " << lista_alunos[i].getMatricula() << endl;
    cout <<  "Nota média do " << pos << "° aluno: " << lista_alunos[i].calculaMedia() << endl;
    cout << endl;
    pos++;
  }  
}

void Turma::ordenaCampo(string campo){
  if(campo == "Nome"){
    for(int i = 0; i < capacidade - 1; i++){
        int menor_indice = i;
        for(int j = i+1; j < capacidade; j++){
          if(lista_alunos[j].getNome() < lista_alunos[menor_indice].getNome()){
            menor_indice = j;
          }  
        }
      swap(lista_alunos[i], lista_alunos[menor_indice]);
    }


  }else if(campo == "Matrícula"){
    for(int i = 0; i < capacidade - 1; i++){
        int menor_indice = i;
        for(int j = i+1; j < capacidade; j++){
          if(lista_alunos[j].getMatricula() < lista_alunos[menor_indice].getMatricula()){
            menor_indice = j;
          }  
        }
      swap(lista_alunos[i], lista_alunos[menor_indice]);
    }
    
      
  }else if(campo == "Notas"){
    for(int i = 0; i < capacidade - 1; i++){
        int maior_indice = i;
        for(int j = i+1; j < capacidade; j++){
          if(lista_alunos[j].calculaMedia() > lista_alunos[maior_indice].calculaMedia()){
            maior_indice = j;
          }  
        }
      swap(lista_alunos[i], lista_alunos[maior_indice]);
    }
  }
}

Turma::~Turma(){ }