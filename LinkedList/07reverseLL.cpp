#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList{
    Node* head; Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
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

    void reverseLL() {
        Node* previous = NULL; 
        Node* current = head; 
        Node* next = NULL;

        while(current != NULL) {
            next = current->next;
            current->next = previous;

            previous = current;
            current = next;
        }

        head = previous;
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
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();

    cout<<"\n";
    ll.reverseLL();
    ll.printLL();
    return 0;
}