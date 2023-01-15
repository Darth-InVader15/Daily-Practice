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
    
private:
    void loop(int index, vector<vector<int>> &anss, TreeNode* nod)
    {
        if(!nod)
        return;
        if(index == anss.size())
        anss.push_back({nod->val});

        else
            anss[index].push_back(nod->val);
        loop(index+1,anss,nod->left);
        loop(index+1,anss,nod->right);
        
       
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        //qNode.push(root);
        vector<vector<int>>ans;
        loop(0,ans,root);
        return ans;
        
    }
};