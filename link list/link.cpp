#include <iostream>

using namespace std;


int counter = 0;

class Node {
    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = nullptr;
        counter++;
    }
};


void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &head, int d, int p){
    if(p <= counter){
        if(p == 1){
            insertAtHead(head, d);
            return;
        }

        int cnt = 1;
        Node* temp = head;

        while(cnt < p - 1){
            temp = temp -> next;
            cnt++;
        }

        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;


    }
    else
    cout<<"No. of nodes: "<<counter<<endl;
}

void deleteByPosition(Node* &head, int p){

    if (p == 1){
        Node* temp = head;
        head = head -> next;
        if (head == nullptr) {
            tail = nullptr;  // If the list is now empty, update the tail
        }
        delete temp;
    }
 
    else {
    //if (p == counter){
    //     Node* temp = head;
    //     int cnt = 1;
    //     while(cnt < counter - 1){
    //         temp = temp -> next;
    //         cnt++;
    //     }
    //     Node* nodeToDelete = temp -> next;
    //     temp -> next = nullptr;
    //     delete nodeToDelete;              // Free memory of the last node
    //     counter--;                        // Decrement the counter
    //     cout << "Last node deleted!" << endl;

        Node* prv = head;
        int cnt  = 1;
        while(cnt <  p - 1){
            prv = prv -> next;
            cnt++;
        }
        Node* current  =  prv -> next;
        prv -> next = current -> next;
        if (current -> next == nullptr) {
            tail = prv;  // If the last node is being deleted, update tail
        }
        delete current;
    }

    counter--;
}

int  finder(Node* &head, int d){
    int cnt = 1;
    Node* temp = head;
    while(temp -> data != d){
        temp = temp -> next;
        cnt++;

        if(cnt > counter){
            cout<<"Not found"<<endl;
            return -1;
        }
    }
    return cnt;
}

void deleteByValue(Node* &head, int d){
    deleteByPosition(head, finder(head, d));
    cout<<"Done!!"<<endl;
}

void print(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<< current -> data<<" ";
        current = current -> next;
    }
    cout<<endl;
    cout<<"No. of nodes: "<<counter<<endl;
}


int main (){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 30);
    print(head);
    insertAtTail(tail, 40);
    print(head);
    insertAtTail(tail, 50);
    print(head);

    insertAtPosition(head, 45, 5);
    print(head);

    deleteByPosition(head, 6);
    print(head);  

    deleteByValue(head, 30);
    print(head);

    return 0;
}

