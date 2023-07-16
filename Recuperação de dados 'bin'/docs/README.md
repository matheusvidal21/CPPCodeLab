# 💾 Recuperação de Dados em Arquivo Binário

Este desafio consiste em recuperar dados usando classes orientadas a objetos e salvar esses dados em um arquivo binário. Será utilizado um vetor da classe Funcionario com os atributos nome (string) e salario (double). Acessa a implementação da solução desse desafio [aqui](../main.cpp)

## 💼 Classe Funcionario 
A classe Funcionario representa um funcionário e possui os seguintes métodos:

- `Funcionario(std::string nome, double salario)`: Construtor que inicializa um objeto Funcionario com o nome e o salário fornecidos.
- `std::string getNome()`: Retorna o nome do funcionário.
- `void setNome(std::string nome)`: Define o nome do funcionário.
- `double getSalario()`: Retorna o salário do funcionário.
- `void setSalario(double salario)`: Define o salário do funcionário.
- `void printFuncionario()`: Imprime na tela os dados do funcionário.

## 🗂️ Função salvarDadosBinarios 
A função salvarDadosBinarios é responsável por salvar os dados do vetor de objetos Funcionario em um arquivo binário. Ela recebe como parâmetros o vetor de funcionários e o tamanho do vetor.

A função utiliza a classe fstream para abrir o arquivo "dados.bin" em modo de saída binária (std::ios::out | std::ios::binary). Em seguida, ela escreve os dados do vetor no arquivo usando o método write e fecha o arquivo.

```cpp
void salvarDadosBinarios(Funcionario *funcionarios, int tamanho)
{
  std::fstream arquivo("dados.bin", std::ios::out | std::ios::binary);

  if (arquivo.is_open())
  {
    arquivo.write(reinterpret_cast<char *>(funcionarios), sizeof(Funcionario) * tamanho);

    arquivo.close();
    std::cout << "Dados salvos no arquivo binário." << std::endl;
  }
  else
  {
    std::cerr << "Erro ao abrir o arquivo." << std::endl;
  }
}
```

## 📖 Função lerDadosBinarios 
A função lerDadosBinarios é responsável por ler os dados do arquivo binário e armazená-los no vetor de objetos Funcionario. Ela recebe como parâmetros uma referência para o vetor de funcionários e o tamanho do vetor.

A função utiliza a classe fstream para abrir o arquivo "dados.bin" em modo de entrada binária (std::ios::in | std::ios::binary). Em seguida, ela lê os dados do arquivo para o vetor usando o método read e fecha o arquivo.
```cpp
void lerDadosBinarios(Funcionario *&funcionarios, int tamanho)
{
  std::fstream arquivo("dados.bin", std::ios::in | std::ios::binary);

  if (arquivo.is_open())
  {
    arquivo.read(reinterpret_cast<char *>(funcionarios), sizeof(Funcionario) * tamanho);

    arquivo.close();
    std::cout << "Dados lidos do arquivo binário." << std::endl << std::endl;
  }
  else
  {
    std::cerr << "Erro ao abrir o arquivo." << std::endl;
  }
}
```

## 🛠️ Função principal main 
A função principal main é onde são criados os objetos Funcionario, preenchidos com dados e chamadas as funções salvarDadosBinarios e lerDadosBinarios.

No exemplo fornecido, são criados três objetos Funcionario, cada um com nome e salário definidos. Em seguida, a função salvarDadosBinarios é chamada para salvar os dados no arquivo binário.
```cpp
Funcionario *funcionarios = new Funcionario[TAM];

funcionarios[0].setSalario(2000);
funcionarios[0].setNome("Matheus");
funcionarios[1].setSalario(3000);
funcionarios[1].setNome("Marcos");
funcionarios[2].setSalario(4000);
funcionarios[2].setNome("Bruno");

salvarDadosBinarios(funcionarios, TAM);
```

Em seguida, o vetor de funcionários é resetado, e a função lerDadosBinarios é chamada para ler os dados do arquivo binário e armazená-los no vetor.
```cpp
funcionarios = nullptr;
delete[] funcionarios;
funcionarios = new Funcionario[TAM];

lerDadosBinarios(funcionarios, TAM);
```

Por fim, os dados dos funcionários são impressos na tela.
```cpp
for (int i = 0; i < TAM; i++)
{
  funcionarios[i].printFuncionario();
}
```
## 📌 Observações
- É importante ressaltar que o tamanho do vetor utilizado para salvar e recuperar os dados deve ser consistente para garantir a integridade dos dados.
- A implementação utiliza o conceito de cast reinterpret_cast para converter o ponteiro do vetor para o tipo char* e permitir a leitura/gravação dos dados em formato binário.

Essa é a solução para recuperar os dados e salvar o vetor de objetos Funcionario em um arquivo binário utilizando a biblioteca fstream no C++
