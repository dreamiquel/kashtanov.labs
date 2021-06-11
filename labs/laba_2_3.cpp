// laba 2,3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

void zapolni2(double M[10][10], int n)
{
	cout << "Vvodim massiv\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "eleMeHT" << i << j << "	";
			cin >> M[i][j];
		}
	}
	return;
}
double norma(double M[10][10], int n)
{

	double max = numeric_limits<double>::min();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + 1 == n)
			{
				break;
			}
			else if (fabs(M[i][j]) > fabs(M[i][j + 1]))
			{
				max = M[i][j];
			}
			else
			{
				max = fabs(M[i][j + 1]);
			}
		}
	}

	return max;
}
double min3(double b1, double b2, double b3)
{
	double min;
	if ((b1 <= b2) && (b1 <= b3))
	{
		min = b1;
	}
	else if ((b2 <= b1) && (b2 <= b3))
	{
		min = b2;
	}
	else
	{
		min = b3;
	}
	return min;
}

void pr(double M[10][10], int n)
{
	cout << "\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << M[i][j] << "	";

		}
		cout << "\n";
	}
	return;
}

int main()
{
	double m;
	double A[10][10], B[10][10], C[10][10], a, b, c;
	cout << "BBEDNTE PA3MEPHOCT'\n";
	int n;
	cin >> n;
	zapolni2(A, n);
	zapolni2(B, n);
	zapolni2(C, n);
	a = norma(A, n);
	b = norma(B, n);
	c = norma(C, n);
	m = min3(a, b, c);
	if (m == a)
	{
		pr(A, n);
	}
	else if (m == b)
	{
		pr(A, n);
	}
	else if (m == c)
	{
		pr(A, n);
	}

	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
