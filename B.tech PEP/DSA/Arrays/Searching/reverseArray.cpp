#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int evenArr[6] = {4,2,8,3,10,-2};
    int oddArr[5] = {3,6,4,1,9};

    reverse(evenArr, 6);
    reverse(oddArr, 5);

    printArray(evenArr,6);
    printArray(oddArr,5);



}