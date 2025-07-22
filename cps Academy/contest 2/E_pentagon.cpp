#include<bits/stdc++.h>
using namespace std;
int main() {
    char s1, s2, t1, t2, tmp;
    cin >> s1 >> s2 >> tmp >> t1 >> t2;

    int diff1 = abs(s1 - s2);
    if(diff1 > 2) diff1 = 5 - diff1;

    int diff2 = abs(t1 - t2);
    if(diff2 > 2) diff2 = 5 - diff2;

    if(diff1 == diff2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}