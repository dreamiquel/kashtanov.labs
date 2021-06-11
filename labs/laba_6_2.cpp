// laba_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include "iostream"
#include "math.h"

using std::cin;
using std::cout;


void zapolni2(double M[10][10], int n)
{
	cout << "BBodNM MACCNB\n";
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
void zapolni1(double M[100], int n)
{
	cout << "BBodNM MACCNB\n";
	for (int i = 0; i < n; i++)
	{
		cin >> M[i];
	}
	return;
}
double norma(double M[10][10], int n)
{

	double max;
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


int _tmain()
{

	//3ADAHNE 2
	double A[10][10], B[10][10], C[10][10], a, b, c;
	cout << "BBEDNTE PA3MEPHOCT'\n"; */
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
}

