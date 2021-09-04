#include<iostream>

int main (){
	
	 
	
    int numero = 0;
    int primeiro_divisivel = 0;
    int segundo_divisivel = 0;
    
   
    
    std::cout << "Digite o numero: ";
    std::cin >> numero;
    std::cout << "Digite o primeiro divisivel: ";
    std::cin >> primeiro_divisivel;
    std::cout << "Digite o segundo divisivel: ";
    std::cin >> segundo_divisivel;
    
 
    
    if(numero % primeiro_divisivel == 0 && numero % segundo_divisivel == 0){
        std::cout << "O numero " << numero << " e divisivel por: " << primeiro_divisivel << " e por " << segundo_divisivel;
    }else{
        std::cout << "Falha na operacao";
    }
}
