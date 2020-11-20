#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nome, nomeAux;
    ifstream arquivo("texto.txt");
    arquivo >> nome, nomeAux;
    nome.compare(nomeAux);
    if (nome.compare(nomeAux) == 0)
    {
        cout << "nomes iguais" << endl;
    }

    //cout << nome << endl;
}