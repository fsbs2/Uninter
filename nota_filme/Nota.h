#pragma once
#include "Usuario.h"

class Nota
{
public:
    int nota;
    string nome;
    vector<Nota> notas;

    Nota() {}
    Nota(int nota, string nome)
        : nota(nota), nome(nome)
    {
    }

    void criarNota(int nota, string nome)
    {
        Nota novaNota(nota, nome);
        notas.push_back(novaNota);
    }

    float mediaNotas()
    {
        float x = 0;
        for (Nota n : notas)
        {
            x = x + n.nota;
            return (x / notas.size());
        }

        return 4.04;
    }
};