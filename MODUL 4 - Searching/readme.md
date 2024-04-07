# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori

Algoritma dan struktur data berperan sangat besar dalam pembangunan sebuah perangkat lunak, baik dalam pembuatan desain serta implementasinya. Data Searching adalah proses yang ada dan dibutuhkan dalam pembangun-an sebuah aplikasi, ada banyak algoritma  yang  bisa  diterapkan  namun tidak semua algoritma memiliki efisiensi yang baik selama algoritma itu berjalan. Ada  beberapa  algoritma  yang  bisa digunakan untuk melakukan pencarian, seperti binary search dan sequential search.[1]


#### Jenis-jenis Algoritma Sorting
1. Bubble Sort : Bubble    sort adalah    algoritma pengurutan tertua    dan    paling    sederhana    untuk di implementasikan. Algoritma ini juga cukup mudah dipahami. Algoritma ini bekerja dengan cara membandingkan  nilai setiap elemen pada tabel dengan elemen setelahnya, dan menukar nilainya jika sesuai dengan kondisi yang dibutuhkan. Proses ini akan terus berulang sampai semua elemen pada  tabel  sudah  diproses  dan  elemen  pada  tabel  sudah  terurut. Bubble  sortharus  melakukan banyak perbandingan ketika lebih banyak elemen data perlu disortir.[3]

2. Quick Sort : Algoritma ini mudah
diimplementasikan, mampu diterapkan untuk hampir berbagai jenis tipe data, dan relatif bekerja lebih ringan jika dibandingkan dengan
metode yang Iain. Quicksort adalah jenis algoritma divide-andconquer. Untuk mengurutkan sekelompok elemen pada array A[4]

3. Shell Sort : merupakanAlgoritma yang paling  efisien diantara algoritma dengan kompleksitas algoritma yang sama adalah algoritma dengan kompleksitas O(n2).

4. Selection Sort : selection  sort  adalah  metode  penyortiran  data, pemilihan    data    dalam    urutan    tertentu,    dan    kemudian membandingkannya  dengan  data  lain  dari  posisi  [Posisi  +  1] posisi untukmenemukan data terkecil dari rentang posisi ini[6]

5. Insert Sort: e insertion sort adalah teknik sederhana untuk menyortir daftar yang 
hampir berurutan yang relatif efisien. Algoritma ini juga dapat digunakan sebagai 
komponen yang lebih kompleks. [5]

6. Merge Sort :Algoritma Merge Sort adalah salah satu algoritma pengurutan yang efisien dan populer dalam ilmu komputer. Dalam pengembangan perangkat lunak, sering kali kita dihadapkan pada tugas pengurutan data, di mana urutan elemen-elemen data harus diatur secara teratur.[2]


## Guided 

### 1. 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\n\t Program Sequential Search Sederhana\n" << endl;
    cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;

}
```

### Output:
![Guided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/09ee619b-bfa0-47e5-aead-c5dc44b69fd0)

 ### Interpretasi : 
 Kodingan di atas menggunakan algoritma Bubble Sort untuk mengurutkan array bilangan double secara meningkat. Algoritma ini membandingkan pasangan elemen dalam array dan menukar posisi jika diperlukan. Iterasi terus dilakukan hingga tidak ada lagi pertukaran posisi yang dibutuhkan, menandakan bahwa array sudah terurut. Fungsi 'print_array' digunakan untuk mencetak array sebelum dan sesudah pengurutan. Dalam 'main', array diinisialisasi dan dicetak sebelum dan sesudah pengurutan dilakukan.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int cari;

void selection_sort(int data[], int length) {
    int temp, min, i, j;
    for(i = 0; i < length; i++) {
        min = i;
        for(j = i + 1; j < length; j++) {
            if(data[j] < data[min]) {
                min=j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void binarysearch(int data[], int length) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = length - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(data[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout<<"\n Data ditemukan pada index ke- " << tengah << endl;
    else
        cout<<"\n Data tidak ditemukan\n";
}

int main() {
    int data[7] = {1, 8, 2, 5, 4, 9, 7};
    int length = sizeof(data) / sizeof(data[0]);

    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // Tampilkan data awal
    for(int x = 0; x<7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;

    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort(data, length);

    // Tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binarysearch(data, length);
    _getche();
    return EXIT_SUCCESS;
}
```
### Output:
![Guided 2 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c143c676-156c-42d3-b54a-8d93bf6f7e0e)

### Interpretasi:

Kodingan di atas menggunakan algoritma Insertion Sort untuk mengurutkan array karakter. Algoritma ini membandingkan setiap elemen dengan elemen-elemen sebelumnya dalam array, kemudian memasukkannya ke posisi yang sesuai dengan urutan yang diinginkan. Loop 'for' berjalan melalui array dimulai dari indeks kedua, dengan loop 'while' di dalamnya untuk memeriksa dan menukar posisi elemen-elemen jika diperlukan. Fungsi 'print_array' mencetak array sebelum dan sesudah pengurutan. Dalam 'main', array karakter diinisialisasi dan dicetak sebelum dan sesudah pengurutan


## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include<iostream>
using namespace std;
void selection_sort(float arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
} }
        if (min != i) {
            float temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
} }
}
void print_array205(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    const int length = 5;
    float a[length] = {3.8, 2.9, 3.3, 4.0, 2.4};
    cout << "IPS sebelum sorting: " << endl;
    print_array205(a, length);
    selection_sort(a, length);
    cout << "IPS setelah sorting: " << endl;
    print_array205(a, length);
return 0; 
}
```
### Output:
![Unguided 1](https://github.com/suxeno/Struktur-Data-Assignment/assets/162097079/fb29776e-e211-4225-b1c6-c80c38253d60)

### Interpretasi: 
Program di atas menggunakan algoritma selection sort dalam C++ untuk mengurutkan angka dalam array. Algoritma ini bekerja dengan membandingkan setiap angka satu per satu, lalu menukar posisi jika ditemukan angka yang lebih kecil. Proses ini terus berulang hingga seluruh angka dalam array terurut dari yang terkecil ke yang terbesar.

Program memiliki dua fungsi utama: selection_sort untuk melakukan pengurutan, dan print_array205 untuk mencetak isi array. Fungsi utama (main) membuat array angka awal, mencetaknya, mengurutkannya dengan selection sort, dan mencetak hasilnya.

Output program adalah angka dalam array sebelum dan setelah diurutkan. Sebelum diurutkan, angka dalam array adalah 3.8 2.9 3.3 4.0 2.4, dan setelah diurutkan menjadi 2.4 2.9 3.3 3.8 4.0.


### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!
```C++
#include<iostream>
using namespace std;
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
} }
} }
void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
const int jumlah205 = 10;
string nama[jumlah205] = {"siti", "situ", "sana", "ana",
"ani", "caca", "cici", "dida", "dodo", "dadi"};
cout << "Nama-nama warga sebelum diurutkan: " << endl; printArray(nama, jumlah205);
bubbleSort(nama, jumlah205);
cout << "Nama-nama warga setelah diurutkan: " << endl; printArray(nama, jumlah205);
return 0; 
}
```
### Output:
![Unguided 2](https://github.com/suxeno/Struktur-Data-Assignment/assets/162097079/4d4d0eb4-db9f-474e-8e3e-e81ee2626083)

### Interpretasi:
Fungsi utama bubbleSort digunakan untuk melakukan pengurutan dengan dua loop bersarang untuk membandingkan dan menukar elemen-elemen array. Setelah pengurutan, array akan terurut.

Selain itu, ada fungsi printArray yang mencetak isi array ke layar. Di dalam fungsi main, array nama diisi dengan nama-nama warga dan dicetak sebelum dan setelah diurutkan menggunakan bubble sort.

Hasil output program menampilkan nama-nama warga sebelum dan sesudah pengurutan. Sebelum diurutkan, nama-nama warga adalah "siti situ sana ana ani caca cici dida dodo dadi", dan setelah diurutkan menjadi "ana ani caca cici dadi dida dodo sana siti situ".

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! 
```C++
#include<iostream>
using namespace std;
void bubbleSortAscending(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
} }
} }
void bubbleSortDescending(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
} }
} }
int main() {
    int n;
    cout << "input (n): "; cin >> n;
    char karakter205[n];
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ": ";
        cin >> karakter205[i];
    }
cout << "\nUrutan karakter sebelum sorting: " << endl; for (int i = 0; i < n; i++) {
        cout << karakter205[i] << " ";
    }
    cout << endl;
    bubbleSortAscending(karakter205, n);
 
    cout << "\nUrutan karakter setelah ascending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter205[i] << " ";
    }
    cout << endl;
    bubbleSortDescending(karakter205, n);
cout << "\nUrutan karakter setelah descending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter205[i] << " ";
    }
    cout << endl;
return 0; 
}
```
#### Output:
![Unguided 3](https://github.com/suxeno/Struktur-Data-Assignment/assets/162097079/20c93e8c-d948-4de3-8f0c-d61a44505d4f)

### Interpretasi:

Pada fungsi bubbleSortAscending dan bubbleSortDescending, terdapat dua loop bersarang untuk membandingkan dan menukar karakter-karakter dalam array. Fungsi bubbleSortAscending digunakan untuk mengurutkan karakter-karakter dari terkecil ke terbesar, sementara bubbleSortDescending untuk mengurutkan dari terbesar ke terkecil.

Di dalam fungsi main, program meminta input jumlah karakter yang akan diurutkan, kemudian karakter-karakter tersebut dimasukkan ke dalam array. Setelah itu, program mencetak urutan karakter sebelum pengurutan, melakukan pengurutan secara ascending, mencetak urutan setelah pengurutan secara ascending, melakukan pengurutan secara descending, dan terakhir mencetak urutan setelah pengurutan secara descending.

Hasil output program menampilkan urutan karakter sebelum pengurutan, urutan setelah pengurutan secara ascending, dan urutan setelah pengurutan secara descending.


## Kesimpulan
Algoritma Selection Sort digunakan untuk mengurutkan array bilangan float dengan cara membandingkan setiap elemen dan menukar mereka jika diperlukan. Waktu eksekusi algoritma ini tergantung pada jumlah elemen dalam array. Sebagai contoh, array float berhasil diurutkan dari yang terkecil hingga terbesar menggunakan Selection Sort. Di sisi lain, Bubble Sort merupakan algoritma sorting sederhana yang membandingkan dan menukar pasangan elemen yang berdekatan secara berulang. Meskipun efektif untuk mengurutkan array string secara alfabetis, Bubble Sort kurang efisien terutama pada data yang besar. Dalam kasus ketiga, Bubble Sort digunakan untuk mengurutkan karakter baik dalam urutan naik maupun turun, menunjukkan fleksibilitas algoritma ini dalam mengatasi berbagai jenis data dengan sedikit modifikasi pada implementasinya.

## Referensi
[1] Religia, Y. (2019). ANALISIS ALGORITMA SEQUENTIAL SEARCH DAN BINARY SEARCH PADA BIG DATA. Pelita Teknologi, 14(1), 74-79. https://doi.org/10.37366/pelitatekno.v14i1.232

[2] 
