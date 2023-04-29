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
    // diameter -> is passed by reference
    // diameter = lh + rh , passing through a node .
    int Height(TreeNode* root , int &diameter)
    {
        if(!root)
        {
            return 0;
        }
        // find left height 
        int lh = Height(root->left,diameter);
        // find right height 
        int rh = Height(root->right,diameter);
        diameter = max(diameter,lh+rh);
        return 1+ max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        // Naive solution -> for every node find (lh + rh ), choose max(lh+rh) -> TIME :o(n^2)

        // optimisation -> Time: O(n)

        int diameter = 0;
        Height(root,diameter);
        return diameter;
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