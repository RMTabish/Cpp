#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string h = "";

    for (int i = 0; i < word1.length() + word2.length(); i++) {
        if (i < word1.length() && i < word2.length()) {
            h += word1[i];
            h += word2[i];
        }
        else if (i < word1.length()) {
            h += word1[i];
        }
        else if (i < word2.length()) {
            h += word2[i];
        }
    }

    return h;
}

int main() {
    string word1 = "Hello";
    string word2 = "World";

    string merged = mergeAlternately(word1, word2);
    cout << "Merged string: " << merged << endl;

    return 0;
}
