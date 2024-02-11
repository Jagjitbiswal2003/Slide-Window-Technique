//Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
//A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 //Example 1:
//Input: s = "abc", t = "ahbgdc"
//Output: true

   #include<iostream>
   using namespace std;
    bool isSubsequence(string s, string t) {
        int i=0; int j=0; int count=0;
             while(i<t.length()){
                   if(t[i]==s[j]){
                        i++;
                        j++;
                        count++;
                   }
                      else{
                           i++;
                      }
                          
             }
                    if(count==s.length())
                       return true;

                       return false;
    }
   
   int main()
   {
       string s; string t;
        cout<<"Enter the source string: ";
        cout<<endl;
        cin>>t;
         cout<<"Enter the test string: ";
        cout<<endl;
        cin>>s;
         cout<<"Is Subsequence "<<isSubsequence(s,t); //1-true 0-false

   return 0;
   }