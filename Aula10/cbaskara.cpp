/*
Escreva um programa que calcula e apresenta o resultado do dobro de um inteiro informado como parâmetro.
*/

#include <iostream>
#include <math.h>

using namespace std;

class equacao 
{
public:
	float a, b, c;
	float x1, x2;

	void baskara()
	{
		float delta = b * b - 4*a*c;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
	}
};

int main() {
	equacao formula;

	cout << "Cálculo de Báskara" << endl;

	cout << "Informe valor de a:" << endl;
	cin >> formula.a;

	cout << "Informe valor de b:" << endl;
	cin >> formula.b;

	cout << "Informe valor de c:" << endl;
	cin >> formula.c;

	formula.baskara();
	
	cout << "x1=" << formula.x1 << endl;
	cout << "x2=" << formula.x2 << endl;

	cout << "*FIM*" << endl;
	return 0;
}
