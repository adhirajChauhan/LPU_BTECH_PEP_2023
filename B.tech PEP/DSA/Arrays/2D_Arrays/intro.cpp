#include <iostream>
using namespace std;


int main(){
    // int x[5]; //1D array

    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr [3][4] = 
    // {
    // {1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12}
    // };

    //taking row wise input
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 4; col++){
    //         cin >> arr[row][col];
    //     }
    // }

    //taking col wise input
    for(int col = 0; col < 4; col++){
        for(int row = 0; row < 3; row++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}