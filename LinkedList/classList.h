#include<stdio.h>
#include<iostream>
using namespace std;
class List;
// Node -> is the representation of linked list 
class Node
{
	int data;

	// constructor ->
	public:
		Node* next;

		Node(int x )
		{
			data = x;
			next = NULL;
		}

		// getters 
		int getData()
		{
			return data;
		}

	friend class List; // so that class list will be able to access the members of the class Node 
};


class List
{	

	// head and tail to keep track of head and tail in the linked list  
	Node* head;
	Node* tail;

	public: 
		// whenever new linked list will be created head and tail will point to null initialliy 
		List():head(NULL),tail(NULL){}



		// push_front(int data) --> will insert the element to the front of the linked list 
		void push_front(int data)
		{
			if(head==NULL)
			{
				// means list is empty and no element present 
				 Node* n = new Node(data); // create new node 
				 head = tail = n;  // point head ant tail to the new node 
			}
			else
			{
				// if elements are already there 
				Node * n = new Node(data); // create new node 
				n->next = head ; // point the new node to the curr head 
				head = n; // change the head position 
			}
		}


		// push_back(int data) --> will insert the element at the last of the linked list 
		void push_back(int data)
		{
			if(head==NULL)
			{
				Node* n = new Node(data);
				head = tail = n;
			}
			else
			{
				Node* n = new Node(data);
				tail->next = n;
				tail = n;
			}
		}


		// begin() --> returns current head position of the ll
		Node* begin()
		{
			return head;
		}

		// print linked list
		void PrintLinkedList()
		{
			Node * temp = head;
			while(temp!=NULL)
			{
				cout<<temp->getData()<<"->";
				temp = temp->next;
			}
		}

};