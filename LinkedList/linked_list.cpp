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

	// printing link list -->
	l.PrintLinkedList();

 
	return 0;

}