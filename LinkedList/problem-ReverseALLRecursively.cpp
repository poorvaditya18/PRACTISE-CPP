#include<bits/stdc++.h>
using namespace std;



  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {

        // Recursively -->

        // base case 
        if(head == NULL||head->next==NULL)
        {
            return head;
        }

        // recursive case 
        ListNode* subHead = reverseList(head->next);
        ListNode* temp = head->next;
        temp->next = head;
        head->next = NULL;
        return subHead;
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