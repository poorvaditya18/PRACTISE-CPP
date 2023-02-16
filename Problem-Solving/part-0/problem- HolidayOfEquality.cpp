#include<bits/stdc++.h>
using namespace std;


int solve(int n,vector<int>&arr)
{

	if(n==1)
	{
		return 0;
	}

	//n >1 
	sort(arr.begin(),arr.end()); 

	int maxEle = arr[n-1];

	int minCount =0;
	for(int i=0;i<n;i++)
	{
		minCount += abs(maxEle-arr[i]);
	}
 
 // T.C --> O(nlogn) + O(n) = O(nlogn)


	return minCount;
    
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 

   int n;
   cin>>n;
   
   vector<int> arr(n);
   for(auto &i:arr)
   {
   	cin>>i;
   }

   cout<<solve(n,arr);


	return 0;

}