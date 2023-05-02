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
    int widthOfBinaryTree(TreeNode* root) 
    {
        
        if(!root) return 0;
        int ans = 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});

        while(!q.empty())
        {
            int sz = q.size();
            int mminIdx = q.front().second; // minimum index 
            int first,last;
            for(int i=0;i<sz;i++)
            {
                long long int currIdx = q.front().second - mminIdx; // to avoid overflow 
                TreeNode* n = q.front().first;
                q.pop();

                // to store the first index 
                if(i==0) {first = currIdx;}
                if(i==sz-1) {last = currIdx;}

                if(n->left)
                {
                    q.push({n->left,currIdx*2+1});
                }
                if(n->right)
                {
                    q.push({n->right,currIdx*2+2});
                }
            }
            ans = max(ans, last - first +1);
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