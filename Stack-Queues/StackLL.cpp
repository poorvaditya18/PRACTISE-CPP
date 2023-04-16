#include<bits/stdc++.h>
#include"StackUsingLinkedList.h"
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	Stack<int> st;

	st.push(2);
	st.push(3);
	st.push(4);

	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
 
	return 0;

}