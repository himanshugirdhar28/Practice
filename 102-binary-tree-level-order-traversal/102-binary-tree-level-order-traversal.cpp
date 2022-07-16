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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>v;
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        v.push_back({});
        int i=0;
        v[i].push_back(q.front()->val);
        while(1)
        {
            v.push_back({});
                i++;
            queue<TreeNode*>q2;
            while(!q.empty())
            {
                if(q.front()->left!=NULL)
                {
                    v[i].push_back(q.front()->left->val);
                    q2.push(q.front()->left);
                }
                if(q.front()->right!=NULL)
                {
                    v[i].push_back(q.front()->right->val);
                    q2.push(q.front()->right);
                }
                q.pop();
            }
            if(q2.empty())
            {
                v.pop_back();
                break;
            }
            while(!q2.empty())
            {
                q.push(q2.front());
                q2.pop();
            }
           
        }
        return(v);
        
    }
};