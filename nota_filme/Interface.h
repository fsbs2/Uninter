#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Interface
{
    string nome;
    int x;
    int y;
    Usuario usuario;

    Interface(string nome)
        : nome(nome)
    {
    }

    void log()
    {

        cout << "Bem vindo ao programa Nota Filme" << endl;
        cout << "[1] - Logar\n[2] - Criar cadastro" << endl;
        cin >> x;

        switch (x)
        {
        case 1:

            break;
        case 2:

            break;
        default:
            cout << "digite um valor valido" << endl;
            break;
        }
    }
    void opcao()
    {
        cout << "Digite uma opcao" << endl;
        cout << "[1] - Cadastrar/editar filme\n[2] - Dar/editar nota\n[3] - Listar Filmes e notas" << endl;
        cin >> y;

        switch (y)
        {
        case 1:

            break;
        case 2:
            break;
        case 3:

            break;
        default:
            cout << "digite um valor valido" << endl;
            break;
        }
    }
};