#include<bits/stdc++.h>
using namespace std;


// odd even linked list  leetcode -->
 ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL) return NULL;
        // using two pointers space complexity O(1)
       ListNode* baseOdd = head;
        ListNode* odd  = head;
        ListNode* baseEven = head->next;
        ListNode* even = head->next;
        while(even!=NULL and odd !=NULL)
        {
            if(even!=NULL)
            {
                odd->next=even->next;
                odd=odd->next;
            }
            if(odd!=NULL)
            {
                even->next=odd->next;
                even=even->next;
            }
        }
        while(baseOdd->next!=NULL)
        {
            baseOdd = baseOdd->next;
        }
        baseOdd->next = baseEven;
        return head;
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}