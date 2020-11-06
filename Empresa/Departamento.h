#pragma once
#include <iostream>
#include <vector>
#include "Funcionario.h"

using namespace std;

class Departamento
{
private:
    vector<Funcionario *> funcionarios;

public:
    string nome;
    void cadastrarFuncionario(Funcionario *f)
    {
        funcionarios.push_back(f);
    }

    void listarFuncionarios()
    {
        cout << "Nome Departamento: " << nome << endl;
        for (Funcionario *f : funcionarios)
        {
            f->info();
        }
        cout << "-----------------" << endl;
    }

    void alterarSalario(string nome, float salario)
    {
        for (Funcionario *f : funcionarios)
            if (f->nome == nome)
            {
                f->salario = salario;
            }
    }

    Departamento(string _nome) : nome(_nome) {}
};