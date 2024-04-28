#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char cari;

void selection_sort(string &kalimat) {
    sort(kalimat.begin(), kalimat.end());
}

void binarysearch(string kalimat) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = kalimat.length() - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(kalimat[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(kalimat[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout<<"\n Huruf ditemukan pada index ke- " << tengah << endl;
    else
        cout<<"\n Huruf tidak ditemukan\n";
}

int main() {
    string kalimat = "saya suka belajar pemrograman";
    
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Kalimat : " << kalimat << endl;

    cout << "\n Masukkan huruf yang ingin Anda cari : ";
    cin >> cari;

    cout << "\n Kalimat diurutkan : ";
    // Urutkan kalimat dengan selection sort
    selection_sort(kalimat);

    // Tampilkan kalimat setelah diurutkan
    cout << kalimat << endl;

    binarysearch(kalimat);

    return 0;
}