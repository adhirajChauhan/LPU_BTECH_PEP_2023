#include <iostream>
using namespace std;

//returnType functionName(dataType parameterName){

//}

//create/declare
// void myFunc(){
//     cout << "This is my Function" << endl;
// }

// void myFunc2(){
//     myFunc();
// }

int power(int base, int power){
    int ans = 1;
    for(int i = 1; i <= power; i++){
        ans = ans * base;
    }
    return ans;
}

void test(int n){
    n++;
    cout << "test method n is : " << n << endl;
}

int main(){
    int n;
    cin >> n;
    test(n);
    cout << "main method n is : " << n << endl;




    
    // int a , b;
    // cin >> a >> b;
    // cout << "Ans is : " << power(a,b);

    // int ans = 1;

    // for(int i = 1; i <= b; i++){
    //     ans = ans * a;
    // }

    // cout << "ans is : " << ans << endl;

    // int c , d;
    // cin >> c >> d;

    // ans = 1;

    // for(int i = 1; i <= d; i++){
    //     ans = ans * c;
    // }

    // cout << "ans is : " << ans << endl;

    // int e , f;
    // cin >> e >> f;

    // ans = 1;

    // for(int i = 1; i <= f; i++){
    //     ans = ans * e;
    // }

    // cout << "ans is : " << ans << endl;


    //-------------------------Pass by value

}


//Create a function to find if the number entered by the user is even or odd
