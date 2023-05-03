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
    // returns maximum height of the tree->
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1 + max(height(root->left),height(root->right));
    }

    void FindDeepestNode(TreeNode* root, int level, int height, int &res)
    {
        if (root != NULL)
        {
            level += 1;
            // if level becomes equal to height then include that node of the particular level because that will be the deepest leaf node .
            if(level==height)
            {
                res += root->val;
            }
            FindDeepestNode(root->left, level, height, res);
            FindDeepestNode(root->right, level, height, res);
        }
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        if(root==NULL) return 0;
        int sum = 0;
        int ht = height(root);
        FindDeepestNode(root,0,ht,sum);
        return sum;
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