#include<bits/stdc++.h>
using namespace std;

  int search(vector<int>& arr, int target) 
    {

        int n = arr.size();
        int low = 0, high = n-1;
        long int mid = -1;
        while(low <= high){
            mid = low + (high-low)/2;
            if(arr[mid] == target) return  mid;
            if(arr[mid] >= arr[low]){
                /* left half sorted */
                if(target >= arr[low] && target < arr[mid]) high = mid-1;
                else low = mid+1;
            }
            else{
                /* right half is sorted */
                if( target > arr[mid] && target <= arr[high]) low = mid+1;
                else high = mid-1;
            }
        }
        return -1;
    }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}