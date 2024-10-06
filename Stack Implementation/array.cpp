#include <iostream>
#include <stack>

using namespace std;

class Stack{
    public:
        int top;
        int *arr;
        int size;

    Stack (int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x){
        if(size - top > 1){
            top++;
            arr[top] = x;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if (top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if (top < 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main (){
    Stack s(5);
    for(int i = 0; i< 7; i++){
        s.push(i);
    }

    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;

}