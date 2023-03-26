#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

// problem --> get the kth element from the last -->
		int KthElement(node*head,int k)
		{
			int sizeLL = 0;
			node* temp = head;
			while(temp!=NULL)
			{
				sizeLL++;
				temp = temp->next;
			}
			int idxFromFirst = sizeLL - k;
			node* res = head;
			for(int i=0;i<idxFromFirst;i++)
			{
				res = res->next;
			}
          return res->data;

		}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}