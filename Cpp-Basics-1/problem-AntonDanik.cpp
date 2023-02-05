#include<bits/stdc++.h>
using namespace std;


#define ll long long int

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

  ll n; // no of games played 
  cin>>n;

  string s;
  cin>>s;

  int a_count =0;
  int d_count = 0;
  for(auto i:s)
  {
  	if(i=='A')
  	{
  		a_count++;
  	}
  	if(i=='D')
  	{
  		d_count++;
  	}
  }
  
  if(a_count > d_count)
  {
  	cout<<"Anton"<<endl;
  }
  else if(d_count > a_count) 
  { 
  	cout<<"Danik"<<endl;
  } 
  else
  {
  	cout<<"Friendship"<<endl;
  }

 
	return 0;

}