#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:

	// we are not given with the head pointer -->
    void deleteNode(ListNode* curr) 
    {
        ListNode* temp = curr->next;
        curr->val = temp->val;
        curr->next = temp->next;
        temp->next=NULL;
        delete(temp);
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