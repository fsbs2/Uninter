#pragma once

#include <iostream>
using namespace std;

class Jogador
{
public:
    string nome;
    int vitoria, derrota, empate;

    Jogador(string _nome)
        : nome(_nome), vitoria(0), derrota(0), empate(0)
    {
    }

    int jogar()
    {
        int v = rand() % 3;
        if (v == 0)
        {
            return 1; // 1=pedra
        }
        else if (v == 1)
        {
            return 2; // 2=papel
        }
        else
        {
            return 3; // 3=tesoura
        }
    }
};
