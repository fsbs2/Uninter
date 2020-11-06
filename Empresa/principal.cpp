#include <iostream>
#include <stack>
#include <string>
#include "Empresa.h"

using namespace std;

int main()
{
    Departamento d1("Mario Bros");
    d1.cadastrarFuncionario(new Funcionario("Mario", 1000, "20/10/2000"));
    d1.cadastrarFuncionario(new Funcionario("Luigi", 2000, "20/11/2000"));
    d1.cadastrarFuncionario(new Funcionario("Yoshi", 1500, "21/12/2001"));
    Funcionario *b = new Funcionario("Bowser", 5000, "31/12/1999");
    d1.cadastrarFuncionario(b);

    Departamento d2("Donkey Kong Country");
    d2.cadastrarFuncionario(new Funcionario("Donkey", 4000, "20/11/2005"));
    d2.cadastrarFuncionario(new Funcionario("K.Rool", 4500, "30/11/2004"));
    d2.cadastrarFuncionario(new Funcionario("Diddy", 3000, "21/12/2010"));

    b->salario = 7000;
    Empresa e("Nintendo", "1111.2222.3333");
    e.cadastrarDepartamento(&d1);
    e.cadastrarDepartamento(&d2);

    e.listarDepartamentos();

    cout << "" << endl;
    d2.alterarSalario("Diddy", 5000);
    d1.alterarSalario("Bowser", 10000);
    e.listarDepartamentos();

    //Menu Cadastrar e listar funcionarios novos
    //e.aumentarSalario("Mario Bros", 0.1);
}