#include<iostream>
#include <climits>
using namespace std;
//Given an array of positive integers nums and a positive integer target, return the minimal length of a 
//subarraywhose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

//Example 1:

//Input: target = 7, nums = [2,3,1,2,4,3]
//Output: 2
//Explanation: The subarray [4,3] has the minimal length under the problem constraint.
   
  
  int Minimumsubarraysum(int nums[], int target,int n){
         int i=0,j=0;
           int sum=0;
           int ans=INT_MAX;
             while(j<n){
                  sum=sum+nums[j];

                  while(sum>=target)
                  {
                       sum=sum-nums[i];
                       ans=min(ans,j-i+1);
                       i++;
                  }
                     j++;
             }
               if(ans==INT_MAX)
                return 0;

                 return ans;
  }

    



int main()
{
    int n,target;
    cout<<"Enter the length of array:"<<endl;
    cin>>n;
    cout<<"Enter the target:"<<endl;
    cin>>target;
    int arr[n];
      cout<<"enter array elements:"<<endl;
      for(int i=0;i<n;i++)
        cin>>arr[i];
cout<<"the minimum length of array is: "<<Minimumsubarraysum(arr,target,n)<<" to find target";


return 0;
}