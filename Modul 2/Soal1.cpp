#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    if (!(cin >> N) || N <= 0) {
        return 0;
    }

    vector<int> nilai(N);
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rataRata = total / N;

    int jumlahDiAtasRataRata = 0;
    for (int i = 0; i < N; i++) {
        if (nilai[i] > rataRata) {
            jumlahDiAtasRataRata++;
        }
    }

    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << jumlahDiAtasRataRata << endl;

    return 0;
}