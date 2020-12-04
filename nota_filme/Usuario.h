#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Usuario
{
public:
    string login;
    int senha;
    int nota;
    vector<Usuario> usuarios;

    Usuario()
    {
    }
    Usuario(string login, int senha)
        : login(login), senha(senha)
    {
    }

    void criar(string login, int senha)
    {
        Usuario usuarioSalvo(login, senha);
        usuarios.push_back(usuarioSalvo);
        cout << "Usuario salvo" << endl;
    }

    int logar(string login, int senha)
    {
        cout << "Login.." << endl;
        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i].login == login && usuarios[i].senha == senha)
            {
                cout << "Usuario logado" << endl;
                return usuarios[i].senha;
            }
            else
            {
                return -1;
            }
        }

        return -1;
    }
};