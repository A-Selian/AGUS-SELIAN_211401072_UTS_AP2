#include <iostream>
#include <string>
using namespace std;

int main () {
    string nama;
    int nim, x, y, z;

    cout << "Nama: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> nim;
    cout << "Nilai Mata Kuliah" << endl;
    cout << "   Algortma dan Pemrograman: ";
    cin >> x;
    cout << "   Probabilitas dan Statistika: ";
    cin >> y;
    cout << "   Pemrograman Berorientasi Objek: ";
    cin >> z;

    if (x >= 60) {
        cout << "\nAlgoritma dan Pemrograman: Lulus" << endl;
    }
    else {
        cout << "Algoritma dan Pemrograman: Tidak Lulus" << endl;
    }

    if (y >= 60) {
        cout << "Probabilitas dan Statistika: Lulus" << endl;
    }
    else {
        cout << "Probabilitas dan Statistika: Tidak Lulus" << endl;
    }

    if (z >= 60) {
        cout << "Pemrograman Berorientasi Objek: Lulus" << endl;
    }
    else {
        cout << "Pemrograman Berorientasi Objek: Tidak Lulus" << endl;
    }
    return 0;
}