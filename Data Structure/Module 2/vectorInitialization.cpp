#include<bits/stdc++.h>
using namespace std;
int main() {
    
    // vector<dataType> v;
    vector<int> v;
    cout << v.size() << endl;

    // vector<int> v1(vector size);
    vector<int> v1(5);
    cout << v1.size() << endl;

    // vector<int> v2(vector size, value);
    vector<int> v2(5, -1);
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << endl;

    vector<int> v3(v2);
    for(int i = 0; i < v2.size(); i++) {
        cout << v3[i] << " ";
    }

    cout << endl;

    int arr[5] = {1, 2, 3, 5, 7};
    // vector<int> v5[starting Index, ending Index];
    vector<int> v5(arr, arr + 5);
    for(int i = 0; i < v2.size(); i++) {
        cout << v5[i] << " ";
    }

    cout << endl;

    vector<int> v6 = {2, 3, 5, 7, 9};
    for(int i = 0; i < v2.size(); i++) {
        cout << v6[i] << " ";
    }
    

    return 0;
}