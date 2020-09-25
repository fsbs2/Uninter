#include <iostream>
#include <vector>    // 1=pedra
#include <ctime>     // 2=papel
#include "Jogador.h" // 3=tesoura
using namespace std;

void enfrentar(Jogador &a, Jogador &b)
{
    int jogadaA = a.jogar();
    int jogadaB = b.jogar();

    if (jogadaA == 1 && jogadaB == 3 || jogadaA == 2 && jogadaB == 1 || jogadaA == 3 && jogadaB == 2)
    {
        a.vitoria++;
        b.derrota++;
    }
    if (jogadaA == 1 && jogadaB == 2)
    {
        a.derrota++;
        b.vitoria++;
    }
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
}