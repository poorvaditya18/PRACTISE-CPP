#include<bits/stdc++.h>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        // idea -> imagine as an flaten sorted array with imaginary linear indexing 

       // columns ->
       int m = matrix[0].size();
       
       // rows -->
       int n = matrix.size(); 

       int low = 0;
       int high = (n*m)-1;

       while(low<=high)
       {
           int mid = low + (high-low)/2;
           if(matrix[mid/m][mid%m]==target)
           {
            return true;
           }
           else if(matrix[mid/m][mid%m]<target)
           {
               low = mid + 1;
           }
           else 
           {
               high = mid -1;
           }
       }
    return false;
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	// 74. Search a 2D Matrix
 
	return 0;

}