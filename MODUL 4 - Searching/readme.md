# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori

Algoritma dan struktur data berperan sangat besar dalam pembangunan sebuah perangkat lunak, baik dalam pembuatan desain serta implementasinya. Data Searching adalah proses yang ada dan dibutuhkan dalam pembangun-an sebuah aplikasi, ada banyak algoritma  yang  bisa  diterapkan  namun tidak semua algoritma memiliki efisiensi yang baik selama algoritma itu berjalan. Ada  beberapa  algoritma  yang  bisa digunakan untuk melakukan pencarian, seperti binary search dan sequential search.[1]

### Binary Search
Binary  Search  merupakan  sebuah  metode atau algoritma fungsi pencarian yang dirancang untuk berjalan  dengan  konsep  memanfaatkan  array  dari biner  yang  sudah  tersusun  secara  urut(Syahputra  & Sinurat,  2016). Fungsi  tersebut  membentuk  batas-batas untuk  dijadikan  ruang  lingkup  pencarian  kunci tersebut,  dan  dilakukan  secara  berulang  hingga mendapatkan kuncinya.[2] metode  ini lebih  effisien  dari  pada  metode  pencarian  linier  dimana semua  elemen  di  dalam  array  diuji  satu  persatu  sampai ditemukan elemen yang diinginkan 

cara kerja binary search:

1. Pertama   pengambilan   data   dimulai   dari   posisi   1 sampai dengan posisi akhir (n)

2. Selanjutnya  mencari posisi data  yang tengah dengan menggunakan rumus (posisi akhir)/2

3. Setelah  itu data   yang  akan  dicari  dibanndingkan dengan   data   yangberada   ditengah,   apakah   data terseebut sama atau lebih kecil, atau lebih besar?

4. Seandainya  data  tersebut  lebih  besar,  maka  proses pencarian  yang  dicarikan  dengan  posisi  awal  adalah posisi tengah + 1

5. Jika data  sama  dengan  data  yang  dicari,  berarti  data tersebut telah ditemukan.[4]

### Sequential Search
Metode pencarian beruntun (Sequential Search) nama  lain  algoritma pencarian  beruntun adalah  pencarian  lurus  (linear  search).Algoritma pencarian beruntun adalah proses membandingkan setiap elemen larik satu persatu secara berurutan, mulai  dari  elemen  pertama,  sampai  elemen  yang dicari ditemukan atau seluruh elemen sudah habis diperiksa.  (Munir  dan  Lidya,  2016:444). 

Adapun Proses   Algoritma   Sequential   Searching   adalah sebagai   berikut:   
(1)   Pertama   data   melakukan perbandingan satu per satu secara berurutan dalam kumpulan  data  dengan  data  yang  dicari  sampai data  tersebut  ditemukan  atau  tidak  ditemukan. 

(2) Pada  dasarnya,  pencarian  ini  hanya  melakukan pengulangan  data  dari  1  sampai  dengan  jumlah data  (n). 

(3)  Setiap  pengulangan,  dibandingkan data  ke-i  dengan  data  yang  sedang  dicari. 
   
(4) Apabila data sama dengan yang dicari, berarti data telah   berhasil   di   temukan.   Sebaliknya   apabila sampai  akhir  melakukan  pengulangan  tidak  ada data  yang  sama  dengan  yang  dicari,  berarti  data tidak ada yang ditemukan. 

Urutan Algoritma Sequential Searching:

a. i <-0

 b. Ketemu <-false 

 c. Selama  (  tidak ketemu  )  dan  (  i  <  n  ) kerjakan baris 4 

 d. Jika  (  data[i]  =  key  )  maka  ketemu  <-true jika tidak i <-i + 1 

 e. Jika  (  ketemu  )  maka  i  adalah  indeks  dari data yang dicari[3]



## Guided 

###  1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

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
 Output dari kode tersebut menunjukkan hasil dari implementasi pencarian sekuensial sederhana. Data yang digunakan adalah angka {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}. Program berhasil menemukan angka 10 dan memberi menunjukan bahwa angka tersebut terletak pada indeks ke-9 dalam larik tersebut. Dengan begitu output secara jelas menampilkan bahwa angka 10 telah ditemukan dalam data yang diberikan.


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
![Guided 2 (4)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/86280556-7c92-4e31-b757-ea0c405f7413)
### Interpretasi:

Output tersebut menunjukkan hasil dari pencarian Binary Search. Data awal yang digunakan adalah {1, 8, 2, 5, 4, 9, 7}. Diminta untuk memasukkan angka yang ingin dicari, yaitu angka 4. Program kemudian mengurutkan data secara ascending menjadi {1, 2, 4, 5, 7, 8, 9} untuk mempersiapkan proses pencarian biner. Setelah itu, program berhasil menemukan angka 4 dan menampilkan bahwa angka tersebut terletak pada indeks ke-2 dalam data yang telah diurutkan. Output menunjukkan bahwa angka 4 berhasil ditemukan menggunakan algoritma pencarian biner pada data yang diberikan.


## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
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
```
### Output:
![Unguided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/7cf428a7-75ca-437b-ab17-c58f0b43c626)

### Interpretasi: 
Output tersebut menunjukkan hasil dari program yang menggunakan algoritma binary search untuk mencari huruf tertentu dalam sebuah kalimat. Kalimat yang digunakan sebagai contoh adalah "saya suka belajar pemrograman". Pengguna diminta untuk memasukkan huruf yang ingin dicari, dalam hal ini huruf "s". Setelah itu, program mengurutkan kalimat secara alfabetis dan menampilkan hasilnya. Huruf "s" ditemukan pada indeks ke-25 setelah kalimat diurutkan.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!
```C++
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int hitungVokal(string kalimat) {
    int jumlahVokal = 0;
    for (char huruf : kalimat) {
        // Mengonversi huruf menjadi huruf kecil untuk mempermudah perbandingan
        huruf = tolower(huruf);
        // Memeriksa apakah huruf adalah huruf vokal
        if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    int jumlahVokal = hitungVokal(kalimat);
    
    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahVokal << endl;
    
    return 0;
}
```
### Output:
![Unguided 2 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/fefb5215-4b4e-44b3-908e-84cf77c46c65)

### Interpretasi:
Output tersebut merupakan hasil dari eksekusi program yang dibuat untuk menghitung jumlah huruf vokal dalam suatu kalimat. Diminta untuk memasukkan sebuah kalimat, contohnya "intan cantik". Setelah menginput kalimat tersebut, program melakukan perhitungan dan menemukan bahwa terdapat 4 huruf vokal dalam kalimat tersebut. Oleh karena itu, output menampilkan hasil dari jumlah huruf vokal yang ada dalam kalimat yang dimasukkan, yaitu sebanyak 4 huruf vokal.

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int panjang_data = sizeof(data) / sizeof(data[0]); // Menghitung panjang larik data
    int angka_yang_dicari = 4;
    int count = 0; // Variabel untuk menghitung jumlah kemunculan angka 4

    // Algoritma Sequential Search
    for (int i = 0; i < panjang_data; ++i) {
        if (data[i] == angka_yang_dicari) {
            count++; // Meningkatkan jumlah kemunculan angka 4 setiap kali ditemukan
        }
    }

    cout << "Jumlah kemunculan angka 4 dalam data adalah: " << count << endl;

    return 0;
}
```
#### Output:

![Unguided 3 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/33897eeb-d1d3-4af3-833c-1d8635357219)


### Interpretasi:

Output tersebut menampilkan hasil dari eksekusi jalannya program yang telah dilakukan. Program tersebut berfungsi untuk menghitung berapa kali angka 4 muncul dalam data yang diberikan menggunakan metode Sequential Search. Hasilnya menunjukkan bahwa jumlah kemunculan angka 4 dalam data yang diberikan adalah 4. Artinya, angka 4 muncul sebanyak 4 kali dalam data yang digunakan. 

## Kesimpulan
Pada praktikum kali ini, dalam mencari jumlah angka dan huruf dalam sebuah kalimat, dapat menggunakan dua jenis algoritma pencarian yang berbeda yaitu sequential search dan binary search. Sequential search adalah metode pencarian sederhana yang memeriksa satu per satu setiap elemen dalam data. Ini digunakan untuk mencari dalam data yang tidak terurut atau tidak terlalu besar. Di sisi lain, binary search adalah metode pencarian yang lebih efisien, bekerja dengan membagi data menjadi dua bagian dan memeriksa di setengah mana elemen yang dicari mungkin berada. Namun, binary search hanya dapat digunakan pada data yang sudah terurut. Jika data tidak terlalu besar atau tidak terurut, sequential search mungkin lebih cocok, sedangkan jika data sudah terurut, binary search lebih efisien. 

## Referensi
[1] Religia, Y. (2019). ANALISIS ALGORITMA SEQUENTIAL SEARCH DAN BINARY SEARCH PADA BIG DATA. Pelita Teknologi, 14(1), 74-79. https://doi.org/10.37366/pelitatekno.v14i1.232

[2] METHOMIKA: Jurnal Manajemen Informatika & Komputersisasi Akuntansi

[3] INFORMATIKA, C., & Nurul Imamah. (2021). PERBANDINGAN ALGORITMA SEQUENTIAL SEARCH DAN ALGORITMA BINARY SEARCH PADA APLIKASI KAMUS BAHASA INDONESIA MENGGUNAKAN PHP DAN JQUERY . COMPUTING | Jurnal Informatika, 8(01), 1–6. Retrieved from https://www.ejournal.unibba.ac.id/index.php/computing/article/view/564

[4] Toyib, R., Darnita, Y., & Deva, A. R. (2021). PENERAPAN ALGORITMA BINARY SEARCH PADA APLIKASI E-ORDER. JURNAL MEDIA INFOTAMA, 17(1). https://doi.org/10.37676/jmi.v17i1.1314