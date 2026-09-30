#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

int main() {
    system("cls");
    string kata;
    cout << "Masukkan kata: "; cin >> kata;

    Node* top = nullptr;
    for (int i = 0; i < kata.length(); i++) {
        Node* newNode = new Node();
        newNode->data = kata[i];
        newNode->next = top;
        top = newNode;
    }

    string kataTerbalik = "";
    while (top != nullptr) {
        kataTerbalik += top->data;
        Node* hapus = top;
        top = top->next;
        delete hapus;
    }
    cout << "Hasil kata terbalik: " << kataTerbalik << endl;

    return 0;
}