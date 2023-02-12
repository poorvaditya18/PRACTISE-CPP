#include<bits/stdc++.h>
using namespace std;

int sumOfElements(vector<int> v,int idx,int n)
{

	if(idx==n-1)
	{
		return v[idx];
	}

	return v[idx] + sumOfElements(v,idx+1,n);

}

int maxElement(vector<int> v,int idx,int n)
{
	if(idx==n-1)
	{
		return v[idx];

	}

	return max(v[idx],maxElement(v,idx+1,n));
}


void printArray(vector<int> v,int idx,int n)
{

	if(idx==n)
	{
       return;
	}

	cout<<v[idx]<<" ";

	printArray(v,idx+1,n);
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	int n;
	cin>>n;
	vector<int> v(n);
    
    for(auto &i:v)
    {
    	cin>>i;
    }

    printArray(v,0,n);
    cout<<"\n";
    cout<<maxElement(v,0,n);
    cout<<'\n';
    cout<<sumOfElements(v,0,n);
	return 0;

}