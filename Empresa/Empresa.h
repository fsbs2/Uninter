#pragma once
#include <iostream>
#include <vector>
#include "Departamento.h"

using namespace std;

class Empresa
{
private:
    vector<Departamento *> departamentos;

public:
    string nome, cnpj;

    void cadastrarDepartamento(Departamento *d)
    {
        departamentos.push_back(d);
    }

    void listarDepartamentos()
    {
        cout << "Nome da Empresa: " << nome << endl;
        for (Departamento *d : departamentos)
        {
            d->listarFuncionarios();
        }
    }

    Empresa(string _nome, string _cnpj) : nome(_nome), cnpj(_cnpj) {}
};