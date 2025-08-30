#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int i = 0;

    bool checkPalindrome(string s) {
        // Base case: reached the middle
        if (i >= s.size() / 2) {
            return true;
        }

        // Check characters from both ends
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }

        // Move inward
        i++;
        return checkPalindrome(s);
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    Solution obj;
    if (obj.checkPalindrome(s)) {
        cout << "Palindrome ✅" << endl;
    } else {
        cout << "Not a Palindrome ❌" << endl;
    }

    return 0;
}
