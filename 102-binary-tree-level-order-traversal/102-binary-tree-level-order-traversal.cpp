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
    void levelOrderr(TreeNode* root,vector<vector<int>>& ans,int lvl)
    {
        if(ans.size()<=lvl)
        {
             vector<int>s{root->val};
            ans.push_back(s);
            
        }
       else
       {
           ans[lvl].push_back(root->val );
       }
        
        if(root->left) levelOrderr(root->left,ans,lvl+1);
         if(root->right) levelOrderr(root->right,ans,lvl+1);
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root)
            levelOrderr(root,ans,0);
        
        
        return ans;
            
        
    }
};