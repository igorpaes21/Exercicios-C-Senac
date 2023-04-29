//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
//A fórmula de conversão é : F = (9*C+160)/5 Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <iostream>
 using namespace std;
 
float celsius, fahrenheit;

 main (){
	
	system("chcp 65001");
	
	cout << "Imprima a temperatura em Fahrenheit:\t";
	cin >>  fahrenheit ;
	
	celsius = (9*celsius+160)/5;
	
	cout << "Imprima a temperatura em Celsius:\t" << celsius;
	
	cout << "\n\n\n\n\n\n";
}