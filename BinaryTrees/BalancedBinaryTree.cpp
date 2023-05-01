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

	// if any node is not balanced it will return -1 .
	// else it will return the height for the particular node . 
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lh = height(root->left);
        if(lh==-1) return -1;
        int rh = height(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        return height(root)!=-1;
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