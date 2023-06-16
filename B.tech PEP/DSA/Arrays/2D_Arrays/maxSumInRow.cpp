#include <iostream>
#include <climits>
using namespace std;

int rowSum(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is : " << maximum << endl;
    return row;
}

int main(){

    int arr[3][4] = {2,4,10,20,15,30,3,6,1,4,5,7};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    cout << rowSum(arr,3,4) << endl;

}