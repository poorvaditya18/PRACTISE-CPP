#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool checkTarget(vector<int> &arr,int n,int x,int i)
{
   
   if(i==n)
   {
   	return false;
   }
   
   return (arr[i]==x) or checkTarget(arr,n,x,i+1); 
    
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    
    // n --> size of array 
	// x --> target value	
    
    int n,x;
    cin>>n>>x;
  
   vector<int> arr(n);
   for(auto &i:arr)
   {
   	cin>>i;
   }
  
   bool res = checkTarget(arr,n,x,0);
   if(res)
   {
   	cout<<"yes"<<endl;
   }
   else
   {
   	cout<<"No"<<endl;
   }
 
	return 0;

}