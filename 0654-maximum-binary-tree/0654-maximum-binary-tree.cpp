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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> s{new TreeNode(INT_MAX)};
        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            auto node = new TreeNode(curr);
            while (s.back()->val < curr) {
                node->left = s.back();
                s.pop_back();
            }
            s.back()->right = node;
            s.push_back(node);
        }
        return s[1];
    }
};