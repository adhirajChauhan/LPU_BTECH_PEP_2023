#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){

    //base case -> if array has one element/ no element
    if(size == 0 || size == 1){
        return true;
    }

    //checking first element and second element
    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int getSum(int arr[], int size){
    
}

int main(){
    int arr[5] = {2,4,12,8,10};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans){
        cout << "Array sorted " << endl;
    }
    else{
        cout << "Array not sorted " << endl;
    }

}