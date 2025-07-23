#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    string target = "EGYPT";

    size_t pos;

    while((pos = str.find(target)) != string::npos) {
        pos = str.find("EGYPT");

        // if(pos != 0) {
        //     str[pos] = ' ';
        //     i = i + target.size();
        // } else {
        //     i++;
        // }

        // pos = 0;


        str.replace(pos, target.length(), " ");
        
    }

    cout << str << endl;

    return 0;
}