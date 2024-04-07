#include <iostream>
using namespace std;

int main() {
    int hai [10];

    cout << "\nMasukkan 10 Angka:\n";
    for (int i = 0; i < 10; ++i){
        cout << "Masukkan Angka ke-" << i + 1 << ": "; cin >> hai[i];
  }

  cout << "\nData Array: ";
  for (int i = 0; i < 10; ++i) {
      cout << hai[i] << " "; 
  }

  cout << "\nNomor Genap: ";
  for (int i = 0; i < 10; ++i) {
      if (hai[i] % 2 == 0) {
          cout << hai[i] << " ";

      }
  }
  cout << "\nNomor Ganjil: ";
  for (int i = 0; i < 10; ++i) {
      if (hai[i] % 2 != 0) {
          cout << hai[i] << " ";
      }

  }
  cout << endl;
  return 0;
}
