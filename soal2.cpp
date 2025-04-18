#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Masukkan Kode: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        cout << "Jumlah digit: " << sum << endl;
    }
    else {
        cout << "Kode Salah!" << endl;
    }
    return 0;
}