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
//     TreeNode* searchBST(TreeNode* root, int val) {

//              while(root != nullptr && root->val != val){
 
 
        //    if( val < root->val ){
            //     root = root->left;
            //      }else{
            //             root = root->right;
            //     }
// !M1:: if if --> no else breaking  root remain same --> to infinite while loop 
            // if( val < root->val){
            //     root = root->left;
            // }
            // if( val > root->val){
            //     root = root->right;
            // }
            
            // }
  
 
//         return root;
        
//     }
// };