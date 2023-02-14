#include<bits/stdc++.h>
using namespace std;

int countPaths(int i,int j, int m,int n)
{
	//base case 
	if((i==m-1) and (j==n-1)) return 1;
	// if they cross the matrix anyhow then return 0;
	if(i>=m or j>=n) return 0;

	return countPaths(i,j+1,m,n) + countPaths(i+1,j,m,n);
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    // given m x n grid . count all the possible paths from top left (0,0) to bottom right (m-1,n-1)
	// constraint -> you can either move only right or down 
    int m,n;
    cin>>m>>n;
    cout<<countPaths(0,0,m,n);

	return 0;

}