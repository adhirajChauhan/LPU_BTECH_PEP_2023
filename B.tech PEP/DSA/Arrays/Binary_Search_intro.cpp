#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            //goto right part
            start = mid + 1;
        }
        else{
            //goto left part
            end = mid -1;
        }

        mid = (start + end)/2;
    }

    return -1;
}

int main(){

    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {2,3,4,5,6};

    int evenIndex = binarySearch(even,6,12);
    cout << "Index of 12 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd,5,17);
    cout << "Index of 5 is : " << oddIndex << endl;
}