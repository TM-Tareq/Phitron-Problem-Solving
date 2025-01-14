#include<bits/stdc++.h>
using namespace std;

int main() {
    char line[100005];
    while (cin.getline(line, 100000)) {  // Read input until EOF
        int n = 0;
        while (line[n] != '\0') n++;  // Manually calculate length

        bool isEmpty = true;
        for (int i = 0; i < n; i++) {
            if (line[i] != ' ' && line[i] != '\n') {
                isEmpty = false;
                break;
            }
        }
        if (isEmpty) continue;

        char word[100005];
        char output[100005];
        int wordIdx = 0, outputIdx = 0;
        for (int i = 0; i <= n; i++) {
            if (line[i] == ' ' || line[i] == '\0') {
                if (wordIdx > 0) {
                    // Sort the characters of the word
                    for (int j = 0; j < wordIdx - 1; j++) {
                        for (int k = j + 1; k < wordIdx; k++) {
                            if (word[j] > word[k]) {
                                char temp = word[j];
                                word[j] = word[k];
                                word[k] = temp;
                            }
                        }
                    }
                    for (int j = 0; j < wordIdx; j++) {
                        output[outputIdx++] = word[j];
                    }
                    output[outputIdx++] = ' ';
                    wordIdx = 0;
                }
            } else {
                word[wordIdx++] = line[i];
            }
        }

        if (outputIdx > 0 && output[outputIdx - 1] == ' ') {
            outputIdx--;
        }

        output[outputIdx] = '\0';
        for (int i = 0; output[i] != '\0'; i++) {
            cout << output[i];
        }
        cout << endl;
    }
    return 0;
}
