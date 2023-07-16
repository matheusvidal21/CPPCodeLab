#include <iostream>
#include "classes.h"
#include "funcoes.h"

int main()
{
    int tam = 1, opcao;
    std::string nome;
    float salario;
    Funcionario *funcionarios = new Funcionario[tam];

    int i = 0;
    std::cout << "=== CADASTRAMENTO DE FUNCIONÁRIOS ===" << std::endl;
    while (true)
    {
        std::cout << "Funcionário " << i + 1 << ": " << std::endl;
        std::cout << "Informe o nome do funcionário: " << std::endl;
        std::cin >> nome;
        funcionarios[i].setNome(nome);
        std::cout << "Informe o salário do funcionário: " << std::endl;
        std::cin >> salario;
        funcionarios[i].setSalario(salario);

        if (i == tam - 1)
        {
            Funcionario *novoFuncionarios = new Funcionario[tam + 1];

            for (int j = 0; j < tam; j++)
            {
                novoFuncionarios[j] = funcionarios[j];
            }

            delete[] funcionarios;
            funcionarios = novoFuncionarios;
            tam++;
        }

        std::cout << "Deseja cadastrar mais um funcionário?" << std::endl;
        std::cout << "1. Sim" << std::endl
                  << "2. Não" << std::endl;
        std::cin >> opcao;
        if (opcao == 2)
            break;

        i++;
    }

    std::cout << std::endl
              << "=====================================";
    std::cout << std::endl
              << "Cadastro finalizado!" << std::endl;
    std::cout << "Funcionários: " << std::endl;
    for (int i = 0; i < tam - 1; i++)
    {
        std::cout << funcionarios[i] << std::endl;
    }

    std::cout << std::endl;
    ordenaMaior(funcionarios, tam - 1);

    std::cout << std::endl;
    ordenaMenor(funcionarios, tam - 1);

    int percAumento;
    std::cout << std::endl
              << "Deseja aumentar o salário em quantos %?" << std::endl;
    std::cin >> percAumento;
    std::cout << "Salários aumentados em " << percAumento << "%:" << std::endl;
    for (int i = 0; i < tam - 1; i++)
    {
        std::cout << "R$" << funcionarios[i].aumentarSalario(percAumento) << std::endl;
    }

    std::cout << std::endl
              << "=====================================";
    std::cout << std::endl;
    std::cout << "Salário final, com mais um aumento de 10%:" << std::endl;
    for (int i = 0; i < tam - 1; i++)
    {
        funcionarios[i]++;
        std::cout << "R$" << funcionarios[i] << std::endl;
    }

    delete[] funcionarios;
    return 0;
}