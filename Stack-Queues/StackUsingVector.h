#include <stdio.h>
#include <iostream>
#include<vector>
using namespace std;

// Implementation of STACK as ADT using array -->

// Stack follows -> LIFO : last in first out policy 
template<typename T>

class Stack
{
	vector<T> arr;

public:

	// push --> push the element into the stack 
	void push(T data)
	{
		arr.push_back(data);
	}

	// pop --> remove the element present at the top
	void pop()
	{
		arr.pop_back();
	}

	// top --> gives the top most element 
	T top()
	{
		int lastIdx = arr.size()-1;
		return arr[lastIdx];
	}

	// empty --> check whether the stack is empty or not 
    bool empty()
    {
    	return arr.size()==0;
    }
};
