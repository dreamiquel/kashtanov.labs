﻿// laba5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
#include <stdio.h>
#include <sstream>

int main()
{
    using namespace std;
    int n, k;                       //5.1
    cout << "Enter n <=99: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    if (n <= 99) {
        n < 10 ? n += k * 10 : n += k * 100;
        n *= 10;
        n += k;
    }
    else cout << "Ne ydovletvoryaet ycloviy.";
    cout << n << endl;
   

    long int M;                      //5.2
    cout << "Enter M:";
    cin >> M;
    for (long int i = 2; i < M; i++) {
        long int s = 0;
        for (long int j = 1; j <= i / 2; j++) {
            if (i % j == 0) s += j;
        }
        if (s == i) {
            cout << "sovershennoe 4islo: ";
            cout << i << endl;
        }
    }

    long long G;  //5.3
    stringstream F;
    cout << "Enter n: ";
    cin >> G;
    for (int i = 9; i >= 0; i--) {
        int a = G;
        for (; a; a /= 10)
            if (a % 10 == i)
                F << i;
    }
    F >> G;
    cout << G;
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