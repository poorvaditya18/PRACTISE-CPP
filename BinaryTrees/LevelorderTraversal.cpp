#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {

    // level order
    vector<vector<int>> ans;
    if(root==NULL) return ans;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty())
    {
        int sz = q.size();
        vector<int> level;

        for(int i=0;i<sz;i++)
        {
        	//take out the front element 
            TreeNode* n = q.front();
            q.pop();
            // level order -> starts with left 
            // if there exists left then push in the queue 
            if(n->left!=NULL)
            {
                q.push(n->left);
            }
            // if the  right then push in the queue
            if(n->right!=NULL)
            {   
                q.push(n->right);
            }
            level.push_back(n->val);
        }
        ans.push_back(level);
    }
    return ans;
    }
};
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}