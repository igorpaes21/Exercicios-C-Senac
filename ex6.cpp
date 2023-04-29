//FUP que solicite a quantidade de milhas e converta para quilometros (1milha = 1.60934kms);

#include <iostream>
 using namespace std;
 
float milhas, quilometros;

 main (){
	
	system("chcp 65001");
	
	cout << "Digite o total de Milhas:\t";
	cin >> milhas;
	
	quilometros = milhas *1.61;

	
	cout <<"\nQuilometros percorridos:\t" << quilometros << "Km";
	
	
	
	
	cout << "\n\n\n\n\n\n";
}