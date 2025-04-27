#include<iostream>
using namespace std;

//#define binary

void main()
{
	setlocale(LC_ALL, "");
    int d;
	cout << "Введите десятичное число: "; cin >> d;

#ifdef binary
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

	const int n = 8;
	char hex[n] = {};
	int i;
	for (i = 0; d; d /= 16)
		hex[i++] = d % 16;

	for(i = i - 1; i >= 0; i--)
	cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;
}

