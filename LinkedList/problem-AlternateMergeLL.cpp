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


// append 
node* append(node*dummy,int data)
{
	if(dummy==NULL) return new node(data);
	node* temp = dummy;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new node(data);
    return dummy;
}

// merge 
node* AlternateMerge(node* root1, node*root2)
{
	node* dummy= NULL; //dummy node
	if(root1==NULL) return root2;
	if(root2==NULL) return root1;
	while(root1 and root2)
	{
		dummy = append(dummy,root1->data);
		dummy = append(dummy,root2->data);
		root1 = root1->next;
		root2 = root2->next;
	}
	if(root1)
	{
		while(root1)
		{
			dummy = append(dummy,root1->data);
			root1 = root1->next;
		}
	}
	if(root2)
	{
		while(root2)
		{
			dummy = append(dummy,root2->data);
			root2 = root2->next;
		}
	}
	return dummy;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}