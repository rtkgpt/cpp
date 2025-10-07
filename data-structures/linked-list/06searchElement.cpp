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
    Node* head; Node* tail;

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

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    search(int key) {
        Node* temp = head;
        int idx = 0;

        while(head != 0) {
            if(temp->data == key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main() {

    LinkedList ll;
    ll.push_back(1);
    ll.push_front(2);
    ll.push_back(3);

    ll.printLL();
    
    cout<<"\n"<<ll.search(2)<<"\n";

    return 0;
}
