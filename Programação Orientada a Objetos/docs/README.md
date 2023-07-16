# 👨‍💻 Projeto de Programação Orientada a Objetos - Cadastramento de Funcionário

Este projeto consiste na implementação da classe Funcionário com atributos e métodos específicos. A classe Funcionário permite armazenar e manipular informações relacionadas a funcionários de uma empresa, como nome e salário

## 📋 Funcionalidades Implementadas
1. `Construtor e Métodos Getters`: A classe Funcionário possui um construtor que recebe o nome e salário do funcionário como parâmetros. Além disso, foram implementados métodos getters para obter o nome e salário do funcionário.

2. `Método aumentarSalario()`: A classe Funcionário possui o método aumentarSalario(int percAumento), que permite aumentar o salário do funcionário em um percentual específico.

3. `Ordenação dos Funcionários de Maior Salário`: Foi implementada uma função de ordenação para imprimir os dados dos 3 funcionários de maior salário.

4. `Ordenação dos Funcionários de Menor Salário`: Foi implementada uma função de ordenação para imprimir os dados dos 3 funcionários de menor salário.

5. `Sobrecarga do Operador +`: Foi implementada a sobrecarga do operador + para incrementar o valor do salário do funcionário em 10%.

6. `Sobrecarga do Operador de Inserção (std::cout <<)`: Foi implementada a sobrecarga do operador de inserção para imprimir os objetos da classe Funcionário de forma personalizada.

7. `Alocação Dinâmica de Memória`: Foi adotada uma estratégia de alocação dinâmica de memória para armazenar os dados dos funcionários. Inicialmente, é criado um vetor de tamanho 1. Sempre que o vetor está cheio, é alocado um novo vetor com tamanho maior e os dados do vetor anterior são copiados para o novo vetor. Esse procedimento é repetido a cada vez que o vetor atinge sua capacidade máxima.

## 🛠️ Implementação
A implementação personalizada do projeto está organizada em três arquivos: main.cpp, funcoes.cpp e classes.cpp. Vamos analisar cada um deles.

### main.cpp
O arquivo main.cpp contém a função main(), que é responsável por testar a classe Funcionario e suas funcionalidades. O programa permite o cadastramento de funcionários, ordenação dos funcionários por salário, aumento de salário e exibição dos resultados.

O código começa definindo variáveis, como tam para controlar o tamanho do vetor de funcionários, nome para armazenar o nome digitado pelo usuário e salario para armazenar o salário digitado. Em seguida, é criado um vetor dinâmico de objetos Funcionario com tamanho inicial de 1.

A partir de um loop, o programa solicita ao usuário o nome e salário de cada funcionário e armazena essas informações no vetor de funcionários. Caso o vetor esteja cheio, um novo vetor é criado com tamanho maior, os dados são copiados para o novo vetor e a memória do vetor anterior é liberada. O loop continua até que o usuário decida não cadastrar mais funcionários.

Após o cadastro, o programa exibe os funcionários cadastrados. Em seguida, realiza a ordenação dos funcionários por salário (maiores salários primeiro) e exibe os 3 funcionários com maiores salários. Em seguida, realiza a ordenação dos funcionários por salário (menores salários primeiro) e exibe os 3 funcionários com menores salários.

O programa solicita ao usuário um percentual de aumento de salário e realiza o aumento para cada funcionário. Em seguida, exibe os salários atualizados com um aumento adicional de 10%.

Por fim, o vetor de funcionários é liberado da memória e o programa encerra.
- Acesse a implementação [aqui](../main.cpp).

### funcoes.cpp
O arquivo funcoes.cpp contém as implementações das funções ordenaMaior() e ordenaMenor(). Essas funções são responsáveis por ordenar o vetor de funcionários por salário (do maior para o menor ou do menor para o maior) e exibir os 3 funcionários com os maiores ou menores salários, respectivamente.

As funções utilizam o algoritmo de seleção para realizar a ordenação. Elas percorrem o vetor, encontram o índice do funcionário com o maior (ou menor) salário e o colocam na posição correta. Em seguida, os 3 primeiros funcionários do vetor são exibidos.
- Acesse a implementação [aqui](../funcoes.cpp).
```cpp
void ordenaMaior(Funcionario funcionarios[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int menor_indice = i;
    for (int j = i + 1; j < size; j++) {
      if (funcionarios[j].getSalario() >
          funcionarios[menor_indice].getSalario()) {
        menor_indice = j;
      }
    }
    std::swap(funcionarios[i], funcionarios[menor_indice]);
  }

  std::cout << "=====================================" << std::endl;
  std::cout << "Funcionários com os maiores salários: " << std::endl;

  if (size < 3) {
    for (int i = 0; i < 2; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  } else {
    for (int i = 0; i < 3; i++) {
      std::cout << funcionarios[i] << std::endl;
    }
  }
}
```

# classes.cpp
O arquivo classes.cpp contém a implementação da classe Funcionario. A classe possui um construtor padrão e um construtor com parâmetros nome e salario. Além disso, são implementados os métodos getters e setters para nome e salário, o método aumentarSalario() para aumentar o salário do funcionário com base em um percentual, a sobrecarga do operador ++ para incrementar o salário em 10%, e a sobrecarga do operador << para exibir o objeto Funcionario de forma personalizada. 
- Acesse a implementação [aqui](../classes.cpp).
```cpp
class Funcionario
{
private:
    std::string nome;
    double salario;

public:
    Funcionario();
    Funcionario(std::string nome, double salario);
    std::string getNome();
    void setNome(std::string nome);
    double getSalario();
    void setSalario(float salario);
    float aumentarSalario(int percAumento);
    Funcionario &operator++(int);
    friend std::ostream &operator<<(std::ostream &os, Funcionario &f);
    ~Funcionario();
};
```

## 📌 Considerações Finais
Este projeto demonstra a implementação da classe Funcionário com diversas funcionalidades, como manipulação de atributos, ordenação, sobrecarga de operadores e alocação dinâmica de memória. A classe pode ser utilizada para gerenciar informações de funcionários de uma empresa e executar operações específicas relacionadas a esses dados.