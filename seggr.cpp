#include<iostream>
#include<math.h>

int main (){
    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;

    std:: cout<< "------------------------------------------------";
	std:: cout<< "\n   bem vindo resolvendo equacoes do 2 grau    ";
	std:: cout<< "\n              ax2 -bx -c = 0                  ";
	std:: cout<< "\n----------------------------------------------";
	
	
	
	std::cout << "\n Digite o valor de a: ";
    std::cin >> a;
    std::cout << " Digite o valor de b: ";
    std::cin >> b;
    std::cout << " Digite o valor de c: ";
    std::cin >> c;

    float delta = ((b*b) - (4*(a*c)));
     x1 = (-b + sqrt(delta)) / (2*a);
     x2 = (-b - sqrt(delta)) / (2*a);

     if(delta < 0){
         std::cout << "A equacao nao e real\n Delta: " << delta;
     }
     else{
         std::cout << "x1: " << x1 << "\n";
         std::cout << "x2: " << x2;
     }
     return 0;
}
