#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
 ll n;
 cin>>n;

 
 set<ll> res;
 while(n>0)
 {
 	int num;
 	cin>>num;
 	res.insert(num);
 	n--;
 }
 
 auto it = res.begin();
while(it!=res.end())
{
  it++;
}

cout<<*it<<endl;

	return 0;

}