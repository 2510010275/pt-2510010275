#include <iostream> 
using namespace std;

int main() {
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

bool kabisat = (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);

if (kabisat) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}