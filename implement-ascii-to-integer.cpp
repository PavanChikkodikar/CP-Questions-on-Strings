
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
   
    int atoi(string s) 
    {
        int sign = 0;
        int len = s.length();
        long int out;
        for(int i=0;i<len;i++)
        {
            if(i == 0 && s[i] == 45)
            {
                sign = 1;
                continue;
            }
            if(s[i] >= '0' && s[i] <= '9')
            {
                if(i == 0)
                    out = s[i] - 48;
                else{
                    out = out * 10;
                    out = out + (s[i] - 48);
                }
            }
            else{
                return -1;
            }
        }
       if(sign == 1)
            out = 0 - out;
       return out;
        
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  