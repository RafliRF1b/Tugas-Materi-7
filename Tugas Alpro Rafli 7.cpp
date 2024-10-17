#include <iostream>
using namespace std;

int main() {
    int jumlah;


    cout << "Masukkan jumlah elemen array: ";
    cin >> jumlah;


    int array[jumlah];


    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    int nilai_tertinggi = array[0];
    for (int i = 1; i < jumlah; i++) {
        if (array[i] > nilai_tertinggi) {
            nilai_tertinggi = array[i];
        }
    }
    cout << "Nilai tertinggi dalam array adalah: " << nilai_tertinggi << endl;

    int angka_diperiksa;
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> angka_diperiksa;

    bool ditemukan = false;
    int indeks = -1;

    for (int i = 0; i < jumlah; i++) {
        if (array[i] == angka_diperiksa) {
            ditemukan = true;
            indeks = i;
            break;
        }
    }

    if (ditemukan) {
        cout << "Angka " << angka_diperiksa << " ada di dalam array pada indeks " << indeks << "." << endl;
    } else {
        cout << "Angka " << angka_diperiksa << " tidak ada di dalam array." << endl;
    }

    return 0;
}
