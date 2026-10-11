#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa daftarMhs[MAX_MAHASISWA];
    int n;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> n;

    if (n > MAX_MAHASISWA) {
        cout << "Jumlah melebihi kapasitas maksimal!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Data Mahasiswa ke-" << (i + 1) << " ---" << endl;
        cin.ignore();
        cout << "Nama        : ";
        getline(cin, daftarMhs[i].nama);
        cout << "NIM         : ";
        cin >> daftarMhs[i].nim;
        cout << "Nilai UTS   : ";
        cin >> daftarMhs[i].uts;
        cout << "Nilai UAS   : ";
        cin >> daftarMhs[i].uas;
        cout << "Nilai Tugas : ";
        cin >> daftarMhs[i].tugas;

        daftarMhs[i].nilai_akhir = hitungNilaiAkhir(daftarMhs[i].uts, daftarMhs[i].uas, daftarMhs[i].tugas);
    }

    cout << "\n================ DATA MAHASISWA ================\n";
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << (i + 1) << ":" << endl;
        cout << "Nama        : " << daftarMhs[i].nama << endl;
        cout << "NIM         : " << daftarMhs[i].nim << endl;
        cout << "Nilai UTS   : " << daftarMhs[i].uts << endl;
        cout << "Nilai UAS   : " << daftarMhs[i].uas << endl;
        cout << "Nilai Tugas : " << daftarMhs[i].tugas << endl;
        cout << "Nilai Akhir : " << daftarMhs[i].nilai_akhir << endl;
    }

    return 0;
}