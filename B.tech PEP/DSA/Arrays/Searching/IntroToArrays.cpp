#include <iostream>
using namespace std;


int main(){

    int x = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // cout << arr[2] << endl;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }

    // cout << sizeof(arr)/sizeof(int) << endl;

    // for(int i : arr){
    //     cout << i << " ";
    // }
}