/**
 * @file classes.h
 * @brief Arquivo cabeçalho que contém as classes do projeto
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @class Aluno
 * @brief Classe para Aluno
 */
class Aluno{
  private:
    int matricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
   
  public:
    /**
    * @brief Construtor padrão da classe
    */
    Aluno();
    /**
    * @brief Construtor da classe
    *
    * @param matricula Matrícula do aluno
    * @param nome Nome do aluno
    * @param nota1 Primeira nota do aluno
    * @param nota2 Segunda nota do aluno
    * @param nota3 Terceira nota do aluno
    */
    Aluno(int matricula, string nome, float nota1, float nota2, float nota3);
    /**
    * @brief Destrutor da classe Aluno
    */
    ~Aluno();
    /**
    * @brief Método get da Matrícula
    * @return A matrícula do aluno
    */
    int getMatricula();
    /**
    * @brief Método set da Matrícula
    * @param matricula Matrícula do aluno
    */
    void setMatricula(int matricula);
    /**
    * @brief Método get do Nome
    * @return O nome do aluno
    */    
    string getNome();
    /**
    * @brief Método set do Nome
    * @param nome Nome do aluno
    */
    void setNome(string nome);
    /**
    * @brief Método get da Nota1
    * @return A nota 1 do aluno
    */
    float getNota1();
    /**
    * @brief Método set da Nota1
    * @param nota1 Primeira nota do aluno
    */
    void setNota1(float nota1);
    /**
    * @brief Método get da Nota2
    * @return A nota 2 do aluno
    */
    float getNota2();
    /**
    * @brief Método set da Nota2
    * @param nota2 Segunda nota do aluno
    */
    void setNota2(float nota2);
    /**
    * @brief Método get da Nota3
    * @return A nota 3 do aluno
    */
    float getNota3();
    /**
    * @brief Método set da Nota3
    * @param nota3 Terceira nota do aluno
    */
    void setNota3(float nota3);
    /**
    * @brief Método que calcula a média do aluno
    * @return A média entre as 3 notas do aluno
    */
    float calculaMedia();
};


/**
 * @class Turma
 * @brief Classe para Turma
 */
class Turma{
  private:
    int capacidade;
    int vagas;
    Aluno *lista_alunos;

  public:
    /**
    * @brief Construtor padrão da classe
    * @param capacidade Capacidade da turma
    */
    Turma(int capacidade);
    /**
    * @brief Destrutor da classe Turma
    */
    ~Turma();
    /**
    * @brief Método para imprimir os alunos da Turma
    */
    void imprimeAlunos();
    /**
    * @brief Método get da Capacidade
    * @return A Capacidade da Turma
    */
    int getCapacidade();
    /**
    * @brief Método get da Vagas
    * @return O número de Vagas da Turma
    */
    int getVagas();
    /**
    * @brief Método set da Vagas
    * @param vagas Quantidade de vagas da turma
    */
    void setVagas(int vagas);
    /**
    * @brief Método set da lista_alunos
    * @param lista Lista de alunos
    */
    void setLista(Aluno *lista);
    /**
    * @brief Método para ordenar a turma
    * @param campo Critério para ordenação (Nome, Matrícula ou Notas)
    */
    void ordenaCampo(string campo);


};


