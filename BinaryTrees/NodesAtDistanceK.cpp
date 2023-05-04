#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public: 
    void markParents(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&storeParent)
    {
        // recursive bfs traversal 
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* current = q.front();
            q.pop();
            if(current->left)
            {
                storeParent[current->left] = current;
                q.push(current->left);
            }
             if(current->right)
            {
                storeParent[current->right] = current;
                q.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        unordered_map<TreeNode*,TreeNode*>  storeParent;
        markParents(root,storeParent);

        unordered_map<TreeNode*,bool> visited; // keep check for the visited node 

        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int currLevel=0;
        while(!q.empty())
        {
            int sz = q.size();
            if(currLevel == k) break;
            currLevel++;
            for(int i=0; i<sz; i++) {
                TreeNode* current = q.front(); 
                q.pop();
                // check for the left child and if it is visited or not , if not the put in the stack and mark it as visited . 
                if(current->left && !visited[current->left]) {
                    q.push(current->left);
                    visited[current->left] = true;
                }
                // check for the right child and if it is visited or not , if not the put in the stack and mark it as visited . 
                if(current->right && !visited[current->right]) {
                    q.push(current->right);
                    visited[current->right] = true;
                }
                 // check for the parent and if it is visited or not , if not the put in the stack and mark it as visited . 
                if(storeParent[current] && !visited[storeParent[current]]) {
                    q.push(storeParent[current]);
                    visited[storeParent[current]] = true;
                }
            }
        }
        vector<int> result;
        while(!q.empty()) 
        {
            TreeNode* current = q.front(); 
            q.pop();
            result.push_back(current->val);
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