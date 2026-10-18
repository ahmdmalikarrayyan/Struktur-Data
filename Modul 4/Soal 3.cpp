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

int calculateSum() {
    int sum = 0;
    Node* temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int main() {
    int n, val;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertLast(val);
    }

    cout << calculateSum() << endl;

    return 0;
}