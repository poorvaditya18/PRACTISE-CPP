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
    bool isEvenOddTree(TreeNode* root) {
        int flag = 0; //for even(0) or odd 
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            // even level then strictly increasing 
            // odd level then striclty decreasing 
            int x = (flag ==0 )? INT_MIN: INT_MAX; // for strictly inc or dec
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode* n = q.front();
                q.pop();
                if(flag==0)
                {
                    if((n->val)%2==1 and n->val>x)
                    {
                        x= n->val;
                    }
                    else return false;
                }
                else 
                {
                    if((n->val)%2==0 and n->val<x)
                    {
                        x= n->val;
                    }
                    else return false;
                }
                if(n->left!=NULL)
                {
                    q.push(n->left);
                }
                if(n->right!=NULL)
                {
                    q.push(n->right);
                }
            }
           flag = !flag;
        }
        return true;
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