#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "2Darrays" << endl;
	const int ROWS = 5;
	const int COLS = 4;
	int arr[ROWS][COLS]; 

		for (int i = 0; i < ROWS; i++) // ���������� ������� ���������� �������
		{
			for (int j = 0; j < COLS; j++)
			
			{
				arr[i][j] = rand() % 100;
	
			}	
			
		}
		for (int i = 0; i < ROWS; i++) // ����� ��������� �������
		{
			for (int j = 0; j < COLS; j++)
			
			{
				cout << arr[i][j]<< "\t";
			}	
			cout << endl;
		}
		cout << endl;

		// ���������� �������
        for (int i = 0; i < ROWS; i++) 
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = i; k < ROWS; k++)
				{
					//for (int l = k == i ? j + 1 : 0; l < COLS; l++)
					for (int l = k > i ? 0 : j + 1; l < COLS; l++)
					{
                     // arr[i][j] - ��������� �������
                     // arr[k][l] - ������������ �������
						if (arr[k][l] < arr[i][j])
						{
							int buffer = arr[i][j];
								arr[i][j] = arr[k][l];
								arr[k][l] = buffer;
						}
					}
			    }
				
			}	
			cout << endl;
		}

		
		for (int i = 0; i < ROWS; i++) // ����� ���������������� �������
		{
			for (int j = 0; j < COLS; j++)
			
			{
				cout << arr[i][j]<< "\t";
			}	
			cout << endl;
		}
		cout << endl;






		int s = 0;
		
		for (int i = 0; i < ROWS; i++)

		{
			for (int j = 0; j < COLS; j++)

			{
				s += arr[i][j];
			}
		}
             cout << "����� ��������� �������: " << s << endl;
             cout << "�������-�������������� ��������� �������: " << (double)s / (COLS * ROWS) << endl;
            


			 
			int min, max;
		    min = max = arr[0][0];
			 for (int i = 0; i < ROWS; i++)
			 
			 {
			     for (int j = 0; j < COLS; j++)
			     			     		     
				 {
					 if (arr[i][j] < min) min = arr[i][j];
					 if (arr[i][j] > max) max = arr[i][j];
				 }
		     }
             cout << "����������� �������� �������� � �������: " << min << endl;
             cout << "������������ �������� �������� � �������: " << max << endl;
			 cout << endl;


			/* int number_of_shifts_L;
			 cout << "������� ���������� �������: "; cin >> number_of_shifts_L;
			 for (int i = 0; i < number_of_shifts_L; i++)
			 {
				 for (int j = 0; j < number_of_shifts_L; j++)
				 {
					 int buffer = arr[i][0];
					 for (int i = 0; i < ROWS; i++)
					 {
						 for (int j = 1; j < COLS; j++)
						 
						 {
							 arr[i][j - 1] = arr[i][j];
                         }
							 arr[i][COLS - 1] = buffer;
					     
						 for (int i = 0; i < ROWS; i++)
						 {
							 for (int j = 0; j < COLS; j++)
							 {
                             cout << arr[i][j] << "\t";
						     }
							 cout << endl;
						 }
					 }

			     }
		     } */


}