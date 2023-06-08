#include <iostream>
using namespace std;
#include <string>

int main()
{
    // string myString = "abc";

    // string a = "100";
    // string b = "200";

    // cout << a + b << endl;

    // string dummyString = "Hello World";
    // cout << dummyString.length();
    // dummyString[1] = 'l';
    // cout << "Index : " << dummyString[1] << endl;
    // cout << dummyString;

    string fullName;
    cout << "Type your full name ";
    // cin >> fullName;
    getline(cin,fullName);
    cout << "Full name is : " << fullName;

}

