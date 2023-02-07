#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num)
{
	int count =1;
	for(int i=1;i*i<=num;i++)
	{
        if(num%i==0)
        {
        	count++;
        }
	}
	if(count==2) return true;
	return false;
}



void printPrime(int n)
{
	for(int num=2;num<=n;num++)
	{
		if(checkPrime(num))
		{
			cout<<num<<" ";
		}
	}
}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	int n;
	cin>>n;

	printPrime(n);
 
	return 0;

}