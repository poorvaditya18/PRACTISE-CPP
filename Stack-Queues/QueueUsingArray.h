#include<iostream>
#include<stdio.h>
using namespace std;

class Queue 
{
   int * arr;
   int cnt;
   int n;
   int front;
   int rear;

public:
	Queue(int default_size)
	{
       n = default_size;
       arr = new int[n];
       cnt = 0;
       front = 0;
       rear = 0;
	}

	//push 
	void push(int data)
	{
		if(cnt==n)
		{
			cout<<"Queue is full"<<endl;
			return ;
		}
		arr[rear%n]= data;
		rear++;
		cnt++;
	}

	//pop
	void pop()
	{
		if(cnt==0) return;
		arr[front%n] = -1;
		front++;
		cnt--;
	}

	// top
	int top()
	{
		if(cnt==0)return -1;
		return arr[front%n];
	}

	bool empty()
	{
		return cnt==0;
	}
	bool full()
	{
		return cnt==n;
	}
	void print()
	{
		for(int temp = front ;temp<=rear-1;temp++)
		{
			cout<<arr[temp%n]<<" ";
		}
	}
};