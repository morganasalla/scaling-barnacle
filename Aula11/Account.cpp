
/*
3.12 Crie uma classe chamada Account que um banco poderia utilizar para representar contas bancárias dos clientes...

Deitel e Deitel, p. 91

Brayan
Paulo

13-ABR-2018

*/

#include <iostream>

using namespace std;

class Account
{
private:
	int saldo; // dólares
public:
	Account(int inicial)
	{
		if (inicial < 0)
		{
			inicial = 0;
			cout << "Saldo inicial inválido!" << endl;
		}
		saldo = inicial;
	}

	void credit(int valor)
	{
		saldo = saldo + valor;
	}

	void debit(int valor)
	{
		if (valor <= saldo) {
			saldo = saldo - valor;		
		} else {
			cout << "Debit amount exceeded account balance" << endl;
		}
	}

	int getBalance()
	{		
		return saldo;
	}

};


int main()
{
	Account a1(100), a2(300);
	a1.debit(200);
	a2.debit(200);
	return 0;
}



