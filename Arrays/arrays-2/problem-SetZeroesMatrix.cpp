 #include<bits/stdc++.h>
 using namespace std;


 // Method 2 -> 
  void setZeroes(vector<vector<int>>& matrix) 
    {
        
        // method 2 : 
     //initialising col0 
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
  
        for (int i = 0; i < rows; i++) 
        {
            //checking if 0 is present in the 0th column or not for each row 
            if (matrix[i][0] == 0) col0 = 0;

            for (int j = 1; j < cols; j++) 
            {
                if (matrix[i][j] == 0) 
                {
                    matrix[i][0] = 0; // last row first col
                    matrix[0][j] = 0; // first row last col
                }
            }
        }

        //traversing in the reverse direction and
        //checking if the row or col has 0 or not
        //and setting values of matrix accordingly.
        for (int i = rows - 1; i >= 0; i--) 
        {
            for (int j = cols - 1; j >= 1; j--) 
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
            if (col0 == 0) // means it is due to the zero in the zeroth column
            {
                matrix[i][0] = 0;
            }

        }

        
    }

 
 int main()
 {
 
 	#ifndef ONLINE_JUDGE
 		freopen("input.txt","r",stdin);
 		freopen("output.txt","w",stdout);
 	#endif	
 	

 	/*	

 	Method 1 : using two dummy arrays 

 	 int m = matrix.size(); // rows
         int n = matrix[0].size(); // columns 

         vector<int> cols(n,-1);
         vector<int> rows(m,-1);

         for(int r=0;r<m;r++)
         {
             for(int c=0;c<n;c++)
             {
                 if(matrix[r][c]==0)
                 {
                     rows[r]=0;
                     cols[c]=0;
                 }
             }
         }
        
            for (int i = 0; i < m; i++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    if (rows[i] == 0 || cols[j]==0) 
                    {
                        matrix[i][j] = 0;
                    }
                 }
            }
 	*/
  
 	return 0;
 
 }