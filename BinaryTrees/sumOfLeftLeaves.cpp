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
    bool checkLeftLeafNode(TreeNode* root)
    {
        // first check whether it is a leaf node or not 
        if(root->left==NULL and root->right==NULL) 
        {
            
            return true;
        }
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(root==NULL) return 0;

        int sum =0;
        stack<TreeNode*> st;
        st.push(root)
        while(!st.empty())
        {
            TreeNode* n = st.top();
            st.pop();
            if(checkLeftLeafNode(n))
            {
                sum = sum + n->val;
            }
            if(n->right)
            {
                st.push(n->right);
            }
            if(n->left)
            {
                st.push(n->left);
            }
        }
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