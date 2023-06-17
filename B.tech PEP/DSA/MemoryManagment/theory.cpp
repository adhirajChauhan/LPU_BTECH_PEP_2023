/*Memory allocation is done by two methods

    Static memory allocation(SMA) - (Compile time allocation)

    Dynamic memory allocation(DMA) - (Run time allocation)


* Static memory allocation (SMA)

    #include <iostream>
    using namespace std;

    int main(){
        int x;
        char ch;
        int a[100];
    }

    - In SMA, size and location where variable will be stored is fixed during compile time

    - location where variables will be stored is saved, but the actual physical is NOT allocated at compile time, but at runtime.

    - SMA is slightly faster tha DMA

    - Allocation and deallocation that is done by compiler itself

* Dynamic memory allocation (DMA)

    - DMA allows you to define memory requirement during execution of program

    - it uses heap memory for the same

    - in DMA, "new" keyword is used to allocate memory, and "delete" keyword is used to deallocate memory

    - new keyeord return the address that has been allocated to variable on the heap memory (during runtime)

    - allocation and deallocation is done by us

    #include <iostream>
    using namespace std;

    int main(){
        int n;
        cin >> n;

        //allocate memory
        int *arr = new int [n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        //Free the space
        delete []arr;
    }
*/