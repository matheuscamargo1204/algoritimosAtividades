#include<iostream>
#include<stdio.h>
int main () {
	char nomef[100];
	int salario;
		
	std:: cout << "\n-----------------------------------";
	std:: cout << "\n    Ola boas vindas a Nebulosa     ";
	std:: cout << "\n-----------------------------------";
	std:: cout << "  \n diga seu nome:   ";
	std:: cin >> nomef;
	std:: cout  << "\n qual a pretesao salarial?   R$ ";
	std:: cin >> salario;
	
	if (salario <=1300) {
		std:: cout << nomef <<" conseguiu a vaga de auxiliar de producao com salario de R$ " << salario;
		} else if (salario > 1300 && salario <=2500) {
		std:: cout <<  nomef <<" conseguiu a vaga para chefe de equipe com salario de R$ " << salario;
			}else  if (salario  > 2500){
		std:: cout << nomef << " Nebulosa agradese seu interesse porem infelizmente nao daremos continuidade com seu perfiu. le permanesera em nosso banco de dados para futuras oportunidades.";
		}
	std:: cout << "\n-----------------------------------";
	std:: cout << "\n muito Obrigado pela sua presenca  ";	
				
	return 0;
	}
	
