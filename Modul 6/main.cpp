#include "Doublylist.h"

bool isNopolExists(List L, const string &nopol) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info.nopol == nopol) {
            return true;
        }
        P = P->next;
    }
    return false;
}

void printReverse(List L) {
    address P = L.Last;
    while (P != nullptr) {
        cout << "no polisi : " << P->info.nopol << endl;
        cout << "warna     : " << P->info.warna << endl;
        cout << "tahun     : " << P->info.thnBuat << endl;
        P = P->prev;
    }
}

int main() {
    List L;
    CreateList(L);

    int jumlahInput = 4;
    for (int i = 0; i < jumlahInput; i++) {
        infotype x;
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        if (isNopolExists(L, x.nopol)) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            address P = alokasi(x);
            insertLast(L, P);
        }
        cout << endl;
    }

    cout << "DATA LIST 1" << endl << endl;
    printReverse(L);
    cout << endl;

    infotype cari;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> cari.nopol;
    cout << endl;

    address ketemu = findElm(L, cari);
    if (ketemu != nullptr) {
        cout << "Nomor Polisi : " << ketemu->info.nopol << endl;
        cout << "Warna        : " << ketemu->info.warna << endl;
        cout << "Tahun        : " << ketemu->info.thnBuat << endl;
    } else {
        cout << "Data dengan nomor polisi " << cari.nopol << " tidak ditemukan." << endl;
    }

    infotype hapus;
    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapus.nopol;

    address target = findElm(L, hapus);
    address dihapus = nullptr;

    if (target == nullptr) {
        cout << "Data dengan nomor polisi " << hapus.nopol << " tidak ditemukan." << endl;
    } else {
        if (target == L.First) {
            deleteFirst(L, dihapus);
        } else if (target == L.Last) {
            deleteLast(L, dihapus);
        } else {
            address Prec = target->prev;
            deleteAfter(Prec, dihapus);
            // Jika Prec ternyata menjadi elemen terakhir setelah penghapusan
            if (Prec->next == nullptr) {
                L.Last = Prec;
            }
        }
        dealokasi(dihapus);
        cout << "Data dengan nomor polisi " << hapus.nopol << " berhasil dihapus." << endl;
    }

    cout << endl << "DATA LIST 1" << endl << endl;
    printReverse(L);

    return 0;
}