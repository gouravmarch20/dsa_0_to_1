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
//         int n = nums.size() - 1;
//        int prev2 = 0;
//        int prev1 = nums[0];
//        int curr = 0;
//        for(int i = 1 ; i <= n ; i++){
//            int temp = 0 ;
//            if(i-2 >= 0) temp = prev2;
//            int include = temp + nums[i];
//            int exclude = prev1 + 0;
//            curr = max(include , exclude);
//            prev2 = prev1;
//            prev1 = curr;
//        }
//         return prev1 ;

//     }
//     int rob(vector<int>& nums) {
//         return tabRob(nums);
//         // int n = nums.size() - 1;
//         // return robRec(nums , n);
//     }
// };