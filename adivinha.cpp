#include<iostream>

int main () {

	int valor;

	std:: cout<< "----------------------------------------";
	std:: cout<< "\n    bem vindo ao jogo do adivinho     ";
	std:: cout<< "\n--------------------------------------";

	std:: cout <<"\n escreva qualquer valor e descubriremos se ele esta de 1 a 10 ";
	std:: cin >> valor;

	if (valor < 1 ) {
		std:: cout<< "\nsinto lhe informar mas esse numero nao esta entre 1 e 10 ";
	    }else if(valor > 10 ) {
	    std:: cout<< "\nsinto lhe informar mas esse numero nao esta entre 1 e 10 ";	
		}else{
		std:: cout<< "\n esse valor esta entre 1 e 10 ";
		}
			
	
	
	std:: cout<< "\n----------------------------------------";
	std:: cout<< "\n    Acho que acertei ate a proxima     ";


		
	

	return 0;

}

//Jogo da adivinha��o.

//Desenvolva um algoritmo que leia um n�mero de 1 a 10 e compare para saber se o n�mero digitado est� correto.
