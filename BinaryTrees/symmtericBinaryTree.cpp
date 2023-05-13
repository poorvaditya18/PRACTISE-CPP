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

	// mirror -> left -> right, right ->left 
   bool isSymmtericHelp(TreeNode* leftNode , TreeNode* rightNode)
   {
        if(leftNode==NULL || rightNode ==NULL) return leftNode== rightNode;

        if(leftNode->val != rightNode->val) return false;
        return (isSymmtericHelp(leftNode->left,rightNode->right) and isSymmtericHelp(leftNode->right,rightNode->left));
   }    
    bool isSymmetric(TreeNode* root) 
    {
        return (root==NULL || isSymmtericHelp(root->left,root->right));
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