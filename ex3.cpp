//FUP que leia o valor da hora do trabalhador e a quantidade de horas trabalhadas.
//Imprima o valor que o trabalhador deverá receber ao final do mês.;
#include <iostream>
 using namespace std;
 
int htrab, qhtrab, valor;
 main ()
{
	
	system("chcp 65001");
	
	cout << "Imprima o valor da Hora trabalhada:\t";
	cin >> htrab;
	
	cout << "Imprima a quntidade de Horas trabalhadas:\t";
	cin >> qhtrab;
	
	
	valor = htrab * qhtrab;
	cout << "O trabalhador vai receber:\t" << valor;
	
	cout << "\n\n\n\n\n\n";
}