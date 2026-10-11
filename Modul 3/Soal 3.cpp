#include <iostream>
using namespace std;

void tampilArray2D(int arr[3][3], string namaArray) {
    cout << "=== " << namaArray << " ===" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarElemen(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int* ptrA;
    int* ptrB;

    cout << "--- KONDISI AWAL ---" << endl;
    tampilArray2D(A, "Array A");
    tampilArray2D(B, "Array B");

    int r, c;
    cout << "Masukkan indeks baris yang ingin ditukar (0-2): ";
    cin >> r;
    cout << "Masukkan indeks kolom yang ingin ditukar (0-2): ";
    cin >> c;

    if (r >= 0 && r < 3 && c >= 0 && c < 3) {
        ptrA = &A[r][c];
        ptrB = &B[r][c];

        tukarElemen(ptrA, ptrB);

        cout << "\n--- KONDISI SETELAH DITUKAR PADA POSISI (" << r << ", " << c << ") ---" << endl;
        tampilArray2D(A, "Array A");
        tampilArray2D(B, "Array B");
    } else {
        cout << "Indeks di luar jangkauan (harus antara 0-2)!" << endl;
    }

    return 0;
}