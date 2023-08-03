#include <iostream>
#include <vector>

using namespace std;
void printAns(vector<string> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].length(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}
void solve(vector<string> &ans, int index, string output, string digits, vector<string> mapping)
{
    // base
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }
    // 1case solve
    // cout <<  digits[index] << endl;//? char it give

    int digit = digits[index] - '0'; //? char value convert to int - "0"
    string value = mapping[digit];
    for (int i = 0; i < value.length(); i++)
    {
        char ch = value[i];
        output.push_back(ch);
        solve(ans, index + 1, output, digits, mapping);
        output.pop_back();
    }
}

void letterCombinations(string digits)
{
    vector<string> ans;
    int index = 0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    if (digits.length() == 0 )
    {
        // return ans;
    }
    
    solve(ans, index, output, digits, mapping);
    printAns(ans);
}
int main()
{
    letterCombinations("35");

    return 0;
}
