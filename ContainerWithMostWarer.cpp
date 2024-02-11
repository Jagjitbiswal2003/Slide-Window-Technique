// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
#include <iostream>
#include <math.h>
using namespace std;
int Max_Water(int height[], int n)
{
    int l = 0;
    int h = n - 1;
    int max_area = 0;
    while (l < h)
    {
        int len = h - l;
        int min_h = 0;
        if (height[l] > height[h])
        {
            min_h = height[h];
            h--;
        }
        else
        {
            min_h = height[l];
            l++;
        }
        int area = len * min_h; // area=length*min height
        max_area = max(area, max_area);
    }
    return max_area;
}
    

int main()
{
    int n;
    cout << "enter the length of array:";
    cout << endl;
    cin >> n;
    int height[n];
    cout << "enter array elements:";
    cout << endl;
    for (int i = 0; i < n; i++)
        cin >> height[i];
       cout<<"In Container "<<Max_Water(height,n)<<" sq.unit Water can store";
         

    return 0;
}