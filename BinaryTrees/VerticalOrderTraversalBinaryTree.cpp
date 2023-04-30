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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        // map will store line number ,level , multinodes 
        map<int,map<int,multiset<int>>> mpp;

        //queue will store the level order traversal node with its level , also its line no 
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});

        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            TreeNode* n = it.first;

            // vertical line (x)
            int x = it.second.first;

            // level (y)
            int y = it.second.second;

            mpp[x][y].insert(n->val);

            //check for its left children 
            if(n->left!=NULL)
            {
                q.push({n->left,{x-1,y+1}});
            }
            if(n->right!=NULL)
            {
                q.push({n->right,{x+1,y+1}});   
            }
        }


        vector<vector<int>> ans;
        //iterating over map 
        for(auto it:mpp)
        {
            vector<int>col;
            for(auto qt:it.second)
            {
                col.insert(col.end(),qt.second.begin(),qt.second.end());
            }
            ans.push_back(col);
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