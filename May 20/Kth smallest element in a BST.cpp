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
    //int count=0;
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;

        while(root != NULL || !s.empty())
        {
            while(root != NULL)
            {
                s.push(root);
                root = root->left;
            }    
            root = s.top(); 
            s.pop();
            k=k-1;
            if(k == 0)
                return root->val;
            root = root->right;
        }

        return -1;
    }
}; 
