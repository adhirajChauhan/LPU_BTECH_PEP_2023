#include <iostream>
using namespace std;

int main()
{
    //-------------------------------if-else
    // if(condition){
    //     //if condition is true, this will get executed
    // }
    // else{
    //     //If condition is false, this will get executed
    // }

    // int num = 9;

    //var = condition ? conditionTrue : conditionFalse;
    // string output = (num < 10) ? "Number is less than 10" : "Number is greater than 10"; 
    // cout << output;
    // if(num < 10){
    //     cout << "Number is less than 10";
    // }
    // else if(num == 10){
    //     cout << "Number is 10";
    
    // }else{
    //     cout << "Number is greater than 10";
    // }

    //-------------------------------switch case

    // switch(num)
    // {
    //     case 8:
    //         cout << "Number is 8" << endl;
    //         break;
    //     case 9:
    //         cout << "Number is 9" << endl;
    //         break;
    //     case 10:
    //         cout << "Number is 10" << endl;
    //         break;
    //     default:
    //         cout << "Some other number" << endl;
    //         break;
    // }


    //---------------------------------------------------LOOPS
    //----------------For Loop
    // for(init;termination;inc/dec){
    //     body
    // }

    // for(i = 0; i <= 10; i++){

    //     cout << i << endl;
    // }

    // for(;;){
    //     cout << "Hello"; //infinite
    // }

    //----------------while Loop
    int i = 0;
    while(i <= 10){
        cout << i << endl;
        i+= 2;
    }

}