/**
 * @file main.cpp
 * @brief Questão 3) Escreva um programa em C++ que leia de um arquivo as notas dos alunos de uma turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação (aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída, considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’.
 * @author Matheus Vidal (20220055246)
 * @since 25/05/2022
 * @date 02/06/2022 
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

/**
 * @brief Função para verificar a aprovação
 * @details A função obterSituacao recebe a média de um aluno como parâmetro e retorna a situação do aluno, sendo "Aprovado" se a média for maior ou igual a 7.0, e "Reprovado" caso contrário.
 * 
 * @param media Um valor do tipo double que representa a média do aluno.
 * @return Um valor do tipo string que indica a situação do aluno
 */
string obterSituacao(double media) {
    return (media >= 7.0) ? "Aprovado" : "Reprovado";
}

/**
 * @brief Função para calcular a média
 * @details A função calculaMedia recebe três notas como parâmetros (nota1, nota2 e nota3) e retorna a média dessas notas. A média é calculada somando as três notas e dividindo o resultado por 3.0.
 * 
 * @param nota1 Um valor do tipo 'double' representando a primeira nota
 * @param nota2 Um valor do tipo 'double' representando a segunda nota
 * @param nota3 Um valor do tipo 'double' representando a terceira nota
 * @return Retorna um valor do tipo double, que é a média das três notas fornecidas
 */
double calculaMedia(double nota1, double nota2, double nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

/**
 * @brief Função principal do programa.
 * @return Retorna 0 em caso de sucesso.
 * 
 * @details A função main é o ponto de entrada do programa. Ela abre um arquivo de entrada e um arquivo de saída, verifica se os arquivos foram abertos corretamente. Em um loop, lê cada linha do arquivo de entrada, separa os dados do aluno (nome, sobrenome e notas) e calcula a média das notas. Em seguida, determina a situação do aluno com base na média e escreve o nome, a média e a situação no arquivo de saída. Após processar todas as linhas do arquivo de entrada, fecha os arquivos e exibe uma mensagem de finalização.
 */
int main() {
    ifstream arquivoEntrada;
    arquivoEntrada.open("./arquivos/entrada_q3.txt");
    ofstream arquivoSaida;
    arquivoSaida.open("./arquivos/saida_q3.txt");

    if (!arquivoEntrada.is_open() || !arquivoSaida.is_open()) {
        cerr << "Não foi possível abrir o arquivo." << endl;
        return 1;
    }

    string linha;
    while (getline(arquivoEntrada, linha)) {
        string nome, sobrenome;
        double nota1, nota2, nota3;

        istringstream aluno(linha);
        getline(aluno, nome, ' ');
        getline(aluno, sobrenome, ' ');
        aluno >> nota1 >> nota2 >> nota3;

        double media = calculaMedia(nota1, nota2, nota3);
        string situacao = obterSituacao(media);

        arquivoSaida << left << setw(20) << nome + " " + sobrenome << setw(13) << fixed << setprecision(1) << media << situacao << endl;
    }

    arquivoEntrada.close();
    arquivoSaida.close();

    cout << "Finalizado. Os resultados foram escritos em 'saida_q3.txt'." << endl;

    return 0;
}
