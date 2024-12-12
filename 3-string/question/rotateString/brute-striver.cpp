#include <iostream>
#include <vector>
#include <climits>
#include <stack>
 
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
			   if (s.length() != goal.length()) {
            return false;  
        }
        // Try all possible rotations of s
        for (int i = 0; i < s.length(); i++) {
            string rotated = s.substr(i) + s.substr(0, i);  
            if (rotated == goal) {
                return true;  
            }
        }
        return false;  
		}
};