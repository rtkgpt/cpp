#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void popFront() {
        if(head == NULL) {
            cout<<"List Empty.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.printLL();

    cout<<"\n";
    ll.popFront();
    ll.printLL();

    return 0;
}