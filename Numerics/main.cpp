#include<iostream>
using namespace std;

//#define binary
//#define Hex

void main()
{
	setlocale(LC_ALL, "");
    

#ifdef binary
    int d;
	cout << "Введите десятичное число: "; cin >> d;

	int i;
	const int n = 32;
	int arr[n] = {};
	for (i = 0; d > 0; i++)

	{
		arr[i] = d % 2;
		d /= 2;

	}
	cout << "Преобразованное число в двоичной системе: ";
	for (i = i - 1; i >= 0; i--)cout << arr[i];

	cout << endl;

#endif // binary

#ifdef Hex
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;

	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
		hex[i++] = decimal % 16;

	for (i = i - 1; i >= 0; i--)
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;
#endif // Hex

}

