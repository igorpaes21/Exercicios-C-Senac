#include <iostream>
 using namespace std;
 
//25. FUP que solicite quantidade de pessoas, 
//depois solicite a altura de cada uma e calcule
// a media da altura das pessoas.
int i;
int soma;
 main ()
{
	
	system("chcp 65001");
	
	float quantidadeDePessoas, altura, media;
	
	cout << "Digite a Quantidade de Pessoas:\t";
	cin >> quantidadeDePessoas;
	
	for(i = 1; i <=quantidadeDePessoas; i++){
	cout<<"\nDigite uma Altura\t \n\n";
	cin >> altura;
	
	soma += altura;
	
	
	
	}
	
	cout << soma /  quantidadeDePessoas;
	
	
	cout << "\n\n\n\n\n\n";
}