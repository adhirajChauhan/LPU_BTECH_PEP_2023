#include <iostream>
using namespace std;

class Stack{
    int* arr;
    int top;
    int size;

    public:
    Stack(){
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top == size -1){
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop(){
        if(top == -1){
            cout << "No elements to pop" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout << "No elements in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){

        return top == -1;
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.Top() << endl;
    st.pop();
    cout << st.Top()<< endl;
}