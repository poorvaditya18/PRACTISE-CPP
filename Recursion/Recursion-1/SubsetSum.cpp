#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> &arr,int n,int idx,int sum,vector<int> &res)
{

    // base case 
    if(idx == n)
    {
       res.push_back(sum);
       return;
    }


    subsetSum(arr,n,idx+1,sum,res); // not choosed 
    subsetSum(arr,n,idx+1,sum+arr[idx],res); // choosen

}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    // CONCEPT OF SUBSET --> 

    /*
        Difference between subarray and subset :

        subarray --> is the contigous part of the array . you can only choose the "Contigous part"

        subset --> you can make the subset fron the larger set.
    */

    // Ques -> Print sum of all the subsets . output can be in any order
    // Example --> input ar[] ={2,3}   .... subsets -> {fi},{2},{3},{2,3}
    // output  --> 0,2,3,5

    // {1,2,3} --> subsets {fi},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}
	
	// for size n --> no of subsets = 2^n	
    
    // Derivation :
    // each element have 2 choices -> pick or not pick 
	// for n elements =--> 2^n choices 	

	int n;
	cin>>n;

    vector<int> res;
	vector<int> arr(n);

	for(auto &i:arr)
	{
		cin>>i;
	}
    
	subsetSum(arr,n,0,0,res);
    
    for(int i=0;i<res.size();i++)
    {
    	cout<<res[i]<<" ";
    }

	return 0;

}