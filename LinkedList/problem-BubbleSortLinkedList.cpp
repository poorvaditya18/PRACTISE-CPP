#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// find the length of the linked list -->
int lengthLinkedList(node* head)
{
    if(head==NULL) return 0;
    node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

node* bubble_sort_LinkedList_itr(node* head)
{
    // your code goes here
    int n = lengthLinkedList(head);
    if(n==0) return NULL;
    node* temp ;
    for(int i=n-1;i>=1;i--)
    {       
        temp = head;
        for(int j=0;j<=i-1;j++)
        {
              if(temp->data > temp->next->data)
              {
                  // swap-->
                  swap(temp->data,temp->next->data);
              }
              temp = temp->next;
        }
    }
    
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