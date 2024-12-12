#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
using namespace std;


class Solution {
public:
    /* Function to find the largest odd number 
    that is a substring of given string */
    string largeOddNum(string& s) {
        int ind = -1;
        
        // Iterate through the string from the end to beginning
        int i;
        for (i = s.length() - 1; i >= 0; i--) {
            // Break if an odd digit is found
            if ((s[i] - '0') % 2 == 1) {
                ind = i;
                break;
            }
        }
        
        // Skipping any leading zeroes
        i = 0;
        while(i <= ind && s[i] == '0') i++;
        
        // Return the largest odd number substring
        return s.substr(i, ind - i + 1);
    }
};

int main() {
    Solution solution;
    string num = "504";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}
