#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	/*

    n -> no of numbers 
    n -> even then ... (n/2) odds
    n-> odds then ... (n/2)+1 odds

    we want to combine these formula

    For no of odds 
    if n = even then  no of odds = n/2
    if n = odd then  no of odds = (n+1)/2 

    For no of evens 
    if n = even then no of even = n/2
    if n= odd then no of even = n/2

    these both are same if you see carefully it will work for both even and odd 
    if  n = even , n= odd ... no of odds = (n+1)/2
    for even -> n/2
     

    k <= no of odds ... then kth number is =  2(k-1)
    k > no of odds ... then kth number is => update  k = k- no of odds , kth number is 2K

	*/
    ll n , k;
    cin>>n>>k;

    ll odds = (n+1)/2;
    ll even = n/2;
    
    if(k<=odds)
    {
    	cout<<2*k-1;
    }
    else
    {
    	cout<<(k-odds)*2;
    }
 
	return 0;

}