#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judul;
    int tahun;
};

struct Node {
    Buku data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void insertLast(string judul, int tahun) {
    Node* newNode = new Node();
    newNode->data.judul = judul;
    newNode->data.tahun = tahun;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteLast() {
    if (head == NULL) {
        return;
    }

    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
}

void printBooks() {
    cout << "Daftar Buku:" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data.judul << " (" << temp->data.tahun << ")" << endl;
        temp = temp->next;
    }
}

int main() {
    insertLast("Buku A", 2020);
    insertLast("Buku B", 2021);
    insertLast("Buku C", 2022);

    deleteLast();

    printBooks();

    return 0;
}