#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* startingPoint(struct Node*temp)
{
     // edge case: empty element or single element 
        if(temp==NULL || temp->next==NULL) return NULL;

        Node* slow=temp;
        Node* fast=temp;
        Node* entry = temp;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast=fast->next->next;
            if(fast == slow)
            {
                while(entry!=slow)
                {
                    entry = entry->next;
                    slow = slow->next;
                }
                return slow;
            }
             
        }
        return NULL;
}
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    // check whether cycle is present or not
    // if not presnt then return 0;
    // else count nodes from the starting point
    Node* stp = startingPoint(head);
    if(stp==NULL)
    {
        return 0;
    }
    int count = 1;
    Node* itp = stp->next;
    while(itp!=stp)
    {
        count++;
        itp = itp->next;
    }
    return count;
}
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}