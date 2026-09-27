#include <iostream>
#include <string>

using namespace std;

string angkaKeTeks(int n) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
    
    if (n >= 0 && n <= 11) {
        return satuan[n];
    } else if (n >= 12 && n <= 19) {
        return satuan[n - 10] + " belas";
    } else if (n >= 20 && n <= 99) {
        if (n % 10 == 0) {
            return satuan[n / 10] + " puluh";
        }
        return satuan[n / 10] + " puluh " + satuan[n % 10];
    } else if (n == 100) {
        return "seratus";
    }
    return "Angka di luar batas";
}

int main() {
    int angka;
    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << " : " << angkaKeTeks(angka) << endl;
    } else {
        cout << "Harap masukkan bilangan bulat positif dari 0 s.d 100." << endl;
    }
    
    return 0;
}