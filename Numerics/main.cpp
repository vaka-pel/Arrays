#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int n[5], d;
	cout << "Введите десятичное число: "; cin >> d;
    
	for (int i = 0; d > 0; i++)
	
	{
		n[i] = d % 2;
		d = d / 2;
    
		cout << n[i];
	}
      
   cout << endl;
 

}

