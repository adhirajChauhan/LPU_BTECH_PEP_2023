#include <iostream>
using namespace std;
#include <stack>

bool isValid(string s){
    stack<char> st;
    int n = s.size();
    bool ans = true;

    for(int i = 0; i< n; i++){
        //if i find opening bracket -> push it in the stack

        if(s[i] == '(' ||s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }

        else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;

            }

        }
        else if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;

            }

        }
        else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;

            }

        }
    }

    if(!st.empty()){
        return false;
    }
    return true;

}

int main(){
    string s = "[({(})]";

    if(isValid(s)){
        cout << "Valid" << endl;
        
    }
    else{
        cout << "Invalid" << endl;
    }

}

//Insert element at the bottom of the stack

//Reverse a stack using recursion (cant use any extra space)