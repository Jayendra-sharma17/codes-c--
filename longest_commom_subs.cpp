#include <iostream>
#include <string>
#include <vector>

using namespace std;
string longestPalinSubstring(string str) {
    int n = str.length();
    if (n == 0) {
        return "";
    }

    vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

    int maxLength = 1;  // The length of the longest palindromic substring found so far.
    int start = 0;      // The starting index of the longest palindromic substring.

    // All substrings of length 1 are palindromes.
    for (int i = 0; i < n; ++i) {
        isPalindrome[i][i] = true;
    }

    // Check for palindromes of length 2.
    for (int i = 0; i < n - 1; ++i) {
        if (str[i] == str[i + 1]) {
            isPalindrome[i][i + 1] = true;
            maxLength = 2;
            start = i;
        }
    }

    // Check for palindromes of length 3 or more.
    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;  // Ending index of the current substring.

            if (isPalindrome[i + 1][j - 1] && str[i] == str[j]) {
                isPalindrome[i][j] = true;
                if (k > maxLength) {
                    maxLength = k;
                    start = i;
                }
            }
        }
    }

    // Extract and return the longest palindromic substring.
    return str.substr(start, maxLength);
}