#include<bits/stdc++.h>
using namespace std;

int main() {
    char *str = new char[100000];

    while(cin.getline(str, 100000)) {

        int len = strlen(str);

        int idx = 0;

        for(int i =0; i < len; i++) {
            if(str[i] != ' ') str[idx++] = str[i];
        }
        str[idx] = '\0';
        len = idx;

        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                if(str[i] > str[j]) swap(str[i], str[j]);
            }
        }

        for(int i = 0; i < len; i++) {
            cout << str[i];
        }
        cout << endl;
    }

    delete[] str;

    return 0;
}