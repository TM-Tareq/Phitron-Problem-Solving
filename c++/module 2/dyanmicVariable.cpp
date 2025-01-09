#include<bits/stdc++.h>
using namespace std;

int *p; // for checking static variable
int *q; // for checking dynamic variable

void fun() {

    int x = 10; // static variable
    int *y = new int; // dynamic variable
    *y = 100;
    q = y;
    p = &x;
    cout << "Fun for static variable-> " << *p << endl;
    cout << "Fun for dynamic variable -> " << *q << endl;
    return;
}
int main() {

    fun();
    cout << "Main for static variable -> " << *p << endl;
    cout << "Main for dynamic variable -> " << *q << endl;
    return 0;
}