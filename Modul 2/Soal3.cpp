#include <iostream>
#include <string>

using namespace std;

int hitungKarakter(const string& kata, char cari) {
    int jumlah = 0;
    for (char c : kata) {
        if (c == cari) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kata;
    char cari;

    if (cin >> kata >> cari) {
        int hasil = hitungKarakter(kata, cari);
        cout << hasil << endl;
    }

    return 0;
}