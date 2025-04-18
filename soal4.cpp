#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input, title;
    int counter = 0;
    
    cout << "Masukkan Daftar Judul Buku: ";
    getline(cin, input);

    istringstream stream(input);

    while (stream >> title) {
        counter++;
    }

    cout << "Jumlah Judul Buku: " << counter << endl;

    return 0;
}