#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    int terbesar;

    if (a >= b && a >= c) {
        terbesar = a;
    } else if (b >= a && b >= c) {
        terbesar = b;
    } else {
        terbesar = c;
    }

    cout << "Bilangan terbesar: " << terbesar << "\n";

    return 0;
}