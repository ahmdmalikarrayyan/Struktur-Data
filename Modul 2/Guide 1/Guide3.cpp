#include <iostream>
using namespace std;

// A.Pemanggil dengan Nilai call by value (cuma disalin, data asli aman)
void tukarValue(int x, int y) {
    int temp = x ;
    x = y ;
    y = temp ;
}

// B. Pemanggil dengan Pointer (Alamat dikirim pakai pointer, data asli berubah)
void tukarPointer(int *px, int *py) {
    int temp = *px ;
    *px = *py ;
    *py = temp ;
}

// C. Pemanggil dengan Referensi (Paling clean, data asli ikut berubah)
void tukarReference(int &px, int &py) {
    int temp = px ;
    px = py ;
    py = temp ;
}

int main() {
    int a = 4, b = 6 ;

    cout << "Kondisi Awal -> a: " << a << " b: " << b << endl;

    // test call by value
    tukarValue(a, b) ;
    cout << "Setelah tukarValue -> a: " << a << " b: " << b << endl;
    // Hasil a dan b tetap 4 dan 6!

    // Test call by Pointer
    tukarPointer(&a, &b) ;
    cout << "Setelah tukarPointer -> a: " << a << " b: " << b << endl;
    //

    // Test call by Reference (Kita tukar balik konsisinya)
    tukarReference(a, b) ;
    cout << "Setelah tukarReference -> a: " << a << " b: " << b << endl;
    //

    return 0 ;
}