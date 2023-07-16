#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int MAX = 4;

int main() {
  ifstream arquivo;
  arquivo.open("./arquivos/entrada_q1.txt");

  if(arquivo.is_open()){
    string nomes[MAX], string;
    int i = 0;
    while(getline(arquivo, string) && i < MAX){
      nomes[i] = string;
      i++;
    }
    
    for(int j = 0; j < MAX; j++){
      cout << nomes[j] << endl;
    }
    
    arquivo.close();
  }else{
    cerr << "Não foi possível abrir o arquivo" << endl;
  }

  return 0;
}
