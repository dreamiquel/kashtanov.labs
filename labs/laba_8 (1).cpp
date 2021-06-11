#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iostream>

using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int** Matrix, n = 0;
	cout << "Введите порядок квадратной матрицы n = ";
	cin >> n;
	Matrix = new int* [n];
	for (int i = 0; i < n; i++)
		Matrix[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (j == 0 || i == 0)
				Matrix[i][j] = 1;
			else if (i == n - 1 || j == n - 1)
				Matrix[i][j] = 1;
			else
				Matrix[i][j] = 0;
		}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << Matrix[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
		delete[] Matrix[i];
	delete[] Matrix;
	Matrix = 0;
	return 0;
}