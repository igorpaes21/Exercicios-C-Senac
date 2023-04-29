//FUP que solicite a duração de um evento em
//segundos e imprima em horas, minutos e segundos;

#include <iostream>
#include <iomanip>
 using namespace std;
 
 int h, m, s, resto;
 main (){
	
	system("chcp 65001");
	
	cout << "Digite o total de Segundos:\t";
	cin >> s;
	
	h = s/3600;
	m = s/60;

	
	cout <<"\nDuração do evento:\t" << setprecision(3) << h << ":"<< setprecision(3) << m << ":"<< setprecision(3) << s <<"\t";
	
	
	
	cout << "\n\n\n\n\n\n";
}