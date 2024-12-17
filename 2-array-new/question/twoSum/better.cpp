#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mp;
        for(int i = 0 ; i<nums.size() ; i++){
                int req = target - nums[i];
                 if (mp.find(req) != mp.end() ) {
                         return {mp[req], i};
                    } 
                 //! m1 --> map mai push req  m1
                 mp[nums[i]] = i;
        }
        return {};
    }
};