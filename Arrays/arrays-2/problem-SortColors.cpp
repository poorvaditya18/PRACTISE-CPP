#include<bits/stdc++.h>
using namespace std;

    void sortColors(vector<int>& nums) 
    {
        
        // int z=0,o=0,t=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         z++;
        //     }
        //      if(nums[i]==1){
        //         o++;
        //      }
        //       if(nums[i]==2){
        //           t++;
        //       }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(z!=0){
        //         nums[i]=0;
        //         z--;
        //     }
        //    else if(o!=0){
        //         nums[i]=1;
        //         o--;
        //     }
        //    else if(t!=0){
        //         nums[i]=2;
        //         t--;
        //     }
        // }

        // method 3 : using dutch national flag ---> three pointers approach 
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
         // 0's to the left 2's to the right and 1's middle 
         while(mid<=high)
         {
             switch(nums[mid])
             {
                 case 0:
                        swap(nums[low],nums[mid]);
                        low ++ ;
                        mid ++;
                        break;
                case 1:
                        mid++;
                        break;
                case 2: 
                        swap(nums[mid],nums[high]);
                        high--;
                        break;                
             }
         }
    }

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	// method 1 : sort  o(nlogn)

    // method 2 : maintain frequency  counting sort o(n) + o(n)
 
	return 0;

}