#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	     int ans = -1;
    // In Case now row has any one then if we return 0 it is wrong so we are taking ans= -1
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        if (count > max)
        {
            max = count;
            ans = i;
        }
    }
    return ans;
	}

};
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	// GFG -> find maximum number of 1's in a sorted binary row.
 
	return 0;

}