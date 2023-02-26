#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int m = matrix.size(); //rows 
        int n = matrix[0].size(); //columns
        int total = m*n;
        int count =0;
        int StrCol = 0;
        int StrRow = 0;
        int EndCol = n-1;
        int EndRow = m-1;

        while(count < total)
        {
            /* print first row */
        for(int index = StrCol; index <= EndCol && count < total; index++){
            ans.push_back(matrix[StrRow][index]); // 1 2 3 
            count++;
        }
        StrRow++;  //  strrow =  1

        /* print last column */
        for(int index = StrRow; index <= EndRow && count < total; index++){
            ans.push_back(matrix[index][EndCol]); // 1 2 3 --> 6 9 
            count++;
        }
        EndCol--; // endcol = 

        /* print last row-backwards */
        for(int index = EndCol; index >= StrCol && count < total; index--){
            ans.push_back(matrix[EndRow][index]); // 1 2 3 --> 6 9 
            count++;
        }
        EndRow--;

        /* print first Col-backwards */
        for(int index = EndRow; index >= StrRow && count < total; index--){
            ans.push_back(matrix[index][StrCol]);
            count++;
        }
        StrCol++;
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
	
 
	return 0;

}