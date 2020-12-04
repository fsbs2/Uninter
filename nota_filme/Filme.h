#pragma once
#include <vector>
#include "Nota.h"

using namespace std;

class Filme
{
public:
    int id;
    string nome;
    string anoDeLancamento;
    int nota;
    Nota notaGeral;
    vector<Filme> filmes;

    Filme() {}
    Filme(string nome, string anoDeLancamento)
        : nome(nome), anoDeLancamento(anoDeLancamento)
    {
    }

    void criarFilmes(string nome, string anoDeLancamento)
    {
        Filme filme(nome, anoDeLancamento);
        filmes.push_back(filme);
    }

    void darNota(string nome, int nota)
    {
        for (Filme f : filmes)
        {
            if (f.nome == nome)
            {

                if (nota > 0 && nota <= 10)
                {
                    this->nota = nota;
                    notaGeral.criarNota(nota, nome);
                    cout << "Nota criada com sucesso" << endl;
                }
                else
                {
                    cout << "Digite um valor válido entre 0 e 10" << endl;
                }
            }
            else
            {
                cout << "Digite um nome valido" << endl;
            }
        }
    }

    void listarFilmes()
    {
        cout << "Nome do filme: " << nome << endl;
        for (Filme f : filmes)
        {
            cout << f.nome << endl;
            cout << notaGeral.mediaNotas() << endl;
        }
        cout << "-----------------" << endl;
    }
};