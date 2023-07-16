#include <iostream>
#include <string>

using namespace std;


class Aluno{
  private:
    int matricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
   
  public:

    Aluno();

    Aluno(int matricula, string nome, float nota1, float nota2, float nota3);

    ~Aluno();

    int getMatricula();

    void setMatricula(int matricula);
   
    string getNome();

    void setNome(string nome);

    float getNota1();
 
    void setNota1(float nota1);

    float getNota2();

    void setNota2(float nota2);
 
    float getNota3();
 
    void setNota3(float nota3);

    float calculaMedia();
};



class Turma{
  private:
    int capacidade;
    int vagas;
    Aluno *lista_alunos;

  public:

    Turma(int capacidade);

    ~Turma();

    void imprimeAlunos();

    int getCapacidade();

    int getVagas();

    void setVagas(int vagas);

    void setLista(Aluno *lista);

    void ordenaCampo(string campo);


};


