#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1;j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[6] = {4,2,6,3,9,8};

    selectionSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout <<arr[i] << " ";
    }

}