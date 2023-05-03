#include<bits/stdc++.h>
using namespace std;

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
    void recursiveTraversal(TreeNode* root, vector<int> &ans)
    {
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) 
        {
            ans.push_back(root->val);
            return;
        }
        recursiveTraversal(root->left,ans);
        recursiveTraversal(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> ans1, ans2;
        recursiveTraversal(root1,ans1);
        recursiveTraversal(root2,ans2);
        return ans1==ans2;

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