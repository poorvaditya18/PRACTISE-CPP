#include<bits/stdc++.h>
using namespace std;

int MinCost(vector<int> &h,int n,int i)
{

    // base case 
	// last stone --> cost 0
	if(i==n-1) return 0;
     
    // second last stone --> only i+1 jump
    if(i==n-2) return MinCost(h,n,i+1) + abs(h[i] - h[i+1]);

    return min( (MinCost(h,n,i+1)+abs(h[i]-h[i+1])), (MinCost(h,n,i+2)+abs(h[i]-h[i+2])) );

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 // Frog jump problem -> Given N stones 1,2...N.
 // For each i (1<= i <=n) the height of the stone is hi.
 // Frog is initially at 1.
 // To reach the stone N -> 
 // if frog is currently on stone i then he can jump to  i+1 or i+2.		
 // cost will |hi-hj| is involved . j is the stone to land on.
 // Task : to find the minimum possible total cost incurred before the frog reaches stone N.


 		// Idea is simple -->
		// frog at i --> jump i+1 or i+2

		// recursively find out cost involved in i+1 to n and i+2 to n. and choose the minimum among the two .

		// recurrence ->
		// F(h,n,i) = min{ F(h,n,i+1)+ abs(hi-hi+1), F(h,n,i+2) + abs(hi-hi+2)      }
        int n;cin>>n;
        vector<int> h(n);
        for(auto &i:h)
        {
        	cin>>i;
        }
        cout<<MinCost(h,n,0);

	return 0;

}