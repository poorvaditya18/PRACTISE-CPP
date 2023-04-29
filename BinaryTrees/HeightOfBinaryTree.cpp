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

	// HEIGHT OF THE BINARY TREE OR MAXIMUM DEPTH 
	// TIME : O(N)
	// SPACE : O(N)

    int maxDepth(TreeNode* root) 
    {
        if(root==NULL) return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        // recurrence relation 
        return 1 + max(lh,rh);
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