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
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& in){
        if(root==NULL) return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> in;
        inorder(root,in);
        int mx=INT_MIN;
        unordered_map<int,int> mp;

        for(int i=0;i<in.size();i++){
            mp[in[i]]++;
            mx=max(mp[in[i]],mx);
        }
        vector<int> res;
        for(auto it:mp){
            if(it.second==mx) res.push_back(it.first);
        }
        return res;
    }
};