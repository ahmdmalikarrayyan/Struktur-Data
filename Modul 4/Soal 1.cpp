#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

bool isEmpty() {
    return head == NULL;
}

void insertLast(string nama) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->next = NULL;

    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteFirst() {
    if (isEmpty()) {
        cout << "Antrean kosong!" << endl;
        return;
    }

    Node* temp = head;
    cout << "Melayani: " << temp->nama << endl;
    head = head->next;
    
    if (head == NULL) {
        tail = NULL;
    }
    
    delete temp;
}

void printQueue() {
    if (isEmpty()) {
        cout << "Antrean: (Kosong)" << endl;
        return;
    }

    cout << "Antrean: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->nama;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n--- MENU ANTREAN BANK ---" << endl;
        cout << "1. Tambah Nasabah" << endl;
        cout << "2. Layani Nasabah" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan nama nasabah: ";
            cin >> nama;
            insertLast(nama);
            printQueue();
        } else if (pilihan == 2) {
            deleteFirst();
            printQueue();
        } else if (pilihan == 3) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 3);

    return 0;
}