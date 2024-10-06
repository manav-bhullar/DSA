#include <iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int qfront;
    int rear;
    int size;

    Queue(int size){
        this -> size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty(){
        if (qfront == rear){
            return true;
        }

        return false;
    }
    bool isFull(){
        if (rear == size){
            return true;
        }

        return false;
    }

    void enqueue(int data){
        if(!isFull()){
            arr[rear] = data;
            rear++;
        }
        else{
            cout<<"full"<<endl;
        }
    }

    int dequeue(){
        if(isEmpty()){
            return -1;
        }
        else{
            int removedElement = arr[qfront];
            arr[qfront] = -1; // Assign -1 or some other value to indicate that it's been dequeued
            qfront++;
            return removedElement;
        }
    }

     int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[qfront];
    }


};

int main() {
    Queue q(5);  // Create a queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Try adding one more element
    q.enqueue(60);  // This should print "Queue is full"

    cout << "Front element is: " << q.front() << endl;

    // Dequeue two elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    // Show the front element after dequeuing
    cout << "Front element is: " << q.front() << endl;

    return 0;
}