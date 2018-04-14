/*
3.15 Crie uma classe chamada Date...

Deitel e Deitel, p. 92

Douglas
Vinicius

13-ABR-2018
*/

class Date
{
private:
	int mes, dia, ano;

	Date(int m, int d, int a)
	{

	}

	void setMes(int m)
	{
		if (m < 1) {
			m = 1;
		}

		if (m > 12) {
			m = 1;
		}
		mes = m;
	}

	int getMes()
	{
		return mes;
	}

};
