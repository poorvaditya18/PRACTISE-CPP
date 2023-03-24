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


		// Insertion(data,pos)
		// - At particular position
		// - At starting position same as push_front()
		// - at last position same as push_back()
		void insertion(int data , int pos)
		{
			if(pos==0)
			{
				push_front(data);
				return ;
			}
			Node* temp = head;
			for(int jump = 1 ;jump<=pos-1;jump++)
			{
				temp = temp->next;
			}
			Node* n = new Node(data);
			n->next = temp -> next;
			temp->next = n;
		}

		// Deletion(position)
		// - pop_front() --> removes the first element 
		// - pop_back() --> removes the last element 
		// - remove(pos) --> removes the element from given position
		// pop_front()
		void pop_front()
		{
			if(head==NULL)
			{
				// if no element are present 
				return;
			}
			Node* temp = head ; //copy head to the temporary memory 
			head = head->next; // moving head to the next memory location 
			temp->next = NULL; // changing the link 
			delete temp;
		}


		// pop_back()
		void pop_back()
		{
			if(head==NULL)
			{
				return;
			}
			if(head->next==NULL)
			{
				Node*temp = head;
				head = head->next;
				delete temp;
				return;
			}
			Node* temp = tail;
			Node* second = head;
			while(second->next->next!=NULL)
			{
				second = second->next;
			}
			tail = second;
			delete tail->next;
			tail->next = NULL;
		}



		// remove(pos) -->
		void remove(int pos)
		{
			if(head==NULL)
			{
				return ;
			}
			Node* temp = head;
			if(pos==0)
			{
				head = temp->next;
				temp->next=NULL;
				delete temp;
				return;
			}

			for(int jump = 1;jump<=pos-1;jump++)
			{
				temp = temp->next;
			}
			Node* n = temp->next;
			temp->next = n->next;
			n->next=NULL;
			delete n;
		}

		// Searching Element in a  linked list 

		// 1. Iteratively 
		bool searchIterative(Node* head , int key)
		{

			// Linear Search --> O(n)
			Node* temp = head;
			while(temp!=NULL)
			{
				if(temp->getData()==key)
				{
					return true;
				}
				temp = temp->next;
			}
			return false;
		}

		// 2. Recursively
		bool searchRecursive(Node*temp,int key)
		{
			//base case 
			if(temp==NULL)
			{
				return false;
			}
			if(temp->getData() == key)
			{
				return true;
			}
			else
			{
				return searchRecursive(temp->next,key);
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