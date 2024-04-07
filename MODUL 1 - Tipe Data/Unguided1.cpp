#include <iostream>
using namespace std;

int keliling(int lebar, int panjang){
    return 2 * (panjang + lebar);
}

int luas(int lebar, int panjang){
    return panjang * lebar;
}

int main(){
    int panjang, lebar,  intancantik;

    cout << "\nHITUNG PERSEGI PANJANG\n";
    cout << "\nMasukkan panjang   : "; cin >> panjang;
    cout << "\nMasukkan lebar     : "; cin >> lebar;
    cout << "\nPilih Menu\n";
    cout << "1. Hitung Keliling\n";
    cout << "2. Hitung Luas\n";
    cout << "\nMasukkan Pilihan: "; cin >> intancantik;

    switch (intancantik)
    {
    case 1: cout << "\nHasil           : " << keliling(panjang, lebar); break;
    case 2: cout << "\nHasil           : " << luas(panjang, lebar); break;
    default: cout << "\nMaaf, pilihan Anda salah!";
    }

    return 0;
}