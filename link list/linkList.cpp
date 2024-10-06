#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this -> data = data;
            this -> next  = NULL;
        }

        ~Node(){
            int value = this -> data;

            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }

            cout<<" memory is free with data stored "<< value <<endl;
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

        void insertAtPosition(Node* &tail, Node* &head  ,int p, int d){

            if(p == 1){
                insertAtHead(head, d);
                return;
            }

            int cnt = 1;
            Node* temp = head;

            while (cnt < p - 1){
                temp = temp ->next;
                cnt++;

                Node* nodeToInsert = new Node(d);
                nodeToInsert -> next = temp ->next;
                temp -> next = nodeToInsert;
            }
        }


        void deleteNode(int p, Node* &head){

            if(p == 1){
                Node* temp;
                head = head -> next;
                 
                 delete temp;
            }

            else{

            }
        }

        void print (Node* &head){
            Node* temp = head;

            while(temp != NULL){
                cout<< temp -> data <<" ";
                temp = temp -> next;
            }

            cout << endl;
        }




int main (){
    Node* node1 = new Node(10);
    // cout << node1 -> data <<endl;
    // cout << node1 -> next <<endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtTail(tail, 20);
    print(head);

    insertAtPosition(head, 3, 13);
    print(head);

    insertAtPosition(head, 1, 0);
    print(head);

    return 0;
}