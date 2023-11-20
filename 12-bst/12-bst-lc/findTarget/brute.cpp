// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void inorder(TreeNode * root ,vector <int> & ans ){
//         if(root == NULL){
//             return ;
//         }
//         inorder(root->left , ans);
//         ans.push_back(root->val);
//         inorder(root->right , ans);
//     }
//     bool findTarget(TreeNode* root, int k) {
//         vector <int> ans ;
//         inorder(root , ans);
//         int s = 0 ;
//         int e = ans.size() - 1;
//         while(s < e ){//M equal sign added
//             if(ans[s] + ans[e] > k){
//                 e--;
//             }else if(ans[s] + ans[e] == k){
//                 return true;
//             }else{
//                 s++;
//             }
//         }
//         return false;

//     }
// };