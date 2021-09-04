	#include<iostream>
	
	int main ()
	{

	int salario = 0;
	float imposto =0;

	std::cout <<"qual o salario ?  ";
	std::cin>> salario;

	if (salario < 1900)
		{
		imposto= 0;

		}
	else if (salario > 1900 && salario < 2499)
		{
		imposto= salario *0.02;

		}
	else if (salario > 2500 && salario < 3699)
		{
		imposto= salario *0.03;

		}
	else if (salario > 3700 && salario < 4999)
		{
		imposto= salario *0.045;

		}
	else if (salario >= 5000)
		{
		imposto=salario *0.06;
		}

	std::cout <<"\n o imposto e R$:  "<<imposto;

	return 0;

	}
