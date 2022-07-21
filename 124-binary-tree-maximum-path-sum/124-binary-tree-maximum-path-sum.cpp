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
    int maxPathSum(TreeNode* root) {
        int maxm=INT_MIN;
      maxDownpath(root,maxm);
      return maxm;
    }
  
  int maxDownpath(TreeNode* node, int &maxm)
  {
    if(node==NULL) return 0;
    
    int lh=max(0,maxDownpath(node->left,maxm));
    int rh=max(0,maxDownpath(node->right,maxm));
    
    maxm=max(maxm,node->val+lh+rh);
    
    return max(lh,rh) + node->val;
    
    
  }
};