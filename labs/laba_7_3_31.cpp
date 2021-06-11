#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double dist(double* a, int x, int y) {
    return sqrt((a[x] - a[y]) * (a[x] - a[y]) + (a[x + 1] - a[y + 1]) * (a[x + 1] - a[y + 1]));
}
bool isosceles(double* a, int x, int y, int z) {
    if (dist(a, x, y) == dist(a, x, z) && dist(a, x, y) == dist(a, y, z) && a[x] != a[y]) return true;
    return false;
}
int main() {
    int n;
    cout << "n=";
    cin >> n;
    double* a = new double[2 * n];
    for (int i = 0; i < 2 * n; i += 2) {
        cout << "\nx" << i / 2 + 1 << " y" << i / 2 + 1 << " :\n";
        cin >> a[i] >> a[i + 1];
    }
    cout << "\npavnobedrennie treugolniki :\n";
    for (int x = 0; x < 2 * n; x += 2)
        for (int y = x + 2; y < 2 * n; y += 2)
            for (int z = y + 2; z < 2 * n; z += 2)
                if (isosceles(a, x, y, z))
                    cout << setprecision(15) << "x1=" << a[x] << "\ty1=" << a[x + 1] << "\tx2=" << a[y] << "\ty2=" << a[y + 1] << "\tx3=" << a[z] << "\ty3=" << a[z + 1] << endl;
    system("pause");
    return 0;
}