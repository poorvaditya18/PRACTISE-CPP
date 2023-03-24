#include<bits/stdc++.h>
#include"classList.h"
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_front(2);
	l.push_back(5);
	l.push_back(6);
	l.insertion(7,0);
	l.insertion(8,2);
	// l.pop_front();
	// l.pop_front();
	// l.pop_back();
	// l.pop_back();
	// l.pop_back();
	// l.pop_back();
	// l.pop_back();
	l.remove(0);
	l.remove(2);
	// printing link list -->
	l.PrintLinkedList();

 
	return 0;

}