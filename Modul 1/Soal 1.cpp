#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << fixed << setprecision(2);
    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;
    
    if (b != 0) {
        cout << "Hasil pembagian: " << a / b << endl;
    } else {
        cout << "Hasil pembagian: Tidak terdefinisi (dibagi dengan nol)" << endl;
    }
    
    return 0;
}