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
    void BinaryTreePathHelper(TreeNode* root,vector<string> &ans,string str)
    {
        //leaf node ->
        if(root->left==NULL and root->right==NULL) 
        {
            ans.push_back(str+to_string(root->val));
            return;
        }


        str = str + to_string(root->val)+"->";
        if(root->left)
        {
            BinaryTreePathHelper(root->left,ans,str);
        }

        if(root->right)
        {
        
            BinaryTreePathHelper(root->right,ans,str);
        }
       return ; 
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> ans;
        string str="";
        BinaryTreePathHelper(root,ans,str);
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