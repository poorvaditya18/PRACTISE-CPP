#include<bits/stdc++.h>
using namespace std;

bool Func(int num , int *temp)
{
   
    //base case 
    if(num>=0 and num<=9)
    {
    	int last_digit = (*temp)%10;
    	(*temp)/=10;
    	return (num==last_digit);
    }

   bool res = (Func(num/10,temp) and (num%10==(*temp)%10));
   (*temp) /= 10;
    return res;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    // To check whether a given number is pallindrome or not 
    // Approach -> 1441 l->r and r->l compare using recursive stack 
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int anotherTemp= n;
		int *temp = &anotherTemp;
		if(Func(n,temp))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		t--;
	}
 
	return 0;

}