// class Solution {
// public:
//     // int robRec(vector<int>& nums , int n ){
//     //     if(n < 0) return 0;
//     //     if(n == 0) {
//     //         // cout << "hello";
//     //         return nums[0];
//     //     }

//     //     int include = robRec(nums, n-2 ) + nums[n];
//     //     cout <<  n << "-" << include << " " ;
//     //     int exclude = robRec(nums , n - 1) + 0 ;

//     //     return max(include , exclude);
//     // }
//     int tabRob(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 0) return 0;
//         if (n == 1) return nums[0];
//         vector<int> dp(n, 0);
//         dp[0] = nums[0];
//         dp[1] = max(nums[0], nums[1]);
//       for (int i = 2; i < n; i++) {
//             int include = dp[i - 2] + nums[i] ;
//             int exclude = dp[i - 1];
//             dp[i] = max(include , exclude);
//         }
//         return dp[n - 1];

//     }
//     int rob(vector<int>& nums) {
//         return tabRob(nums);
//         // int n = nums.size() - 1;
//         // return robRec(nums , n);
//     }
// };