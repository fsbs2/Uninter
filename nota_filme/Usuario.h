#pragma once
#include <iostream>
#include "Filme.h"
#include "Interface.h"
#include <vector>
using namespace std;

class Usuario
{
    string login;
    string senha;
    Filme filme;

    vector<Usuario *> usuarios;

    Usuario(string login, string senha)
        : login(login), senha(senha)
    {
    }

    void criar(string login, string senha)
    {
        Usuario *u = new Usuario(login, senha);
        usuarios.push_back(u);
    }

    void logar(string login, string senha)
    {
        for (Usuario *u : usuarios)
        {
            if (this->login == login && this->senha == senha)
            {
            }
            else
            {
                cout << "Digite um login e senha validos" << endl;
            }
        }
    }
};