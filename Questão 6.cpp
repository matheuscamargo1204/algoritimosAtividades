#include <iostream>

int main(){
	
	
    float primeiro_numero = 0;
    float segundo_numero = 0;
    int opcao;
    float resultado;
    
   
    std::cout << "Calculadora\n";
    std::cout << "Digite o primeiro numero: ";
    std::cin >> primeiro_numero;
    std::cout << "Digite o segundo numero: ";
    std::cin >> segundo_numero;
    std::cout << "Escolha uma das opcoes:\n1- Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n";
    std::cin >> opcao;
    
  
    
    if(opcao < 1 || opcao > 4){
        std::cout << "Opcao invalida!";
        return 0;
    }else if(opcao == 1){
        resultado = primeiro_numero + segundo_numero;
        if (resultado > 0){
            std::cout << "A soma dos valores e: " << resultado;
        } else{
            std::cout << "A soma dos valores e: " << resultado * -1;
        }
    }else if (opcao == 2){
        resultado = primeiro_numero - segundo_numero;
        if (resultado > 0){
            std::cout << "A subtracao dos valores e: " << resultado;
        } else{
            std::cout << "A subtracao dos valores e: " << resultado * -1;
        }
    }else if (opcao == 3){
        resultado = primeiro_numero * segundo_numero;
        if (resultado > 0){
            std::cout << "A multiplicacao dos valores e: " << resultado;
        } else{
            std::cout << "A multiplicacao dos valores e: " << resultado * -1;
        }
    }else if (opcao == 4){
        resultado = primeiro_numero / segundo_numero;
        if (resultado > 0){
            std::cout << "A divisao dos valores e: " << resultado;
        } else{
            std::cout << "A divisao dos valores e: " << resultado * -1;
        }
    }
    return 0;
}
