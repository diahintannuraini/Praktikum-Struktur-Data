# <h1 align="center">Laporan Praktikum Modul Priority Queue and Heaps</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Priority Queue:
Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai
prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil
sebelum elemen dengan nilai prioritas lebih rendah. Dalam priority queue, setiap elemen memiliki nilai prioritas yang terkait dengannya.
Ketika menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika menambahkan elemen dengan nilai prioritas tinggi ke priority queue, elemen tersebut mungkin dimasukkan di dekat bagian depan antrian, sementara elemen dengan nilai prioritas rendah mungkin dimasukkan di dekat bagian belakang.  Priority queue juga dapat memiliki
aturan-aturan yang berbeda untuk menempatkan elemenelemennya, dapat memprioritaskan yang maksimum atau minimum. Relaxation process juga akan berbeda pada tiap kasus yang ingin dipecahkan, serta akan membutuhkan inisialisasi jarak yang berbeda pula.[1]
Container priority_queue dibuat berdasarkan vector dan tidak memiliki iterator. Container ini hanya mengijinkan penghapusan elemen berprioritas paling tinggi. Harus sudah didefinisikan operator < untuk tipe data elemen. Jika x < y memberikan true, ini berarti bahwa prioritas elemen y lebih tinggi daripada elemen x. Member function yang dimiliki serupa dengan yang dimiliki oleh stack[2]

Heap dalam struktur data adalah struktur berbasis pohon biner (binary tree) dengan aturan tertentu. Heap memiliki beberapa ciri khas yang membedakannya dari pohon binary biasa, yaitu:
Complete Binary Tree: Heap harus berbentuk complete binary tree, di mana setiap levelnya terisi penuh kecuali level paling bawah. Level paling bawah pun harus terisi dari kiri ke kanan. Order Property: Heap bisa dibagi menjadi dua jenis, yaitu max-heap dan
min-heap. 
Max-heap: pada setiap node, nilai orang tua (parent) harus lebih besar atau sama dengan nilai anaknya (children).
Min-heap: pada setiap node, nilai orang tua harus lebih kecil atau sama dengan nilai anaknya.
Dengan aturan ini, nilai terbesar (max-heap) atau terkecil (min-heap) akan selalu
berada di node paling atas (root). Heap sering digunakan untuk algoritma sorting
seperti heap sort dan juga untuk priority queue.[3]



## Guided 

### 1. Guided 

```C++
#include <iostream>
#include <algorithm>

using namespace std;

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1) ;
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i =parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Node with maximum priority : " << extractMax() << "\n";

    cout << "Priority Queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    changePriority(2, 49);
    cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    remove(3);
    cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    return 0;
}
```
### Output:
![output guided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/19f6733b-8dd4-4af1-ab26-35c24fe39164)
### Full Screen shoot:
![Full ss guided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/bdeb3ad8-ea7c-4832-8744-734af41b6f41)
### Interpretasi:
Program ini mengimplementasikan priority queue menggunakan heap maksimal. Pertama, elemen-elemen dimasukkan ke dalam heap dalam urutan: 45, 20, 14, 12, 31, 7, 11, 13, dan 7, membentuk heap: 45, 31, 14, 13, 20, 7, 11, 12, 7. Kemudian, elemen maksimum 45 diekstraksi, menyisakan heap: 31, 20, 14, 13, 7, 7, 11, 12. Selanjutnya, prioritas elemen pada indeks ke-2 diubah dari 14 menjadi 49, menghasilkan heap: 49, 20, 31, 13, 7, 7, 11, 12. Terakhir, elemen pada indeks ke-3 (nilai 13) dihapus, menyisakan heap: 49, 20, 31, 12, 7, 7, 11. Program ini menunjukkan cara memasukkan, mengekstraksi, mengubah prioritas, dan menghapus elemen dalam priority queue menggunakan heap maksimal.

## Unguided 

### 1. [Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.]

```C++
#include <iostream>
#include <vector>

using namespace std;

vector<int> H;
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    if (heapSize < H.size()) {
        H[heapSize] = p;
    } else {
        H.push_back(p);
    }
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

void buildHeap(const vector<int>& input) {
    H = input;
    heapSize = input.size() - 1;
    for (int i = (heapSize / 2); i >= 0; --i) {
        shiftDown(i);
    }
}

int main() {
    int n, value;
    cout << "Enter the number of elements to insert into the heap: ";
    cin >> n;

    vector<int> input(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    buildHeap(input);

    cout << "Priority Queue after building the heap: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Node with maximum priority: " << extractMax() << "\n";

    cout << "Priority Queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    int index, newPriority;
    cout << "Enter the index and new priority to change: ";
    cin >> index >> newPriority;
    changePriority(index, newPriority);

    cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Enter the index to remove: ";
    cin >> index;
    remove(index);

    cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    return 0;
}
```
#### Output:
![output unguided 1 (4)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/ab091b6b-714c-4624-af7f-cd2b7faf9745)
#### Full Screenshot:
![full ss unguided 1 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/a93df50d-f638-46fa-b075-c27516a1f12c)
### Interpretasi:
Program ini mengimplementasikan heap maksimal untuk priority queue dan memanipulasinya berdasarkan input pengguna. Pertama, pengguna diminta memasukkan jumlah elemen yang akan dimasukkan ke dalam heap, dalam hal ini sebanyak 4 elemen: 12, 13, 14, dan 15. Program kemudian membangun heap maksimal dari elemen-elemen tersebut, menghasilkan heap dengan urutan: 15, 13, 14, 12, di mana elemen terbesar 15 berada di root. Setelah itu, program mengekstraksi elemen dengan prioritas tertinggi, yaitu 15, dan mengatur ulang heap untuk mempertahankan struktur heap maksimal, sehingga menjadi: 14, 13, 12. Program ini menunjukkan bagaimana elemen-elemen dimasukkan, heap dibangun, dan elemen maksimum diekstraksi sambil tetap menjaga properti heap maksimal.

## Kesimpulan

## Referensi
[1] Naufal, M. F. (2021). Penerapan Algoritme Greedy dalam Menghitung Bandwith pada Jaringan Telepon.

[2] Santoso, L. E. (2004). STANDARD TEMPLATE LIBRARY C++ UNTUK MENGAJARKAN STRUKTUR DATA. Jurnal FASILKOM Vol, 2(2).

[3] AProgramiz. (n.d.). Heap Data Structure.
https://www.programiz.com/dsa/heap-data-structure. Diakses tanggal 13 Mei 2024.
