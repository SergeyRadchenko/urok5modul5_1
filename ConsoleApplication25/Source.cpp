#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	short int o, p;

	do
	{
		cout << "Введите задание:";
		cin >> o;

		switch (o)
		{
		case 1:
		{
//			1.Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки.

			int a[10][10],sum=0;

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = 5 + rand() % 30;
					
				}
				
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << a[i][j] << "\t";

				}
				cout << endl;
			}

			for (int i = 0; i < 10; i++)
			{
				
				for (int j = 0; j < 10; j++)
				{
				
					sum += a[i][j];

					
				}
				cout << sum << endl;
			}
			

		}
		break;
		case 2:
		{/*
			2.Дан целочисленный квадратный массив 4×4.
				Найти строку с наименьшей суммой элементов*/
			int a[4][4],b[4], sum = 0;

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 5 + rand() % 30;
					cout << a[i][j] << "\t";
					sum += a[i][j];

				}cout << endl;
				b[i] = sum;
				sum = 0;
				cout << endl;


			}
			cout << endl;
			int min = b[0], pos = 0;
			for (int i = 0; i < 4; i++)
			{
				if (b[i] < min) { min = b[i]; pos = i; }
			}
			cout << "Сумма:" << min << "  " << "Строка:" << pos << endl;



		}
		break;
		case 3:
		{/*
			3.Дана целочисленная матрица  6× 8. 
				Найти произведение положительных элементов первого столбца.*/
			int a[6][8], proizved = 1 , sum = 0;

			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					a[i][j] = -15 + rand() % 30;
					cout << a[i][j] << "\t";


				}cout << endl;
			}
			for (int i = 0; i < 6; i++)
			{
				proizved = 1;
				for (int j = 0; j < 8; j++)
				{
					
					if (a[i][j] > 0)
						proizved = proizved * a[i][j];
					


				}
				
				cout << proizved << "\t";
				cout << endl;
			}

		}
		break;
		case 4:
		{
			//?????
		}
		break;
		case 5:
		{
			 //?????
		}
		break;
		
		default:cout << "Вы ввели неверное значение." << endl;
			break;
		}
		cout << "Хотите повторить? (1)ДА (2)НЕТ." << endl;
		cin >> p;

	} while (p == 1);

}