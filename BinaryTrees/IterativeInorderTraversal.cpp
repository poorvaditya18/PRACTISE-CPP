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
    vector<int> inorderTraversal(TreeNode* root) 
    {

        // INORDER -> LEFT , ROOT , RIGHT 

        // ITERATIVE INORDER TRAVERSAL using stack 
        // intuition -> move to the leftmost node if found null then get the top node from stack and then move to the right.

        // Time : o(n), space:O(n)

        vector<int> inorder;
        stack<TreeNode*> st;

        TreeNode* n = root;

        while(true)
        {
            //if curr node is not null then go move to the left . (idea to move to the leftmost node)
            if(n != NULL)
            {
                st.push(n);
                n = n->left;
            }
            // if you got NULL -
            else
            {
                // finally stack will become empty means no nodes to travel;
                if(st.empty()==true) break;

               // take out the element and push in the inorder
               // and after that move to the right.
               n = st.top();
               st.pop();
               inorder.push_back(n->val);
               n= n->right; 
            }
        }
        return inorder;
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