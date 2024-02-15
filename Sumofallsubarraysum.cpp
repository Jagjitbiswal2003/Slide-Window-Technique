/*Given an array arr[] and an integer K, the task is to calculate the sum of
all subarrays of size K.

Examples:

Input: arr[] = {1, 2, 3, 4, 5, 6}, K = 3
Output: 6 9 12 15
Explanation:
All subarrays of size k and their sum:
Subarray 1: {1, 2, 3} = 1 + 2 + 3 = 6
Subarray 2: {2, 3, 4} = 2 + 3 + 4 = 9
Subarray 3: {3, 4, 5} = 3 + 4 + 5 = 12
Subarray 4: {4, 5, 6} = 4 + 5 + 6 = 15 */
#include <iostream>
using namespace std;
int subarraysum(int arr[],int n, int k)
{ // k-window length
     int sum = 0; 
  
    // Consider first subarray of size k 
    // Store the sum of elements 
    for (int i = 0; i < k; i++) 
        sum += arr[i]; 
  
    // Print the current sum 
    cout << sum << " "; 
  
    // Consider every subarray of size k 
    // Remove first element and add current 
    // element to the window 
    for (int i = k; i < n; i++) { 
          
        // Add the element which enters 
        // into the window and subtract 
        // the element which pops out from 
        // the window of the size K 
        sum = (sum - arr[i - k]) + arr[i]; 
          
        // Print the sum of subarray 
        cout << sum << " "; 
    } 
} 
  

  


int main()
{
      int n,k;
    cout<<"Enter the length of array:"<<endl;
    cin>>n;
    cout<<"Enter the length of window:"<<endl;
    cin>>k;
      int arr[n];
      cout<<"enter array elements:"<<endl;
      for(int i=0;i<n;i++)
        cin>>arr[i];
      subarraysum(arr,n,k); 
       return 0;
}
