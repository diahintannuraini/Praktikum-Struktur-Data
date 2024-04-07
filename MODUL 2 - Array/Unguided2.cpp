#include <iostream>
using namespace std;

int main() {
    int B, C, D;

    cout << "\nMasukkan panjang B: "; cin >> B;
    cout << "Masukkan panjang C: "; cin >> C;
    cout << "Masukkan panjang D: "; cin >> D;
    cout << endl;

    int hai[B] [C] [D] ;

    for (int b = 0; b < B; b++) {
        for (int c = 0; c < C; c++) {
            for (int d = 0; d < D; d++) {
                cout << "Input Array [" << b << "] [" << c << "] [" << d << "] = "; cin >> hai[b] [c] [d];

            }
        }
    }
    cout << endl;

    cout << "Data Array :\n";
    for (int b = 0; b < B; b++) {
        for (int c = 0; c < C; c++) {
            for (int d = 0; d < D; d++) {
                 cout << "Data Array [" << b << "] [" << c << "] [" << d << "] = " << hai[b][c][d] << endl;
            }
        }
    }
    cout << endl;

        cout << "Array :\n";
    for (int b = 0; b < B; b++) {
         for (int c = 0; c < C; c++) {
             for (int d = 0; d < D; d++) {
                cout << hai[b][c][d] << ' ';
             }
             cout << endl;
         }
         cout << endl;

    }
    return 0;
}
