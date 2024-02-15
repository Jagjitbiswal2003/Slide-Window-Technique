//Given a string s, find the length of the longest substring without repeating characters.

//Example 1:

/*Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.*/
  #include<iostream>
  
  using namespace std;
   int lengthOfLongestSubstring(string s){
         bool visited[256]={ false };
         int l=0, r=0;
          int max_len=0;
                while(r<s.length( ))
                {
                      if(visited[s[r]] == true)
                      {
                            while(visited[s[r]]==true)
                            {
                                  visited[s[l]]=false;
                                  l++;
                            }
                      }
                         visited[s[r]]=true;
                         max_len=max(max_len,r-l+1);
                         r++;
                }
                    return max_len;
                   
   }
  
  int main()
  {
      string str;
      cout<<"Enter a string:"<<endl;
      cin>>str;
      cout<<"Length of longest substring is: "<<lengthOfLongestSubstring(str);
  
  
  
  return 0;
  }