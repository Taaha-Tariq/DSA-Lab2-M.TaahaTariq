#include <iostream>
#include <string>

using namespace std;

// Function that returns the starting index of the first occurence of pat in ori string
int patternMatch (string ori, string pat) {
    if (pat.length() == 0) return -1; // If there is no pattern to compare against 

    // Parsing the original string looking for pattern
    for (int i = 0; i < ori.length(); i++) {
        if (pat[0] == ori[i]) {
            int temp = i;
            int j = 1;
            temp++;
            while (j < pat.length() && temp < ori.length() && ori[temp] == pat[j]) {
                j++;
                temp++;
            }
            if (j >= pat.length()) return i;
        }
    }

    return -1; // If the pattern doesnt occur
}

int main () {
    // Test cases
    string ori = "Hello World";
    string pat1 = "He";

    string pat2 = "ld";
    string pat3 = "OOp";
    string pat4 = "";

    // Function calls
    cout << patternMatch(ori, pat1) << endl;
    cout << patternMatch(ori, pat2) << endl;
    cout << patternMatch(ori, pat3) << endl;
    cout << patternMatch(ori, pat4) << endl;
}