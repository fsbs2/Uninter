#include <iostream>

using namespace std;

enum Dias
{
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
};

class DiaDeSemana
{
public:
    int dia;
    int mes;
    int ano;
    Dias dias;

    DiaDeSemana(int dia, int mes, int ano, Dias dias)
        : dia(dia), mes(mes), ano(ano), dias(dias)
    {
    }

    void info()
    {
        if (dias == SABADO || dias == DOMINGO)
        {
            cout << "APROVEITE O FINAL DE SEMANA" << endl;
            cout << dias << endl;
            cout << dia << endl;
            cout << mes << endl;
            cout << ano << endl;
        }
        else
        {
            cout << "HOJE E DIA DE FEIRA, BOM SERVICO" << endl;
            cout << dias << endl;
            cout << dia << endl;
            cout << mes << endl;
            cout << ano << endl;
        }
    }
};

int main()
{
    DiaDeSemana d1(29, 11, 2020, DOMINGO);
    d1.info();
    DiaDeSemana d2(30, 11, 2020, SEGUNDA);
    d2.info();
    return 0;
}