#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        

            // apply binary search on each row 

            //if i>0 then grid[i-1][mid] i=0 then -1
            //if i+1<m then grid[i+1][mid] else -1
            //if mid>0 then grid[i][mid-1] else -1
            //if mid+1 < n then  grid[i][mid+1] else -1
            
            int m = mat.size(); // rows
            int n = mat[0].size(); // columns

            for(int i = 0; i< m ;++i)
            {
                int low = 0;
                int high = n - 1;
                while(low<=high)
                {
                    int mid = low + (high-low)/2;

                    int U = i > 0 ? mat[i - 1][mid] : -1;
                    int D = i + 1 < m ? mat[i + 1][mid] : -1;
                    int L = mid > 0 ? mat[i][mid - 1] : -1;
                    int R = mid + 1 < n ? mat[i][mid + 1] : -1;
                     int l1 = max(L,mat[i][0]);
                     int l2 = max(R,mat[i][n-1]);
                     if(mat[i][mid] > max({U,D,L,R}))
                     {
                         return {i,mid};
                     }
                     else if(l1>l2)
                     {
                         high = mid -1;
                     }
                     else
                     {
                         low = mid+1;
                     }

                }
            }
            return {-1,-1};

    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}