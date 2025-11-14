#include <iostream>
#include <unordered_map>
using namespace std;

class solution {
public:
    int romantoint(string s) {
        unordered_map<char, int> value{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            // If next symbol exists and current < next → subtract
            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
                result -= value[s[i]];
            }
            else {
                result += value[s[i]];
            }
        }

        return result;
    }
};

int main() {
    solution sol;
    string s = "VII";
    int ans = sol.romantoint(s);
    cout << ans << endl;
    return 0;
}
