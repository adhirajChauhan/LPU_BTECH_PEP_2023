#include <iostream>
using namespace std;

int power(int n){
    
    //Base case
    if(n == 0) return 1;

    //recursive relation
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

int factorial(int n){
    //base case
    if(n==0) return 1;

    int smallProblem = factorial(n-1);
    int bigProblem = n * smallProblem;

    return bigProblem;

    
    // return  n * factorial(n-1);

}

int main(){

}