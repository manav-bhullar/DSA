#include <iostream>

using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d){
        if(size - top > 1){
            top++;
            arr[top] = d;
        }

        else{
            cout<<"stack overflow"<<endl;
        }

    }
    bool isEmpty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void pop(){
        if (! isEmpty() ){
            top--;
        }
        else{
            cout<<"is empty"<<endl;
        }

    }

    int peek(){
        if (top >= 0 && top < size){
            return arr[top];
        }

        return -1;
    }

    bool isFull(){
        if( top == size - 1){
            return true;
        }
        else{
            return false;
        }
    }

    void display(){
        for (int i = top; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main() {
    Stack st(5);

    st.push(12);
    st.push(14);
    st.push(16);
    st.push(19);
    cout<<st.peek()<<endl;

    st.pop();
     st.push(49);
     st.push(23);
     cout<<st.isFull()<<endl;
     st.display();
}