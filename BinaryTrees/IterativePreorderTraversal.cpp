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
    vector<int> preorderTraversal(TreeNode* root) 
    {
        // pre -> ROOT , LEFT , RIGHT 

        // Iterative preorder -> using stack

        // Time : O(n) as we are traversing each node 
        // space : O(N) -> due to stack or height of the tree O(h)


        stack<TreeNode*> st;
        vector<int> preOrder;

        // if there is no element return {}
        if(root==NULL) return preOrder;

        // initially push the ROOT 
        st.push(root);
        
        while(!st.empty())
        {
            root = st.top();
            st.pop();
            preOrder.push_back(root->val);

            // Since Stack is LIFO therefore first insert right element then insert left element.
            // check for the right element if exists then insert it into stack 
            if(root->right!=NULL)
            {
                st.push(root->right);
            }
             // check for the right element if exists then insert it into stack 
            if(root->left!=NULL)
            {
                st.push(root->left);
            }
        }
        return preOrder;
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