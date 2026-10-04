#include <iostream>
using namespace std;

// ini adalah FUNGSI (punya return value)
int maks3(int a, int b, int c){
    int temp_max = a ;
    if (b > temp_max){
        temp_max = b ;
    }
    if (c > temp_max){
        temp_max = c ;
    }
    return temp_max ;
}

// ini adalah PROSEDUR (pakai void tidak punya return value)
void tulis(int x){
    for (int i = 0 ; i < x ; i++){
        cout << "baris ke-" << i + i << endl ;
    }
}

int main() {
    // manggil fungsi, nilainya bisa disimpan ke variable
    int hasil_maks = maks3(10, 50, 30) ;
    cout << "Nilai maksimumnya adalah = " << hasil_maks << endl ;

    // manggil prusedur, dia langsung jalanin tugasnya aja
    cout << "Mulai panggil prosedur: " << endl ;
    tulis(3) ;

    return 0 ;
}
