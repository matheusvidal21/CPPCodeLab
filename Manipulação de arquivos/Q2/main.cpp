#include <iostream>
#include <fstream>
using namespace std;
const int TAM = 10;

int encontraMaior(int vetor[]){
  int maior = vetor[0];
  for(int i = 1; i < TAM; i++){
    if(vetor[i] > maior) maior = vetor[i];
  }
  return maior;
}

int encontraMenor(int vetor[]){
  int menor = vetor[0];
  for(int i = 1; i < TAM; i++){
    if(vetor[i] < menor) menor = vetor[i];
  }
  return menor;
}

float calculaMedia(int vetor[]){
  float media = 0;
  float soma = 0;
  for(int i = 0; i < TAM; i++){
    soma += vetor[i];
  }
  media = soma / TAM;
  return media;
}


int main() {
  int vetor[TAM];
  ifstream arquivoEntrada;
  arquivoEntrada.open("./arquivos/entrada_q2.txt");
  ofstream arquivoSaida;
  arquivoSaida.open("./arquivos/saida_q2.txt");

  if(arquivoEntrada.is_open()){
    for(int i = 0; i < TAM; i++){
      arquivoEntrada >> vetor[i];
    }
    arquivoEntrada.close();
    int menor = encontraMenor(vetor);
    int maior = encontraMaior(vetor);
    float media = calculaMedia(vetor);
  
    arquivoSaida << "Menor elemento: " << menor << endl;
    arquivoSaida << "Maior elemento: " << maior << endl;
    arquivoSaida << "Média dos elementos: " <<media << endl;
  
    cout << "Finalizado. Os resultados foram escritos em 'saida_q2.txt'." << endl; 
    
    arquivoSaida.close();
  }else{
    cerr << "Não foi possível abrir o arquivo." << endl;
  }
  
  return 0;
}
