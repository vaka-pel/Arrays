#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	const int ROWS = 4;
	const int COLS = 4;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;

		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
	cout << endl;

	/*for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			if (met_before)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])count++;
				}
			}
			if(count) cout << "�������� " << arr [i][j] << " ����������� " <<  count <<  " ���. " << endl;
		}
	}*/
	for (int i = 0; i < ROWS*COLS; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[0][i] == arr[0][j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < ROWS*COLS; j++)
		{
			if(arr[0][i] == arr [0][j])count++;
		}
		if (count) cout << "�������� " << arr[0][i] << " ����������� " << count << " ���;\n";
		
	}
	cout << "Finita la comedia" << endl;
}