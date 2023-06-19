#include <iostream>
using namespace std;

void print(int arr[], int size){

    cout << "Size of array " << size << endl;
    for(int i =0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key){
    //Base case
    print(arr,size);
    if(size == 0) return false;

    if(arr[size-1] == key){
        return true;
    }

    else{
        bool remainingPart = linearSearch(arr, size-1, key);
        return remainingPart;

    }
}

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 33;

    bool ans = linearSearch(arr, size,key);

    if(ans){
        cout << "Key is present " << endl;
    }
    else{
        cout << "Key is not present " << endl;

    }

}