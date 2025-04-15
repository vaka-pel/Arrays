#include<iostream>
using namespace std;


//#define Mas_1
//#define Mas_2
//#define Mas_3
//#define Mas_4

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n] = { 23, 15, 6, 31, 9 };


#ifdef Mas_1

	
	for (int i = 0; i < n; i++)
	
	{
		cout << arr[i] << "\t";
		
#endif Mas_1

#ifdef Mas_2

	for (int i = 0; i < n - 4; i++)
	{ 
	cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 2 << endl;
	}
			
	
#endif  Mas_2

#ifdef Mas_3

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
#endif  Mas_3

#ifdef Mas_4
	int min = arr[2];
	int max = arr[3];
	for (int i = 0; i < 1; i++)cout << min << endl;
	for (int i = 0; i < 1; i++)cout << max << endl;
	
	/*for (int i = 0; i < n; i++)
	{
	if (arr[i] < 7)cout << arr[i] << endl;
	if (arr[i] > 23)cout << arr[i] << endl;
    }
	*/
#endif  Mas_4


}