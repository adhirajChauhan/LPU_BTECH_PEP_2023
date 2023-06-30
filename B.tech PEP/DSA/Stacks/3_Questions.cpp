//Print your name in reverse using stack
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> st;

    string str = "Adhiraj";

    for(int i = 0; i < str.length() ; i++){
        char ch = str[i];
        st.push(ch);
    }

    string ans = "";

    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << " Ans " << ans << endl;

    // st.push();
}

