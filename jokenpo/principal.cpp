#include <iostream>
#include <vector>
#include <ctime>
#include "Jogador.h"
using namespace std;

void enfrentar(Jogador &a, Jogador &b)
{
    int jogadaA = a.jogar(); //1=pedra
    int jogadaB = b.jogar(); //2=papel
                             //3=tesoura

    if (jogadaA == 1 && jogadaB == 3 || jogadaA == 2 && jogadaB == 1 || jogadaA == 3 && jogadaB == 2)
    {
        a.vitoria++;
        b.derrota++;
        return;
    }
    else if (jogadaA == 1 && jogadaB == 2 || jogadaA == 2 && jogadaB == 3 || jogadaA == 3 && jogadaB == 1)
    {
        a.derrota++;
        b.vitoria++;
        return;
    }
    a.empate++;
    b.empate++;
    return;
}

int main()
{
    srand(time(NULL));

    Jogador mario("Super Mario");
    Jogador luigi("Super Luigi");

    vector<Jogador> jogadores;
    jogadores.push_back(mario);
    jogadores.push_back(luigi);
    jogadores.push_back(Jogador("Bowser"));
    jogadores.push_back(Jogador("Yoshi"));
    jogadores.push_back(Jogador("Peach"));

    for (Jogador player : jogadores)
    {
        for (int i = 0; i < jogadores.size(); i++)
        {

            if (player.nome != jogadores[i].nome)
            {
                enfrentar(player, jogadores[i]);
            }
        }
    }

    string champion_name;
    for (Jogador player : jogadores)
    {
        for (int i = 0; i < jogadores.size(); i++)
        {
            if (player.nome != jogadores[i].nome)
            {
                if (player.vitoria > jogadores[i].vitoria)
                {
                    champion_name = player.nome;
                }
                else
                {
                    champion_name = jogadores[i].nome;
                }

                if (player.vitoria == jogadores[i].vitoria)
                {
                    if (player.empate > jogadores[i].empate)
                    {
                        champion_name = player.nome;
                    }
                    else
                    {
                        champion_name = jogadores[i].nome;
                    }
                }
            }
        }
    }

    for (Jogador player : jogadores)
        player.info();

    cout << "O campeao eh: " << champion_name << endl;
}