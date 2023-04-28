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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        // POST ORDER -> LEFT , RIGHT , ROOT 

        // ITERATIVE POST ORDER -> 

        // method 1. using 2 stack  TIME : o(n) Space : O(2n)
        // method 2. using 1 stack 
        
        vector<int> postOrder;
        if(root==NULL) return postOrder;

        // 1. using 2 stack - 
    
        // Intuition -> For every iteration , take the top element out and put it in the stack2. 
        // If this node have the left node then push it in the stack1 and if it have right node put it in the stack1. 
        // Once the stack 1 becomes empty stop and take the element from stack2 . 

        stack<TreeNode*> st1,st2;
        st1.push(root); //initially push the root in stack1.

        while(!st1.empty())
        {
        	// take the top element
            root = st1.top();
            st1.pop();
            // move to the stack 2 
            st2.push(root);
            // check for left node 
            if(root->left!=NULL)
            {
                st1.push(root->left);
            }
            // check for right node 
            if(root->right!=NULL)
            {
                st1.push(root->right);
            }
        }
        // stack2 will have postOrder
        while(!st2.empty())
        {
            postOrder.push_back( st2.top()->val);
            st2.pop();
        }
        return postOrder;
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