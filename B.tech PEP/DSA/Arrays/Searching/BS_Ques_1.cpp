#include <iostream>
using namespace std;

int peakIndex(int arr[], int size){
    int s = 0;
    int e = size - 1;

    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s +(e-s)/2;
    }
    return s;
}

int main(){

    int arr[7] = {1,2,5,6,7,4,3};

    int idx = peakIndex(arr,6);
    cout << "Peak element is at index : " << idx;


}