#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){
    int arr[7] = {1,2,3,3,3,3,5};

    cout << "First occurance of 3 is : " << firstOcc(arr,7,3) <<endl;
    cout << "Last occurance of 3 is : " << lastOcc(arr,7,3) <<endl;

    //total occurance


}