#include <iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int back;
    int size;

    public:
    CircularQueue(){
        size = 10000;
        arr = new int[size];
        front = -1;
        back = -1;
    }

    bool enqueue(int value){
        //Queue is full
        if(front == 0 && back == size - 1) {
            cout << "Queue is full";
            return false;
        }

        //Queue is empty
        else if(front == -1){
            front = 0;
            back = 0;
            arr[back] = value;
        }

        else if(back == size -1 && front != 0){
            back = 0;
            arr[back] = value;
        }

        else{
            back++;
            arr[back] = value;
        }
    }

};

int main(){

}