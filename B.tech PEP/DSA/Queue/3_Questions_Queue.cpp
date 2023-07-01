#include <iostream>
using namespace std;
#include <queue>
#include <stack>
#include <unordered_map>


queue<int> rev(queue<int> q){

    stack<int> st;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }

    return q;

    // T -> O()
}

string firstNonRepeating(string A){
    unordered_map<char,int> count;
    queue<int> q;
    string ans ="";
    for(int i = 0; i< A.length(); i++){
        char ch = A[i];

        //increase count
        count[ch]++;

        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                //repeating character
                q.pop();
            }
            else{
                //non repeating 
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){

            ans.push_back('#');
        }
    }
}