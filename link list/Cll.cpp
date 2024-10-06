#include <iostream>

using namespace std;

int counter = 1;

class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

void insert(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else {
        Node* curr = tail;

        do{
            if(curr -> data == element){
                curr = curr -> next;
            

                Node* temp = new Node(d);
                temp -> next = curr -> next;
                curr -> next =  temp;
                return;
            }
            curr = curr -> next;
        }while(curr != tail);
    }

    counter++;
}
void print (Node* &tail){
    Node* curr = tail;

    do{
        cout<< "node no: "<<counter<<endl;
        cout << curr -> data<< " ";
        curr = curr -> next;
    }while (curr -> next != tail);
}


int main(){
    Node* tail = NULL;
    insert(tail, 5, 3);
    print(tail);
    insert(tail, 3, 6);
    print(tail);
    insert(tail, 6, 9);
    print(tail);
    insert(tail, 9, 12);
    print(tail);
    insert(tail, 12, 15);
    print(tail);
    return 0;
}