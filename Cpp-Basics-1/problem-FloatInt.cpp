#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	

	float a;
	cin>>a ;

	int b = a;
	if(b==a)
	{

		cout<<"int "<<b<<'\n';
	}

	else 
	{
		cout<<"float "<<b<<" "<<a-b<<'\n';
	}


	
 
	return 0;

}