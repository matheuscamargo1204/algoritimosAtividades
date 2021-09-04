#include<iostream>



int main () {

	int MT = 0;
	int po = 0;
	int pe = 0;
	int ja = 0;
	int mi = 0;
	int cm = 0;
	int km = 0;
	
	std:: cout << "diga quantos metros voce anda por dia: ";
	std:: cin >> MT;
	po = MT * 39.37;
	pe = MT * 3.281;
	ja = MT * 1.094;
	mi = MT / 1.609;
	cm = MT * 100.;
	km = MT / 1.000;
	std:: cout << "\n voce anda em polegadas: "<<po;
	std:: cout << "\n voce anda em pes: "<<pe;
	std:: cout << "\n voce anda em jardas: "<<ja;
	std:: cout << "\n \n voce anda em milhas: "<<mi;
	std:: cout << "\n voce anda em centimetros: "<<cm;
	std:: cout << "\n voce anda em quilometros: "<<km;


	return 0;
	}
	
	
	



