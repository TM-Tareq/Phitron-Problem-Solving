#include<bits/stdc++.h>
using namespace std;
int main() {
    
    string s = "Hello";

    // type - 1
    string s1("Hello");
    cout << s1 << endl;
    // type - 2 
    string s2("Hello world", 2);
    cout << s2 << endl;
    // type - 3 
    string s3 = "Hello world";
    string t(s3, 2);
    cout << t << endl;
    // type - 4 
    string ss(5, 'A');
    cout << ss << endl;

    return 0;
}