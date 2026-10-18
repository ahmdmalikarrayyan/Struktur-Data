#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void insertLast(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAfter(int target, int valBaru) {
    Node* temp = head;

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp != NULL) {
        Node* newNode = new Node();
        newNode->data = valBaru;
        newNode->next = temp->next;
        temp->next = newNode;

        if (temp == tail) {
            tail = newNode;
        }
    } else {
        cout << "Data " << target << " tidak ditemukan dalam list." << endl;
    }
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, val, target, valBaru;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertLast(val);
    }

    cin >> target;
    cin >> valBaru;

    insertAfter(target, valBaru);

    printList();

    return 0;
}