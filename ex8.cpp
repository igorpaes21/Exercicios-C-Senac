//FUP que leia um valor em quilometros e converta para metros e centimetro;

#include <iostream>
 using namespace std;
 
float q, m, c;
 main (){
	
	system("chcp 65001");
	
	cout << "Digite o Km desejado:\t";
	cin >> q;
	
	c = q/1000;
	m = q/100;
	
	cout <<"\nResultado:\t" << m << "\tMetros\te\t" << c << "\tCentimetros\t";
	
	cout << "\n\n\n\n\n\n";
}