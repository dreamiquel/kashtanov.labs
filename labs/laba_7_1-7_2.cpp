// laba_2.cpp : Defines the entry point for the console application.
//


#include <fstream>
#include "iostream"
#include "math.h"

using std::cin;
using std::cout;

void zapolni1(int M[100], int n)
{
	cout << "BBodNM MACCNB\n";
	for (int i = 0; i < n; i++)
	{
		cin >> M[i];
	}
	return;
}
void zapolnidouble1(double M[100], int n)
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


double max(double P[30], int n)
{
	double M = P[0];
	for (int i = 0; i < n; i++)
	{
		if (M < P[i])
		{
			M = P[i];
		}
	}
	return M;
}



bool chetnost(int unsigned x)	// возвращает: 0 - четное,1 - не четное
{
	bool a = (x % 2 != 0);
	return a;
}

void pintmass1(int M[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << " ";

	}
	cout << "\n";
	return;
}
void pintmassdouble1(double M[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << " ";

	}
	cout << "\n";
	return;
}

int main()
{
	//3ADAHNE 1
	int n, P[100], Ch[100];
	cout << "vvedite dlinu posledovatelnosti\n";
	cin >> n;
	cout << "vvedite posledovatelnost'\n";
	Ch[0] = 0;
	zapolni1(P, n);
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (chetnost(P[i]) == 0)
		{
			Ch[j] = P[i];
			j++;
		}
	}
	if (Ch[0] == 0)
	{
		cout << "net 4etkix\n";
	}
	pintmass1(Ch, j);
	cout << "\n";
	//3ADAHNE 2
	double M[25], kl;
	int i; 
	cout << "vvedite dlinu posledovatelnosti\n";
	cin >> n;
	zapolnidouble1(M, n);
	kl = max(M, n);
	for (i = 0; i < n; i++)
	{
		if (fabs(M[i]) > kl)
		{
			M[i] = 0;
		}
	}
	pintmassdouble1(M, n);
	return 0;
}