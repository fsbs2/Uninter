#include <iostream>
using namespace std;


class Caixa 
{

	float altura;
    float largura;
    float comprimento;

public:

	Caixa(float _altura, float _largura, float _comprimento):
	altura(_altura),largura(_largura),comprimento(_comprimento)
	{
	}


	float setAltura(float altura) {
		this->altura = altura;
	}

	float setLargura(float largura) {
		this->largura = largura;
	}

	float setComprimento(float comprimento) {
		this->comprimento = comprimento;
	}

	float getAltura(){return altura;}
	float getLargura(){return largura;}
	float getComprimento(){return comprimento;}

	float caixaVolume() {
		return altura * largura * comprimento;
	}

	void info() {

		cout << "caixa altura  " << getAltura() << endl;
		cout << "caixa largura " << getLargura() << endl;
		cout << "caixa comprimento " << getComprimento() << endl;
		cout << "volume " << caixaVolume() << endl;

	}

	Caixa operator+(Caixa const &b) {
		Caixa caixa(this->altura + b.altura, this->largura + b.largura, this->comprimento + b.comprimento);
		return caixa;
	}
};


int main() {
	Caixa a(3, 3, 3);
	Caixa b(2, 2, 2);
	a.info();
	cout << ""<<endl;
	b.info();
	cout << "" << endl;
	Caixa c = a + b;
	cout << "volume da soma das caixas " << c.caixaVolume() << endl;
	

	return 0;
}
