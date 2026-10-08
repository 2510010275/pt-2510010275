#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    int hasil_bagi = a / b;
    int sisa_bagi = a % b;

    cout << a << " / " << b << " = " << hasil_bagi
     << " sisa " << sisa_bagi << "\n";

return 0;
}