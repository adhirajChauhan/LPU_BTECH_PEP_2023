#include <iostream>
using namespace std;

class A{

    public:
    int x;

    A(){
      cout << "Constructor" << endl;  
    }

    A(int val){
        x = val;
        cout << "Val is : " << x << endl;
    }

    A(A &obj){
        x = obj.x;
    }
};

int main(){
    A a1;
    A a2;

    A a3(4);

    A a4(a3);
    cout << a4.x << endl;
}