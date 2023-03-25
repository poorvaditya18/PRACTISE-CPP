#include<bits/stdc++.h>
using namespace std;


 struct ListNode 
 {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution
{
public:
		bool isPalindrome(ListNode* head) 
    {
        // method 1. storing the linked list in the array/vector and then checking the 
        // whether the vector is pallindrome or not
        
      //   vector<int> res;
      //   ListNode* temp = head;
      //   while(temp)
      //   {
      //       res.push_back(temp->val);
      //       temp = temp->next;
      //   }
      // for(int i=0;i<res.size()/2;i++)
      // {
      //       if(res[i]!= res[res.size()-1-i])
      //       {
      //           return false;
      //       }
      // }
      //   return true;
        
        //method 2 : we will divide the list in two halves and reverse the one half and then compare.
        if(head == NULL){return false;} //no Node exists
        if(head->next == NULL){return true;} //single node always pallindrome
        
        ListNode* fast= head;
        ListNode* slow = head;
        //This will find the middle of the linked list
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode* rev = Reverse(slow); // this will reverse the half of the linked list
        
        while(rev and head)
        {
            if(rev->val != head->val){return false;}
            rev= rev->next;
            head = head->next;
        }
        
        return true;
    }
    
    // Reversing the linked list
    ListNode* Reverse(ListNode* head)
    {
        ListNode* p =NULL;
        ListNode* c = head;
        ListNode* t;
        while(c!=NULL)
        {
            t = c->next;
            c->next = p;
            p=c;
            c= t;
        }
        head = p;
        return head;
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