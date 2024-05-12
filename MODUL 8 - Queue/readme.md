# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Queue:
Queue adalah struktur data yang digunakan untuk menyimpan data dengan metode FIFO (First-In First-Out). Data yang pertama dimasukkan ke dalam queue akan menjadi data yang pertama pula untuk dikeluarkan dari queue. Queue mirip dengan konsep antrian pada kehidupan sehari-hari, dimana konsumen yang datang lebih dulu akan dilayani terlebih dahulu. Implementasi queue dapat dilakukan dengan menggunakan array atau linked list. Struktur data queue terdiri dari dua pointer yaitu front dan rear. Front/head adalah pointer ke elemen pertama dalam queue dan rear/tail/back adalah pointer ke elemen terakhir dalam queue. Queue/antrian adalah ordered list dengan penyisipan di satu ujung, sedang penghapusan di ujung lain. Ujung penyisipan biasa disebutrear/tail, sedang ujung penghapusa disebut front/head. Fenomena yang muncul adalah elemen yang lebih dulu disisipkan akan juga lebih dulu diambil. [3]

### Urutan dalam QUEUE (Antrian):
Untuk mempermudah, kita akan mendefinisikan Antrian dengan nama
Q, yang akan memiliki fitur-fitur sebagai berikut:

1. Q yang baru akan ada dalam keadaan kosong.

2. O akan menyimpan 9 karakter.

3. Karakter yang baru hanya bisa ditambahkan pada bagian belakang dari Q.

4. Data hanya bisa diambil dari bagian depan Q.

5. Kita bisa melihat keseluruhan isi dari Q. Jika Q kosong, akan ada pesan untuk memberi tahu.

6. Pesan kesalahan juga akan muncul jika ada usaha untuk menambah lebih dari 9 karakter ke dalam O.[1]

Container queue dibuat berdasarkan deque dan tidak memiliki iterator. Container ini hanya mengijinkan penyisipan elemen pada bagian belakang dan penghapusan elemen pada bagian depan. Selain empty(), size(), push(x), dan pop(), member function yang dimiliki antara lain:
1. front() memberikan elemen paling depan.

2. back() memberikan elemen paling belakang.[2]

### Karakteristik Queue 
Karakteristik penting antrian sebagai berikut :

1. Elemen antrian yaitu item-item data yang terdapat di elemen antrian.

2. Head/front (elemen terdepan dari antrian ).

3. Tail/rear (elemen terakhir dari antrian ).

4. Jumlah elemen pada antrian (count).

5. Status/kondisi antrian.

### Operasi-Operasi Pokok di Queue:
a. createQueue (Q), atau constructor menciptakan antrian kosong Q.

b. addQueue (Q, X) memasukkan elemen X sebagai elemen akhir di Q.

c. removeQueue (Q, X)atau mengambil elemen depan di antrian Q ke elemenX

Operasi-0perasi Query tambahan yang dapat dilakukan adalah:
1. isEmptyQueue (Q), mengirim apakah antrian Q adalah kosong.

2. isFullQueue (Q), mengirim apakah antrian Q adalah penuh bila kapasitas antrian Q didefinisikan.

3. isOverflowQueue (Q), mengirim apakah antrian Q telah mengalamioverflow.

4. isUnderflowQueue (Q), mengirim apakah antrian Q mengalamiunderflow.

Operasi-operasi pengaksesan tambahan yang dapat dilakukan adalah:
1. headQueue (Q), atau Front (Q, X) mengirim elemen terdepan tanpa menghapus.
2. tailQueue (Q), mengirim elemen tanpa menghapusnya[3]

## Guided 

### 1. Guided 

```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
### Output:
![output guided 1 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/cc47fb6a-fa68-43c1-9af5-d952da86ba04)
### Full Screen shoot:
![Full ss guided 1 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/3b741291-c34e-4d4b-a06b-39894fe00b4b)
### Interpretasi:
Output tersebut adalah cara visualisasi antrian di bank. Pada mulanya, ada dua orang dalam antrian, yakni "Andi" dan "Maya", yang terlihat di urutan pertama dan kedua dalam daftar antrian. Lalu, satu orang diambil dari antrian, menyisakan hanya "Maya" dalam daftar. Setelahnya, hanya nama "Maya" yang terlihat, menandakan bahwa hanya ada satu orang dalam antrian. Ketika seluruh orang telah diambil dari antrian, tidak ada nama yang terlihat, sehingga semua posisi dalam daftar antrian menjadi kosong. Jumlah antrian juga menunjukkan bahwa tidak ada orang dalam antrean. Dengan kata lain, output tersebut menggambarkan bagaimana antrian di bank mengalami perubahan seiring waktu dan memberikan informasi tentang jumlah antrian yang tersisa pada setiap tahap.

## Unguided 

### 1. [Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list.]

```C++
#include <iostream>

using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueueAntrian(string data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    
    if (isEmpty()) {
        front = newNode;
        back = newNode;
    } else {
        back->next = newNode;
        back = newNode;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

int countQueue() {
    int count = 0;
    Node* current = front;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    Node* current = front;
    int i = 1;
    while (current != nullptr) {
        cout << i << ". " << current->data << endl;
        current = current->next;
        i++;
    }
}

int main() {
    enqueueAntrian("Intan");
    enqueueAntrian("Renna");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
#### Output:
![output unguided 1 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c307794b-f1e9-47a3-ad1f-20b37c47812d)
#### Full Screenshot:
![Full ss unguided 1 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/381a26a5-1dba-457f-8fd9-ef17c1d24362)
### Interpretasi:
Output tersebut adalah antrian di sebuah tempat layanan, sebuah loket bank. Pada awalnya, ada dua orang dalam antrian, "Intan" dan "Renna". Jumlah antrian adalah 2. Setelah satu orang dilayani, hanya "Renna" yang tersisa dalam antrian, mengurangi jumlah antrian menjadi 1. Akhirnya, setelah semua orang dilayani, daftar antrian menjadi kosong, dengan jumlah antrian menjadi 0. Ini memberikan gambaran tentang perubahan dalam antrian dari waktu ke waktu, dan menginformasikan jumlah antrian yang tersisa pada setiap tahap.

### 2. [Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa]

```C++
#include <iostream>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
};

struct Node {
    Mahasiswa data;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueueAntrian(string nama, string nim) {
    Node* newNode = new Node;
    newNode->data.nama = nama;
    newNode->data.nim = nim;
    newNode->next = nullptr;
    
    if (isEmpty()) {
        front = newNode;
        back = newNode;
    } else {
        back->next = newNode;
        back = newNode;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

int countQueue() {
    int count = 0;
    Node* current = front;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

void viewQueue() {
    cout << "Data antrian mahasiswa: " << endl;
    Node* current = front;
    int i = 1;
    while (current != nullptr) {
        cout << i << ". Nama: " << current->data.nama << ", NIM: " << current->data.nim << endl;
        current = current->next;
        i++;
    }
}

int main() {
    enqueueAntrian("Intan", "2311110046");
    enqueueAntrian("Renna", "2311110047");
    enqueueAntrian("Hajra", "2311110048");
    enqueueAntrian("Raisa", "2311110049");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
### Output:
![output unguided 2 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/b89b8569-7616-46e6-8de5-a9e9d579581c)
### Full Screen Shoot:
![Full ss unguided 2 laprak 8](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/147a20bd-737d-430f-93d3-89e6c12bffcc)
### Interpretasi:
Output ini adalah simulasi antrian mahasiswa, dengan setiap mahasiswa memiliki nama dan NIM. Pada awalnya, terdapat empat mahasiswa dalam antrian: "Intan" (NIM: 2311110046), "Renna" (NIM: 2311110047), "Hajra" (NIM: 2311110048), dan "Raisa" (NIM: 2311110049). Kemudian, satu mahasiswa diambil dari antrian, mengurangi jumlah antrian menjadi 3. Pada tahap terakhir, semua mahasiswa telah diambil dari antrian sehingga daftar antrian menjadi kosong, dengan jumlah antrian menjadi 0. Ini memberikan gambaran singkat tentang perubahan dalam antrian mahasiswa dan jumlah antrian yang tersisa pada setiap tahap.

## Kesimpulan
Queue(antrian) adalah salah satu list linier dari struktur data yang beroperasi dengan cara First In First Out(FIFO) yaitu elemen pertama yang masuk merupakan elemen yang pertama keluar. Data-data di dalam antrian dapat bertipe integer, real, record dalam bentuk    sederhana atau terstruktur. Queue dilakukan dengan cara penyisipan di satu ujung, sedang penghapusan di ujung lain. Ujung penyisipan   biasa disebut rear/tail, sedang ujung penghapusan disebut front/head. Sebuah queue dalam program setidaknya harus mengandung tiga    variabel,yakni: head untuk penanda bagian depan antrian, tail unttuk penanda bagian belakang antrian,dan array data untuk menyimpan  data-data yang dimasukkan ke dalam queue tersebut. Pada  queue  ada  operasi –operasi  dasar, yaitu:  prosedur create untuk  membuat  queue baru yang kosong,fungsi IsEmpty untuk mengecek queue tersebut kosong atau tidak,fungsi IsFull untuk mengecek queue tersebut penuh atau tidak, prosedur EnQueue untuk memasukkan data kedalam queue, prosedur DeQueue untuk mengeluarkan sebuah elemen pada posisi head dari queue, fungsi clear untuk menghapus elemen queue, dan prosedur tampil untuk menampilkan elemen yang ada pada queue.

## Referensi
[1] Al Fatta, H. (2006). Dasar Pemrograman C++ Disertai dengan Pengenalan Pemrograman Berorientasi Objek. Penerbit Andi.

[2] Santoso, L. E. (2004). STANDARD TEMPLATE LIBRARY C++ UNTUK MENGAJARKAN STRUKTUR DATA. Jurnal FASILKOM Vol, 2(2).

[3] Adlaimi, N. (2019, March 30). STRUKTUR DATA MAJEMUK  (QUEUE). 