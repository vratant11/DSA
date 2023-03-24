/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int mx =0 ; 
//     int diameter_bst(TreeNode* temp){
//         if(temp == nullptr )
//         return 0 ; 
//         int l =  diameter_bst(temp->left) ; 
//         int r  = diameter_bst(temp->right) ;
//         mx = max(mx , l+r) ; 
//         return (1+max(l , r)) ; 
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         diameter_bst(root) ; 
//          return mx ; 
//     }
// };
 



class Solution {
public:
    pair<int,int> solve(TreeNode* root){
        //base case
        if(root==NULL)return {0,0};
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        int notpassing = max(left.first,right.first)+1;
        
        int passing = max({ 
            left.second,right.second,
            left.first+right.first+1,
            });
        return {notpassing,passing};
    }
        
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>ans = solve(root);
        return max(ans.first,ans.second)-1;
    }
};