#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i <n-1; i++){
            bool swapped = false;
        for(int j = 0;j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }

}

//Time complexity - worst case - O(n^2)
//best case - O(n) {1,2,3,4,5}
//space O(1)

int main(){
    int arr[6] = {1,7,6,10,9,14};

    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout <<arr[i] << " ";
    }

}