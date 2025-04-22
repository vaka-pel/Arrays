#include<iostream>
using namespace std;




void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n] = {3, 5, 8};

	  cout << "Введите значение массива: ";
   for (int i = 0; i < n; i++)
  
   {
	   cin >> arr[i];
   }

   for (int i = 0; i < n; i++)
   {
	   cout << arr[i] << "\t";
   }
   cout << endl;
   	

	   int minRand, maxRand;
	   do
	   {
		   cout << "Введите минимальное случайное число: "; cin >> minRand;
		   cout << "Введите максимальное случайное число: "; cin >> maxRand;
		   if (minRand == maxRand)cout << "Минимальное должно быть меньше максимального: " << endl;
		   if (minRand == maxRand)cout << "Числа должны быть разные: " << endl;
	   } while (minRand >= maxRand);
	   if (maxRand < minRand);
	   {
		   int buffer = minRand;
		   minRand = maxRand;
		   maxRand = buffer;
	   }
	   

     for (int i = 0; i < n; i++)
	 {
		 arr[i] = rand() % (maxRand - minRand) + minRand;
		// arr[i] = rand() % (100 - 50) + 50;
	 }

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
    }
	cout << endl;

	int s = 0;
	for (int i = 0; i < n; i++)
	
	{
		s += arr[i];
	}
	cout << "Сумма элементов массива: " << s << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)s / n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}

	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
	

	for (int i = 0; i < n; i++) 
	 	
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i]);
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
	    }
	}
		for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}