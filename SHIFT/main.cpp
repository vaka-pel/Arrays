#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");


	
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
	for (int i = 0; i < n; i++)
	
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	
// циклический сдвиг массива
    int number_of_shifts_L;
    	cout << "Введите количество сдвигов: "; cin >> number_of_shifts_L;
	
	for (int i = 0; i < number_of_shifts_L; i++)
	
	{

		int buffer = arr[0];
		for (int i = 1; i < n; i++)

		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
// вывод сдвинутого массива влево
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << tab;
	  }
	  cout << endl;

    
	
	int number_of_shifts_R;
    cout << "Введите количество сдвигов: "; cin >> number_of_shifts_R;
	for (int i = 0; i < number_of_shifts_R; i++)
	{
		int buffer = arr[n - 1];

		for (int i = n - 2; i >= 0; i--)

		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}

// вывод сдвинутого массива вправо

	for (int i = 0; i < n; i++)
	
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	


	
}