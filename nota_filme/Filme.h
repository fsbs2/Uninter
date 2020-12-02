#pragma once
#include <vector>
#include "Nota.h"
using namespace std;

class Filme
{
    vector<Filme *> filmes;

    string nome;
    string anoDeLancamento;
    Nota nota;

    void criarFilmes(Filme *f)
    {
        filmes.push_back(f);
    }

    void listarFilmes()
    {
        cout << "Nome do filme: " << nome << endl;
        for (Filme *f : filmes)
        {
            f->nome;
        }
        cout << "-----------------" << endl;
    }
};