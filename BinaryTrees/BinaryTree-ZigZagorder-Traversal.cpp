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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        // Intuition: Initially we will insert node in the queue , when we pop out node we will toggle the flag variable .
        
        // if flag = false then we will insert in the vector in reverse order .
        // true -> L to R 
        // false -> R to L
        vector<vector<int>> result;

        if(root==NULL) return result;

        queue<TreeNode*> q;
        q.push(root); //initially insert the node 

        bool flag = true;

        while(!q.empty())
        {
            int sz = q.size();
            vector<int> row(sz);
            for(int i=0;i<sz;i++)
            {
                TreeNode* n = q.front();
                q.pop();

                // if flag false then insert in reverse order 
                int index = (flag) ? i : (sz-1-i);
                row[index] = n->val;

                //check for left node if exists or not 
                if(n->left)
                {
                    q.push(n->left);
                }
                //check for right node if exists or not 
                if(n->right)
                {
                    q.push(n->right);
                }
                
            }
            // after every iteration , toggle the flag variable. 
            flag = !flag;
            result.push_back(row);
        } 
        return result;
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