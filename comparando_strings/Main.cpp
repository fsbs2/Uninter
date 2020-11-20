#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string nome, aux;
    int x = 1;

    ifstream arquivo("texto.txt");

    map<string, int> nomes;

    for (int i = 1; i <= 10; i++)
    {
        arquivo >> nome;
        nomes.insert(pair<string, int>(nome, x));
    }

    map<string, int>::iterator itr;
    cout << "\tNomes\tfrequencia\n";
    for (itr = nomes.begin(); itr != nomes.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
}
