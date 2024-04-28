# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori








## Guided 

###  1. Linked List Non Circular 

```C++
#include <iostream> 
using namespace std; 

// Deklarasi Struct Node 
struct Node { 
    int data; 
    Node *next; 
}; 

Node *head; 
Node *tail; 

// Inisialisasi Node 
void init() { 
    head = NULL; 
    tail = NULL; 
} 

// Pengecekan apakah Linked List kosong
bool isEmpty() { 
    return head == NULL; 
} 

// Tambah Node di Depan 
void insertDepan(int nilai) { 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 

    if (isEmpty() == true) { 
        head = tail = baru; 
    } else { 
        baru->next = head; 
        head = baru; 
    } 
} 

// Tambah Node di Belakang 
void insertBelakang(int nilai) { 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 

    if (isEmpty() == true) { 
        head = tail = baru; 
    } else { 
        tail->next = baru; 
        tail = baru; 
    } 
} 

// Hitung Jumlah Node 
int hitungList() { 
    Node *hitung = head; 
    int jumlah = 0; 

    while (hitung != NULL) { 
        jumlah++; 
        hitung = hitung->next; 
    } 

    return jumlah; 
} 

// Tambah Node di Tengah 
void insertTengah(int data, int posisi) { 
    if (posisi < 1 || posisi > hitungList()) { 
        cout << "Posisi diluar jangkauan" << endl; 
    } else if (posisi == 1) { 
        cout << "Posisi bukan posisi tengah" << endl; 
    } else { 
        Node *baru, *bantu; 
        baru = new Node(); 
        baru->data = data; 

        bantu = head; 
        int nomor = 1; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Node di Depan 
void hapusDepan() { 
    Node *hapus; 
    if (isEmpty() == false) { 
        hapus = head; 
        head = head->next; 
        delete hapus; 
    } else { 
        cout << "List kosong!" << endl; 
    } 
} 

// Hapus Node di Belakang 
void hapusBelakang() { 
    Node *hapus; 
    Node *bantu; 
    if (isEmpty() == false) { 
        if (head != tail) { 
            hapus = tail; 
            bantu = head; 
            while (bantu->next != tail) { 
                bantu = bantu->next; 
            } 
            tail = bantu; 
            tail->next = NULL; 
        } else { 
            hapus = head; 
            head = tail = NULL; 
        } 
        delete hapus; 
    } else { 
        cout << "List kosong!" << endl; 
    } 
} 

// Hapus Node di Tengah 
void hapusTengah(int posisi) { 
    Node *bantu, *hapus, *sebelum; 
    if (posisi < 1 || posisi > hitungList()) { 
        cout << "Posisi di luar jangkauan" << endl; 
    } else if (posisi == 1) { 
        cout << "Posisi bukan posisi tengah" << endl; 
    } else { 
        int nomor = 1; 
        bantu = head; 
        while (nomor <= posisi) { 
            if (nomor == posisi - 1) { 
                sebelum = bantu; 
            } 
            if (nomor == posisi) { 
                hapus = bantu; 
            } 
            bantu = bantu->next; 
            nomor++; 
        } 
        sebelum->next = bantu; 
        delete hapus; 
    } 
} 

// Ubah Data Node di Depan 
void ubahDepan(int data) { 
    if (isEmpty() == false) { 
        head->data = data; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Ubah Data Node di Tengah 
void ubahTengah(int data, int posisi) { 
    Node *bantu; 
    if (isEmpty() == false) { 
        if (posisi < 1 || posisi > hitungList()) { 
            cout << "Posisi di luar jangkauan" << endl; 
        } else if (posisi == 1) { 
            cout << "Posisi bukan posisi tengah" << endl; 
        } else { 
            bantu = head; 
            int nomor = 1; 
            while (nomor < posisi) { 
                bantu = bantu->next; 
                nomor++; 
            } 
            bantu->data = data; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Ubah Data Node di Belakang 
void ubahBelakang(int data) { 
    if (isEmpty() == false) { 
        tail->data = data; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Seluruh Node 
void clearList() { 
    Node *bantu, *hapus; 
    bantu = head; 
    while (bantu != NULL) { 
        hapus = bantu; 
        bantu = bantu->next; 
        delete hapus; 
    } 
    head = tail = NULL; 
    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan Isi Linked List 
void tampil() { 
    Node *bantu; 
    bantu = head; 
    if (isEmpty() == false) { 
        while (bantu != NULL) { 
            cout << bantu->data << ends; 
            bantu = bantu->next; 
        } 
        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan(3); 
    tampil(); 
    insertBelakang(5); 
    tampil(); 
    insertDepan(2); 
    tampil(); 
    insertDepan(1); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    insertTengah(7, 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    ubahDepan(1); 
    tampil(); 
    ubahBelakang(8); 
    tampil(); 
    ubahTengah(11, 2); 
    tampil(); 

    return 0; 
}
```
### Output:
![Guided 1 Linkedlist non circular](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/f3ad2202-63b1-4889-95db-4f047db90d97)

### Interpretasi:



#### 2.Linked List Circular 
```C++
#include <iostream> 
using namespace std; 
/// PROGRAM SINGLE LINKED LIST CIRCULAR
// Deklarasi Struct Node 
struct Node { 
    string data; 
    Node *next; 
}; 

Node *head, *tail, *baru, *bantu, *hapus; 

void init() { 
    head = NULL; 
    tail = head; 
} 

// Pengecekan apakah Linked List kosong 
int isEmpty() { 
    return head == NULL; 
} 

// Buat Node Baru 
void buatNode(string data) { 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
} 

// Hitung Jumlah Node 
int hitungList() { 
    bantu = head; 
    int jumlah = 0; 
    while (bantu != NULL) { 
        jumlah++; 
        bantu = bantu->next; 
    } 
    return jumlah; 
} 

// Tambah Node di Depan 
void insertDepan(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
} 

// Tambah Node di Belakang 
void insertBelakang(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        tail->next = baru; 
        baru->next = head; 
    } 
} 

// Tambah Node di Tengah 
void insertTengah(string data, int posisi) { 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        baru->data = data; 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Node di Depan 
void hapusDepan() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            head = head->next; 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Belakang 
void hapusBelakang() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (hapus->next != head) { 
                hapus = hapus->next; 
            } 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Tengah 
void hapusTengah(int posisi) { 
    if (isEmpty() == 0) { 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        hapus = bantu->next; 
        bantu->next = hapus->next; 
        delete hapus; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Seluruh Node 
void clearList() { 
    if (head != NULL) { 
        hapus = head->next; 
        while (hapus != head) { 
            bantu = hapus->next; 
            delete hapus; 
            hapus = bantu; 
        } 
        delete head; 
        head = NULL; 
    } 
    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan Isi Linked List 
void tampil() { 
    if (isEmpty() == 0) { 
        tail = head; 
        do { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 
        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan("Ayam"); 
    tampil(); 
    insertDepan("Bebek"); 
    tampil(); 
    insertBelakang("Cicak"); 
    tampil(); 
    insertBelakang("Domba"); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    insertTengah("Sapi", 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    return 0; 
}
```
### Output:
![Guided 2 Linkedlist Circular](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/efc8c328-4684-47b7-8ef4-e34eb3e41fb6)

### Interpretasi:


## Unguided 

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan  NIM mahasiswa, berikut contoh tampilan output dari nomor 1: 

```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```
### Output:


### Interpretasi:


### 2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu  tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau tengah) 
```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}

```
### Output:


### Interpretasi:

### 3. Lakukan perintah berikut: 

a) Tambahkan data berikut diantara Farrel dan Denis: 
Wati 2330004 

b) Hapus data Denis 

c) Tambahkan data berikut di awal: 
Owi 2330000 

d) Tambahkan data berikut di akhir: 
David 23300100 

e) Ubah data Udin menjadi data berikut: 
Idin 23300045 

f) Ubah data terkahir menjadi berikut: 
Lucy 23300101 

g) Hapus data awal 

h) Ubah data awal menjadi berikut: 
Bagas 2330002 

i) Hapus data akhir 

j) Tampilkan seluruh data


```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```
#### Output:
a.) ![Output Unguided 3 (a)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/292f6ded-8022-4fad-b170-5233d15951a7)

### Interpretasi:

b.) ![Output Unguided 3 (b)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/369ccb6b-1e37-46ef-8bcb-69715d5e6157)

### Interpretasi:

c.) ![Output Unguided 3 (c)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/0d3cfa73-443a-48ad-b203-1d099372c853)

### Interpretasi:

d.) ![Output Unguided 3 (d)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/1e29a737-2ea8-4fa1-88cb-89464077a08e)

### Interpretasi:

e.) ![Output Unguided 3 (e)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c7be764d-7166-47f2-ba19-4a93eb277651)

### Interpretasi:

f.) ![Output Unguided 3 (f)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/84a0b4df-dbe1-4da1-9c6f-2ec355e7fc50)

### Interpretasi:

g.) ![Output Unguided 3 (g)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/8ed2c594-9f8e-4ef4-9d29-891e0ee370f6)

### Interpretasi:

h.) ![Output Unguided 3 (h)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/e9d2b881-2220-4e3e-92bc-ef7deb8d94ff)

### Interpretasi:

i.) ![Output Unguided 3 (i)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/56df75b0-de53-4dee-916d-ae46380fd789)

### Interpretasi:

j.) ![Output Unguided 3 (j)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/123e5fd5-c858-408e-8624-a3ebb2390ee2)

### Interpretasi:





## Kesimpulan


## Referensi
