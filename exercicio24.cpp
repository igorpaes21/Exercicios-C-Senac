#include <iostream>
 using namespace std;

 main ()
{
	
	system("chcp 65001");
	
	int j;
	cout << "Qual numero de tabuada fazer?\t";
	cin >> j;
	cout << "\n";
	
	
	for(int i= 1; i <11; i++){
		cout << "\t" << j << " x " << i << " = " << (i*j) << endl;
		}
		
		
	}