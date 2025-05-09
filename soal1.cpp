#include <iostream>

using namespace std;
int main () {
    int x, y, z;

    cout << "Masukkan Kode 1: ";
    cin >> x;
    cout << "Masukkan Kode 2: ";
    cin >> y;
    cout << "Masukkan Kode 3: ";
    cin >> z;

    if (x >= 50 && y >= 50 && z >= 50 && (x + y + z) >= 200) {
        cout << "Aman" << endl;
    }
    else {
        cout << "Bahaya" << endl;
    }
    return 0;
}
