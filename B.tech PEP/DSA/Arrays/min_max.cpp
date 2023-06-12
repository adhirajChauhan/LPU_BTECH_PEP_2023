#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int size){
    int max = INT_MIN;
    for(int i =0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

//getMin

int main(){
    int size;
    cin >> size;

    int num[100];

    //taking input of values in array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Max element is " << getMax(num,size);
}