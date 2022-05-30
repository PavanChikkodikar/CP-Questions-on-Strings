
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string rremove(string s)
    {
       string s2;
       int len = s.length();
       int l=0,r,flag,last=0;
       
       for(int i=0;i<len;)
       {
           int j = i+1;
           flag = 0;
           while((s[i] == s[j]) && (j < len))
           {
               j++;
               flag = 1;
               last = 1;
           }
           if(flag == 1)
           {
               l = j;
               i = j;
           }
           else{
               r= i;
               s2.append(s.substr(l,(r-l+1)));
               l = j;
               i++;
           }
       }
       if(last == 0)
            return s2;
       else
            return rremove(s2);
    }
};


int main() 
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  