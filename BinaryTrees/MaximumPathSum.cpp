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
    int Sum(TreeNode* root , int & maxi)
    {
        if(root==NULL) return 0;

        // for any node -> we will find the maximum of (maxL + maxR + node->val);
        int lsum = max(0,Sum(root->left,maxi));
        int rsum = max(0,Sum(root->right,maxi));
        maxi = max(maxi,lsum+rsum+root->val);
        // while returning we will choose the path with the maximum value 
        return max(lsum,rsum)+ root->val;
    }
    int maxPathSum(TreeNode* root) 
    {
        int maxi = INT_MIN;
        Sum(root,maxi);
        return maxi;
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