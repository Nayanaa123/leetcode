#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev = string(s.rbegin(), s.rend());
        return s == rev;
    }
};

int main() {
    Solution sol;
    int x=121;

    if (sol.isPalindrome(x))
        cout << "true";
    else
        cout << "false";
}