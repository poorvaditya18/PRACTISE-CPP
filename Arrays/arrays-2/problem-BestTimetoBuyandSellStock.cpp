#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) 
    {
        // method 1 : using greedy approach time o(n2)
        // method 2 : at each step maintaining minimum value and evaluating maxProfit

        // maxProfit --> when you buy at minimumPrice and sell at maxPrice ...therefore we maintain minimum and evaluate maxProfit


        int maxProfit = 0;
        int mini = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
             mini = min(mini, prices[i]);
            maxProfit = max(maxProfit, prices[i] - mini);
        } 
        return maxProfit;    
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}