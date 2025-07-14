#include<bits/stdc++.h>
using namespace std;
int main() {
    char input[50];
    cin >> input;

    // Check if the input contains a decimal point
    bool isFloat = false;

    for(int i = 0; input[i] != '\0'; ++i) {
        if(input[i] == '.') {
            isFloat = true;
            break;
        }
    }

    if(isFloat) {
        float number = atof(input); // convert to float
        cout << "float " << number << endl;
    } else {
        int number = atoi(input);
        cout << "int " << number << endl;
    }

    return 0;
}