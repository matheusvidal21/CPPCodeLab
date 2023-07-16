#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

string obterSituacao(double media) {
    return (media >= 7.0) ? "Aprovado" : "Reprovado";
}

double calculaMedia(double nota1, double nota2, double nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

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
