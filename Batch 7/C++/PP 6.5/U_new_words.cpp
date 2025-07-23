#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    int cnt = 0;

    int freq[26] = {0};

    for(char c : str) {
        c = tolower(c);
        freq[c - 'a']++;
    }

    int count = min({freq['e' - 'a'], freq['g' - 'a'], freq['y' - 'a'], freq['p' - 'a'], freq['t' - 'a'], });

    cout << count << endl;

    return 0;
}



// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U