/*
3.14 Crie uma classe chamada Employee...

Deitel e Deitel, p. 92

Cassio
Rafael

13-ABR-2018
*/

class Employee
{
private:
	string nome, sobrenome;
	int salario;

public:
	Employee()
	{

	}

	void setNome(string n)
	{
		nome = n;
	}

	string getNome()
	{
		return nome;
	}	


};

