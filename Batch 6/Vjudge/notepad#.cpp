#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        char str[n];
        cin >> str;

        int cnt = 0;

        for(int i = 0; str[i] != '\0'; i++) {
            for(int j = i + 1; str[j] != '\0'; j++) {
                if(strcpy(&str[i + 1], &str[j]) != 0) {
                    cnt++;
                } else continue;
            }
            cnt++;
        }

        if(cnt >= n) cout << "NO" << endl; 
        else cout << "YES" << endl;
    }

    return 0;
}

// https://vjudge.net/contest/689449?fbclid=IwY2xjawIHHKhleHRuA2FlbQIxMAABHT1zOIFrDZ0KGSvrLvtSksCFw0PrWI8MGqPgOSxRqc_Rj3H-bSMvOwoh_w_aem_9nXXE2L3sKWXuedQzOCQ1w#problem/C