#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    //counting how many elements are less than pivot
    int count = 0;
    for(int i = s+1;i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //after count, we got to know about the right place of pivot, now we can create a pivotIndex at that position
    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    //right and left part in which all the elements should be less and greater respectively

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        swap(arr[i++], arr[j++]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base
    if(s >= e) return;

    int p = partition(arr, s , e);

    quickSort(arr, s, p-1);
    quickSort(arr, p + 1, e);

}

int main(){
    int arr[5] = {2,4,6,1,9};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    } cout << endl;

}