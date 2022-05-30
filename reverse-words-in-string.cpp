
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    string reverseWords(string s1) 
    { 
        string s2;
        int r;
        int len = s1.length();
    
        for(int i=len-1;i>=0;i--)
        {
            if(s1[i] == '.')
            {
                r = len - i;
                len = i - 1;
                s2.append(s1.substr(i+1,r));
                s2.append(".");
            }
        }
        s2.append(s1.substr(0,len+1));
        return s2;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s1;
        cin >> s1;
        Solution obj;
        cout<<obj.reverseWords(s1)<<endl;
    }
}