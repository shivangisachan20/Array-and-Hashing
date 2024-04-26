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

void marktree(TreeNode* root,TreeNode* &prev,TreeNode* &first,TreeNode* &end)
{
    if(root==NULL)
        return;
    marktree(root->left,prev,first,end);
    if(prev!=NULL)
    {
        if(root->val<prev->val)
        {
            if(first==NULL)
            {
                first=prev;
            }
            end=root;
        }
    }
    prev=root;
    marktree(root->right,prev,first,end);
        
    
}
    void recoverTree(TreeNode* root)
    {
        TreeNode* prev=NULL;
        TreeNode* first=NULL;
        TreeNode* last=NULL;
        marktree(root,prev,first,last);
        swap(first->val,last->val);
        return;    
    }
};