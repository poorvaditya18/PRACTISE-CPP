#include<bits/stdc++.h>
using namespace std;

  void transpose(vector<vector<int>>&mat)
    {
        int n= mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp = mat[j][i];
                mat[j][i] = mat[i][j];
                mat[i][j] = temp;
            }
        }
    }

    void reflect(vector<vector<int>>&mat)
    {
        int n = mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp = mat[i][j];
                mat[i][j] = mat[i][n-j-1];
                mat[i][n-j-1] = temp;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) 
    {
         transpose(matrix);
         reflect(matrix);
    }

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif    
    
 
    return 0;

}