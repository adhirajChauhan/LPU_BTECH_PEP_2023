#include <iostream>
using namespace std;

int main(){
    int var = 10;
    cout << &var << endl; //address of var in memory

    //Pointer is variable whose value is adress of another variable

    //type *varName
    int *ptr;
    ptr = &var;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl; //derefrencing the pointer
}