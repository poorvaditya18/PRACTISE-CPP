#include<iostream>
#include<stdio.h>
using namespace std;

// Stack using linked list . 
// elements will be pushed into stack in the form of Node.
// intially head will point to null
template<typename T>
class  Stack;

template<typename T>
class Node
{
public:
	T data;
	Node<T> * next;

	Node(T d)
	{
		data = d;
		next = NULL;
	}
};


template<typename T>
class  Stack
{


Node<T> *head;

public:	
Stack()
{
	head = NULL;
}

// push the data node in the stack 
void push(T data)
{
	
		Node<T>* n = new Node<T>(data);
		n->next=head;
		head = n;
	
}

// check whether stack is empty or not 
bool empty()
{
	return head==NULL;
}

// returns the top element 
T top()
{
	return head->data;
}

// pop the data node from the stack 
void pop()
{
	if(head!=NULL)
	{
		Node<T>* temp = head;
		head = head->next;
		temp->next=NULL;
		delete temp;
	}
}

};