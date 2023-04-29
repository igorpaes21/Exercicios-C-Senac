//FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;

#include <iostream>
 using namespace std;
 
int pessoa, pessoa1, pessoa2, pessoa3, pessoa4, media; 

 main (){
	
	system("chcp 65001");
	
	cout << "Peso da pessoa 1:\t";
	cin >> pessoa;
	
	cout << "Peso da pessoa 2:\t";
	cin >> pessoa1;
	
	cout << "Peso da pessoa 3:\t";
	cin>> pessoa2;
	
	cout << "Peso da pessoa 4:\t";
	cin >> pessoa3;
	
	cout << "Peso da pessoa 5:\t";
	cin >> pessoa4;
	
	media = (pessoa + pessoa1 + pessoa2 + pessoa3 + pessoa4)/5;
	
	cout <<"A Média das pessoas é:\t "<< media;
	
}