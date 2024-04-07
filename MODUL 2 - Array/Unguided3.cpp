#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "\nInput Jumlah Angka Dalam Data Array: "; cin >> n;

    int hai[n];
    for (int i = 0; i < n; ++i) {
        cout << "Angka ke-" << i + 1 << " : ";
        cin >> hai[i];
    }
    int maksimum = hai[0];
    int minimum = hai[0];
    int total = hai[0];

    for (int i = 1; i < n; ++i) {
        if (hai[i] > maksimum) {
            maksimum = hai[i];
        }
        if (hai[i] < minimum) {
            minimum = hai[i];
        }
        total += hai[i];
    }
    double ratarata = total / n;

    cout << "\nNilai Maksimum        : " << maksimum << endl;
    cout << "Nilai Minimum            : " << minimum << endl;
    cout << "Nilai Rata-rata           : " << ratarata << endl;
    
    return 0;
}