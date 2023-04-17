#include<iostream>
#include"QueueUsingArray.h"
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	Queue qt(5);

	qt.push(10);
	qt.push(11);
	qt.push(12);
	qt.push(13);
	qt.push(14);
	cout<<qt.empty();
    cout<<"\n";
    cout<<qt.full();
    cout<<endl;
    qt.print();
    qt.pop();
    cout<<"\n";
    qt.print();
    cout<<"\n";
    cout<<qt.top();
    cout<<"\n";
    cout<<qt.empty();
    cout<<"\n";
    cout<<qt.full();
	
	return 0;

}