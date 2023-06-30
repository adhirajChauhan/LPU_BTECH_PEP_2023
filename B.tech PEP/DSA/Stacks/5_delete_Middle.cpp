#include <iostream>
using namespace std;
#include <stack>

// void deleteMiddle(stack<int> &s, int count, int size){
//     //Base case
//     if(count == size/2){
//         s.pop();
//         return;
//     }

//     int num = s.top();
//     s.pop();

//     //Recursive call
//     deleteMiddle(s,count+1, size);

//     s.push(num);
// }

void insertAtBottom(stack<int> &st,int elem){
    if(st.empty()){
    st.push(elem);
    return;
}
    int num=st.top();
    st.pop();
    insertAtBottom(st,elem);
    st.push(num);
}

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);


    int size = s.size();
    int element = 8;
    insertAtBottom(s, element);
    // deleteMiddle(s,0,size);

    cout << "After deletion " << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}