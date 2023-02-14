#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
 /* LOGIC ->

	suppose set S  =  {1,2,3....N}
    we want to divide  S into two sets of equal sum. say s1 and s2.

    s  --> s1 , s2
	
	sum of elements of s = n(n+1)/2; can be break into two equal parts iff S = even
	s = s1 + s2 and s1 = s2 
    so we can say s1 = s2 = s/2 = n(n+1)/4
    to get solution n(n+1) should be divisible by 4 exactly.
    if not then solution doesnot exist
    suppose n=6 then 6(7)/4 = 10.5 --> solution doesnot exist 

    n = 7  target = n(n+1)/4 ==> target = 14
    suppose s1 have all the elements 
    S1 = {1,2,3,4,5,6,7}  --> sum = 28 --> 2*target
    then we need to transfer elements to s2 such that their sum becomes equal   
    S2 = {}
    we will transfer { 7, 6 , 1} .

 */

  ll n;
  cin>>n;

  ll sum = (n*(n+1))/2;
  if(sum%2==1)
  {
  	cout<<"NO"<<endl;
  }
  else
  {
  	//sum even 
  	cout<<"YES"<<endl;
  	ll target = sum/2;
  	set<ll> s1, s2;
  	ll t = n;
  	for(ll i=1;i<=n;i++)
  	{
      s1.insert(i);
  	}
  	while(s1.count(target)==0)
  	{
  		target = target - t;
  		s2.insert(t);
        s1.erase(t);
        t--;
  	}
  	s1.erase(target);
  	s2.insert(target);

  	cout<<s1.size()<<endl;

  	for(auto &i:s1)
  	{
  		cout<<i<<" ";
    }
    cout<<endl;

    cout<<s2.size()<<endl;

    for(auto &i:s2)
    {
    	cout<<i<<" ";
    }

  }

	return 0;

}