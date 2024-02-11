#include<iostream>
using namespace std;
int twosum(int arr[],int n,int target)
{
      if(n==0 && n==1)
        return {};
      int l=0; 
      int h=n-1;
        while(l<h){
              if(arr[l]+arr[h]==target)
                return l;
              else if(arr[l]+arr[h]>target)
                h--;
                else
                 l++;

        }

}





int main()
{
    int n;
    cout<<"enter the length of array:";
    cout<<endl;
    cin>>n;
    int target;
    cout<<"enter the target:";
    cout<<endl;
    cin>>target;
    int arr[n];
     cout<<"enter array elements:";
     cout<<endl;
      for(int i=0;i<n;i++)
       cin>>arr[i];
      cout<<"The first index is "<< twosum(arr,n,target) <<" in which we find two sum";


return 0;
}