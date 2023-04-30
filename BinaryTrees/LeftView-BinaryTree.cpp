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

	// For left view -> 
	// we have used Recursive Reverse Preorder ->  ROOT , RIGHT , LEFT 
    void func(TreeNode* root , int level, vector<int>& ans)
    {
        if(root==NULL) return ;

        // making sure that only first element of the each level from L to R gets stored in datastructure
        if(level==ans.size())
        {
            ans.push_back(root->val);
        }
        func(root->left,level+1,ans);
        func(root->right,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        func(root,0,ans);
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