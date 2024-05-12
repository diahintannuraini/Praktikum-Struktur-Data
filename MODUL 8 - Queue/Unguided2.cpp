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
