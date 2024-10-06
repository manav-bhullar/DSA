#include <iostream>
#include <string>

using namespace std;

class Stack{
    public:
    char* arr;
    int size;
    int top;

    Stack(int size){
        this -> size = size;
        arr = new char[size];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull(){
        if (top == size - 1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(char c){
        if(! isFull()){
            top++;
            arr[top] = c;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    char peak(){
        if(top >= 0 && top < size){
            return arr[top];
        }

        return '\0';
    }
    
    void pop(){
        if (!isEmpty()) {
            top--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void display(){
        for (int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    string in = "DataStructure";
    int l = in.length();
    Stack s(l);

    for (int i = 0; i < l; i++){
        s.push(in[i]);
    }

    s.display();
}