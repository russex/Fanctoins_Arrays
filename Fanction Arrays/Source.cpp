#include<iostream>
#include<conio.h>
using namespace std;

void arrLeft(const int cezar, int arr[]);
void arrRight(const int cezar, int arr[]);
void summa(const int n,int arr[]);
void AVG(const int n, int arr[]);
void randArr(const int n, int arr[]);
void println(const int n, int arr[]);
int minValueIn(const int n, int arr[]);
int maxValueIn(const int n, int arr[]);
const int Rows1 = 4;
const int Cols1_Rows2 = 5;
const int Cols2 = 3;
void SumMultiMatriz(int arr[Rows1][Cols1_Rows2], int arr2[Rows1][Cols1_Rows2], int mass[Cols1_Rows2][Cols2]);
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Для вывод меню программ нажмите на Enter: " << endl;
	const int cezar = 10;
	int arr[cezar] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[cezar];
	int array[Rows1][Cols1_Rows2];
	int array2[Rows1][Cols1_Rows2];
	int mass[Cols1_Rows2][Cols2];
	randArr(cezar, arr2);
	char program;
	do {
		program = _getch();
		switch (program)
		{
		case'1':
			summa(cezar, arr);
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case'2':
			AVG(cezar, arr);
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case'3':
			system("CLS");
			println(cezar, arr2);
			cout << "Минимальное значение массива: " << minValueIn(cezar, arr2) << endl;
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case'4':
			system("CLS");
			println(cezar, arr2);
			cout << "Максимальное значение массива: " << maxValueIn(cezar, arr2) << endl;
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case '5':
			arrLeft(cezar, arr);
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case '6':
			arrRight(cezar, arr);
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case '7':
			SumMultiMatriz( array, array2, mass);
			cout << "Введите номер следющей программы или нажмите Enter, чтобы выйти в меню: " << endl;
			break;
		case 13:
			system("CLS");
			cout << "Программа №1 ""\"Возвращает сумму элементов массива""\": " << endl;
			cout << "Программа №2 ""\"Возвращает среднее-арифметическое элементов массива""\": " << endl;
			cout << "Программа №3 ""\"Возвращает минимальное значение в массиве""\": " << endl;
			cout << "Программа №4 ""\"Возвращает максимальное значение в массиве""\": " << endl;
			cout << "Программа №5 ""\"Выполняет циклический сдвиг массива на заданное число элементов влево""\": " << endl;
			cout << "Программа №6 ""\"Выполняет циклический сдвиг массива на заданное число элементов вправо""\": " << endl;
			cout << "Программа №7 ""\"Сложение и умножение матриц""\": " << endl;
			cout << "Введите номер программы: " << endl;
			break;
		default:
			system("CLS");
			cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: " << endl;
			break;
		}
	} while (program != 27);
}
void arrLeft(const int cezar,int arr[])
{
			system("CLS");
			int chislo = 0;
			cout << "Введите число колличества сдвигов массива влево: "; cin >> chislo;
			cout << endl;
			cout << "Массив: ";
			cout << endl;
			for (int i = 0; i < cezar; i++)
			{
				cout << arr[i] << "\t";
			}
			cout << endl;
			for (int j = 0; j < chislo; j++)
			{
				int buffer = arr[0];
				for (int i = 1; i < cezar; ++i)
				{
					arr[i - 1] = arr[i];
				}
				arr[cezar - 1] = buffer;
			}
			cout << "Сдвинутый массив: ";
			cout << endl;
			for (int i = 0; i < cezar; i++)
			{
				cout << arr[i] << "\t";
			}
			cout << endl;
}
void arrRight(const int cezar, int arr[])
{
	system("CLS");
	int chislo = 0;
	cout << "Введите число колличества сдвигов массива вправо: "; cin >> chislo;
	cout << "Массив: ";
	cout << endl;
	for (int i = 0; i < cezar; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int j = 0; j < chislo; j++)
	{
		int buffer = arr[cezar - 1];
		for (int i = cezar - 2; i >= 0; --i)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
	cout << endl;
	cout << "Сдвинутый массив: ";
	cout << endl;
	for (int i = 0; i < cezar; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void summa(const int n, int arr[])
{
	system("CLS");
	int y = 0;
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	cout << "Сумма всех элементов массива: " << y;
	cout << endl;
}
void AVG(const int n, int arr[])
{
	system("CLS");
	int y = 0;
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	cout << "Cреднее арифметическое всех элементов массива: " << (double)y / n;
	cout << endl;
}
int minValueIn(const int n,int arr[])
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(const int n, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void randArr(const int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
}
void println(const int n, int arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void SumMultiMatriz(int arr[Rows1][Cols1_Rows2], int arr2[Rows1][Cols1_Rows2], int mass[Cols1_Rows2][Cols2])
{
		int c[Cols1_Rows2][Cols2] = {};
		setlocale(LC_ALL, "Russian");
		char oper;
		for (int i = 0; i < Rows1; i++)
		{
			for (int j = 0; j < Cols1_Rows2; j++)
			{
				arr[i][j] = rand() % 10;
			}
		}
		for (int i = 0; i < Rows1; i++)
		{
			for (int j = 0; j < Cols1_Rows2; j++)
			{
				arr2[i][j] = rand() % 10;
			}
		}
		for (int i = 0; i < Cols1_Rows2; i++)
		{
			for (int j = 0; j < Cols2; j++)
			{
				mass[i][j] = rand() % 10;
			}
		}
		cout << "Введите како вид арифметической операции вы ходите выбрать: умножение(*), сложение(+):  "; cin >> oper;
		if (oper == '*')
		{
			for (int i = 0; i < Rows1; i++)
			{
				for (int j = 0; j < Cols1_Rows2; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			for (int i = 0; i < Cols1_Rows2; i++)
			{
				for (int j = 0; j < Cols2; j++)
				{
					cout << mass[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			for (int e = 0; e < Cols2; e++)
			{
				for (int i = 0; i < Rows1; i++)
				{
					for (int j = 0; j < Cols1_Rows2; j++)
					{
						c[i][e] += arr[i][j] * mass[j][e];
					}
				}
			}
			for (int i = 0; i < Rows1; i++)
			{
				for (int j = 0; j < Cols2; j++)
				{
					if (c[i][j] < 100)cout << " ";
					cout << c[i][j] << " ";
				}
				cout << endl;
			}
		}
		if (oper == '+')
		{
			for (int i = 0; i < Rows1; i++)
			{
				for (int j = 0; j < Cols1_Rows2; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << "\t";
				for (int j = 0; j < Cols1_Rows2; j++)
				{
					cout << arr2[i][j] << " ";
				}
				cout << endl; 
			}
			cout << endl;
			for (int i = 0; i < Rows1; i++)
			{
				for (int j = 0; j < Cols1_Rows2; j++)
				{
					arr[i][j] += arr2[i][j];
				}
			}
			for (int i = 0; i < Rows1; i++)
			{
				for (int j = 0; j < Cols1_Rows2; j++)
				{
					if (arr[i][j] < 10)cout << " ";
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
		}
	}
