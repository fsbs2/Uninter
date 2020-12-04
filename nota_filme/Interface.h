#pragma once
#include <iostream>
#include "Usuario.h"
#include "Filme.h"

using namespace std;

class Interface
{
public:
    string login;
    int senha;

    int y = 0;
    int x = 0;
    int resp;

    Interface()
    {
    }

    void log()
    {
        Usuario usuario;

        cout
            << "Bem vindo ao programa Nota Filme" << endl;
        cout << "[1] - Logar\n[2] - Criar cadastro\n[3] - sair" << endl;
        cin >> x;
        cout << "" << endl;

        switch (x)
        {

        case 1:

            cout << "Login:" << endl;
            cin >> login;
            cout << "senha:" << endl;
            cin >> senha;

            resp = usuario.logar(login, senha);
            if (resp == -1)
            {
                cout << "Digite um login e senha validos" << endl;
                return log();
            }
            else
            {
                return opcao(resp);
            }

        case 2:
            cout << "Crie seu Login" << endl;
            cin >> login;
            cout << "Crie sua senha" << endl;
            cin >> senha;
            usuario.criar(login, senha);
            cout << "" << endl;
            return log();
        case 3:
            break;
        default:
            cout << "digite um valor valido" << endl;
            cout << "" << endl;
            return log();
        }
    }

    void opcao(int x)
    {

        string nome;
        string anoDeLancamento;
        Filme filmeCriado;
        int nota;
        Nota novaNota;

        cout << "Digite uma opcao" << endl;
        cout << "[1] - Cadastrar/editar filme\n[2] - Dar/editar nota\n[3] - Listar Filmes e notas\n[4] - sair" << endl;
        cin >> y;

        switch (y)
        {
        case 1:
            cout << "Digite o nome do filme" << endl;
            cin >> nome;
            cout << "Digite o ano do filme" << endl;
            cin >> anoDeLancamento;
            filmeCriado.criarFilmes(nome, anoDeLancamento);
            return opcao(x);
        case 2:
            cout << "Digite o nome do filme" << endl;
            cin >> nome;
            cout << "Digite a nota" << endl;
            cin >> nota;
            novaNota.criarNota(nota, nome);
            return opcao(x);
        case 3:
            filmeCriado.listarFilmes();
            return opcao(x);
        case 4:
            break;
        default:
            cout << "digite um valor valido" << endl;
            return opcao(x);
        }
    }
};
