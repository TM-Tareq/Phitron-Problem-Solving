#include<bits/stdc++.h>
using namespace std;
int main() {

    // static variable
    int x = 10;

    // dynamic variable
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    return 0;
}

// for creating a dynamic variable we use 'new' keyword. This keyword can create a memory store in 'heap memory'. So this keyword can access heap memory

// format: new dataType

// specially using new keyword we should take an address by returning. That is heap memory location/address that store the variable
// so, dataType *p = new datatype