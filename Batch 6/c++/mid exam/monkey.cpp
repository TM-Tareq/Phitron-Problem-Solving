#include<bits/stdc++.h>
using namespace std;
int main() {
    char str[100000];
    int freq[26];

    while(cin.getline(str, 100000)) {

        for(int i = 0; i < 26; i++) {
            freq[i] = 0;
        }

        for(int i = 0; i < str[i] != '\0';i++) {
            if(str[i] >= 'a' && str[i] < 'z') {
                freq[str[i] - 'a']++;
            }
        }

        // for printing
        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                cout << (char)(i + 'a');
                freq[i] --;
            }
        }

        cout << endl;
    }
    return 0;
}