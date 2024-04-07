#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int>beras;
    beras["merah"] = 200000;
    beras["hitam"] = 300000;
    beras["porang"] = 500000;

    cout << "\nTipe beras merah memiliki harga    : " <<  beras["merah"];
    cout << "\nTipe beras hitam memiliki harga    : " <<  beras["hitam"];
    cout << "\nTipe beras porang memiliki harga: " <<  beras["porang"];

    string intancantikbanget;
    cout << "\n\nCek Tipe beras: "; cin >> intancantikbanget;
    if(beras.find(intancantikbanget) != beras.end()){
        cout << "\nStok tersedia, silahkan tanya penjual." << endl;
        } else{
        cout << "\nStok tidak tersedia, silahkan kembali besok." << endl;
    }
    
    return 0;
}