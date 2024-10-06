#include <iostream>
#include <stack>

using namespace std;

class Queue {
    public:
        int *arr;
        int front,end;
        int size;

        Queue() {
            size = 1000002;
            arr = new int[size];
            front = 0;
            end = 0;

        }

        void push( int x){
            if(end - front < size){
                arr[end] = x;
                end++;
            }
            else
            cout<<"Queue is full"<<endl;
        }

        void pop(){
            
            if(end > front){
                front++;
            }
            else{
                cout<<"Queue is empty"<<endl;
            }
        }

        int peek(){
            if(end > front){
                return arr[front];
            }
            else{
                cout<<"Queue is empty"<<endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(front == end){
                return true;
            }
            else
            return false;
        }

};

int main() {
    Queue qw(5);
    qw.push(44);
    qw.push(55);
    qw.push(66);
    qw.push(77);
    qw.push(88);

    cout<<qw.peek()<<endl;

    qw.pop();

    cout<<qw.peek()<<endl;
}