# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Stack:
 Stack adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip dengan Linked Lists). Dalam tumpukan, urutan kedatangan data penting. Sebuah tumpukan piring di kafetaria adalah contoh bagus dari tumpukan. Piring ditambahkan ke tumpukan saat mereka dibersihkan dan ditempatkan di bagian atas. Ketika sebuah piring dibutuhkan, diambil dari bagian atas tumpukan. Piring pertama yang ditempatkan di tumpukan adalah yang terakhir digunakan. Stack Beroperasi dalam bentuk LIFO (last-in First-out), dalam struktur data ini data yang dimasukan terakhir akan dapat dibaca pertama.[1]

### Beberapa Operasi umum pada Stack:
a) Push (Masukkan): Menambahkan elemen ke dalam tumpukan pada posisi paling atas atau ujung.

b) Pop (Keluarkan): Menghapus elemen dari posisi paling atas atau ujung tumpukan.

c) Top (Atas): Mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa menghapusnya.

d) IsEmpty (Kosong): Memeriksa apakah tumpukan kosong atau tidak.

e) IsFull (Penuh): Memeriksa apakah tumpukan penuh atau tidak (terutama pada implementasi tumpukan dengan kapasitas terbatas).

f) Size (Ukuran): Mengembalikan jumlah elemen yang ada dalam tumpukan

g) Peek (Lihat): Melihat nilai atau elemen pada posisi tertentu dalam tumpukan tanpa menghapusnya

h) Clear (Hapus Semua): Mengosongkan atau menghapus semua elemen dari tumpukan

i) Search (Cari): Mencari keberadaan elemen tertentu dalam tumpukan.

Container stack dibuat berdasarkan deque
dan tidak memiliki iterator. Container ini
hanya mengijinkan penyisipan dan penghapusan elemen pada bagian atas. Member
function yang dimiliki antara lain:

• empty() memberikan true jika dan hanya jika stack kosong.

• size() memberikan jumlah elemen.

• top() memberikan elemen paling atas.

• push(x) menyisipkan elemen x.

• pop() menghapus elemen.[2]

### Urutan dalam Stack 
1. Stack yang baru akan ada dalam keadaan kosong.

2. Stack akan menyimpan 9 karakter

3. Karakter baru hanya bisa ditambahkan di bagian TOP dari stack.

4. Data juga hanya bisa diambil dari TOP Stack.

5. Kita hanya bisa melihat bagian TOP dari stack yang kita miliki. Jika stack dalam keadaan kosong,pesan akan dimunculkan.

6. Pesan kesalahan juga akan dimunculkan jika kita menambahkan lebih dari 9 elemen ke dalam stack.[3]

## Guided 

### 1. Sourcecode

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";

    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}

```
### Output:
![Output Guided 1](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/f12aae41-cdfd-4759-91de-f8ded6ffaf86)
### Full Screen shoot:
![Full ss Guided 1](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/241787f9-4ff5-4e8c-880f-521e899d7414)
### Interpretasi:
Program ini menjalankan operasi dasar pada struktur data tumpukan, yang menggunakan array untuk menyimpan data. Awalnya, tumpukan diisi dengan empat mata pelajaran: "Kalkulus", "Struktur Data", "Matematika Diskrit", dan "Dasar Multimedia". Program kemudian mengecek apakah tumpukan sudah penuh atau masih kosong, serta menampilkan mata pelajaran yang berada di posisi kedua, yaitu "Dasar Multimedia". Kemudian, program menambahkan mata pelajaran "Inggris" ke tumpukan dan mencetak ulang isi tumpukan. Setelah itu, program memeriksa kembali status tumpukan dan menghapus mata pelajaran teratas, yakni "Inggris". Jumlah mata pelajaran dalam tumpukan kemudian dicetak, yang sekarang tersisa empat. Salah satu mata pelajaran, yaitu yang berada di posisi kedua, diubah menjadi "Bahasa Jerman", dan tumpukan dicetak ulang. Terakhir, program menghapus semua mata pelajaran dari tumpukan dan mencetak tumpukan kosong sebagai hasil akhir. Program ini dirancang untuk memudahkan pengelolaan data pada tumpukan, seperti menambah, menghapus, dan mengubah data, serta memeriksa status tumpukan.

## Unguided 

### 1. [Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.]

```C++
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

string cleanSentence(string sentence) {
    string cleanedSentence = "";
    for (char c : sentence) {
        if (isalpha(c)) {
            cleanedSentence += toupper(c);
        }
    }
    return cleanedSentence;
}

bool isPalindrome(string sentence) {
    stack<char> charStack;
    sentence = cleanSentence(sentence);

    for (char c : sentence) {
        charStack.push(c);
    }

    for (char c : sentence) {
        if (c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }
    return true;
}

int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
```
#### Output:
![Output Unguided 1 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c9fd1bcd-613e-4e5e-b724-14d6dbd0fb40)
#### Full Screenshot:
![Full ss Unguided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/198c4dd5-5014-46dd-9c35-5a8cd3b65e86)
### Interpretasi:
kodingan ini meminta untuk memasukkan sebuah kalimat ini dan telkom kemudian memeriksa apakah kalimat tersebut merupakan palindrom atau tidak. Untuk melakukan pengecekan, program membersihkan kalimat dari karakter non-huruf dan mengubahnya menjadi huruf kapital. Kemudian, program memasukkan setiap karakter ke dalam tumpukan. Setelah itu, program membandingkan karakter-karakter kalimat dengan karakter-karakter yang ada di tumpukan. Jika semua karakter cocok, maka kalimat tersebut adalah palindrom; jika tidak, maka bukan palindrom. Dengan demikian, program memberikan feedback secara langsung apakah kalimat yang dimasukkan merupakan palindrom atau tidak.


### 2. [Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?]

```C++
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string sentence) {
    stack<char> charStack;
    
    
    for (char c : sentence) {
        charStack.push(c);
    }

    cout << "Datastack Array :\nData : ";

    
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
}

int main() {
    string sentence;
    cout << "Masukkan Kata: ";
    getline(cin, sentence);

    reverseSentence(sentence);

    return 0;
}
```

### Output:
![Output unguided 2 Stack](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/edb4132a-9d90-4854-a185-d946910ad056)

### Full Screen Shoot:
![Full ss unguided 2 Stack](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/0996d1c6-5c66-4cb0-8088-d72f741612c3)
### Interpretasi:
kodingan ini meminta untuk memasukkan sebuah kata atau kalimat. Setelah memasukkan input, program akan membalikkan urutan karakter dari kata atau kalimat tersebut. Untuk melakukan ini, program menggunakan tumpukan (stack) untuk menyimpan setiap karakter dari kata atau kalimat secara terbalik. Kemudian, program akan mencetak karakter-karakter tersebut dari tumpukan sehingga urutannya menjadi terbalik, menghasilkan kata atau kalimat yang telah dibalikkan. Dalam contoh yang diberikan, jika pengguna memasukkan kata "Telkom Purwokerto", program akan mencetak "otrekworwuP mokleT", yaitu kata tersebut dibalikkan urutannya.

## Kesimpulan
Stack adalah sebuah struktur data sederhana yang bekerja berdasarkan prinsip Last-In-First-Out (LIFO), yang artinya data yang terakhir dimasukkan akan menjadi yang pertama dikeluarkan. Dalam kehidupan sehari-hari, stack dapat diibaratkan seperti tumpukan piring di kafetaria, di mana piring yang terakhir diletakkan akan menjadi yang pertama diambil. Beberapa operasi umum pada stack meliputi menambahkan elemen ke tumpukan (push), menghapus elemen dari tumpukan (pop), mendapatkan nilai elemen teratas (top), serta memeriksa apakah tumpukan kosong atau penuh. Dalam penggunaannya, stack hanya memperbolehkan penyisipan atau penghapusan elemen pada bagian atas tumpukan, dan hanya elemen paling atas yang dapat dilihat atau diakses. Jika tumpukan kosong, pesan akan ditampilkan, dan jika terjadi kesalahan dalam menambahkan elemen melebihi kapasitas tumpukan, pesan kesalahan akan muncul. Dengan menggunakan stack, pengelolaan data dapat dilakukan secara efisien sesuai dengan prinsip LIFO, membuatnya menjadi struktur data yang berguna dan mudah dimengerti.

## Referensi
[1] Kurniawan, A., Adnan, R., Aryaputra, P., Sasono, N., Heryana, A. A., Rahman, M. F., ... & Wirasta, A. BAHASA C.

[2] Santoso, L. E. (2004). STANDARD TEMPLATE LIBRARY C++ UNTUK MENGAJARKAN STRUKTUR DATA. Jurnal FASILKOM Vol, 2(2).

[3] Dasar pemrograman C++ disertai dengan pengenalan pemrograman berorientasi objek