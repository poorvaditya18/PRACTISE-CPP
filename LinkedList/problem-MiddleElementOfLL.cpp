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
	// length of linked list -->
    int LengthOfLL(ListNode* temp)
    {
        int length = 0;
        while(temp->next!=NULL)
        {
            length++;
            temp = temp->next;
        }
        return length+1;
    }

    ListNode* middleNode(ListNode* head) 
    {
      // mid point of the linked using runner technique -->
      if(head==NULL or head->next==NULL)
      {
          return head;
      }
       int lengthLL = LengthOfLL(head);
       ListNode* slow = head;
       ListNode* fast = head->next;
       while(fast!=NULL and fast->next!=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
       }
       if(lengthLL%2!=0)
       {
           return slow;
       }
       return slow->next;
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