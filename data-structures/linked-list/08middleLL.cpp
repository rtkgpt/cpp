#include <iostream>
using namespace std;

class Node{
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

    void pushBack(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void middleElt() {
        Node* temp = head; int idx = 0;
        while(temp != NULL) {
            idx++;
            temp = temp->next;
        }

        Node* middle = head; int pos = 0;
        while(pos != (idx/2)) {
            middle = middle->next;
            pos++;
        }

        cout<<middle->data;
    }

    void printLL() {
        // this functiion prints Linked List

        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->data;
            temp = temp->next;
        }
    }
};
int main() {

    LinkedList l1;
    l1.pushBack(1);
    l1.pushBack(2);
    l1.pushBack(3);
    l1.printLL();
    
    cout<<"\n";
    l1.middleElt();


    cout<<"\n";
    LinkedList l2;
    l2.pushBack(1);
    l2.pushBack(2);
    l2.pushBack(3);
    l2.pushBack(5);
    l2.pushBack(6);
    l2.pushBack(7);
    l2.pushBack(8);
    l2.printLL();

    cout<<"\n";
    l2.middleElt();

    return 0;
} 
