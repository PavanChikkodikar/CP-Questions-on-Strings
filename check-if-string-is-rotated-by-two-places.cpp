
#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:

    bool isRotated(string s1, string s2)
    {
        string temp1,temp2;
        int len1 = s1.length();
        int len2 = s2.length();
        if(len1 < 2 || len2 < 2)
            if(s1 == s2)
                return true;
            else 
                return false;
        //right rotation stored in temp1
        temp1.append(s1.substr(2,len1-2));
        temp1.append(s1.substr(0,2));
        
        //left rotation stored in temp2
        temp2.append(s1.substr(len1-2,2));
        temp2.append(s1.substr(0,len1-2));
        
        if(temp1 == s2 || temp2 == s2)
            return true;
        else
            return false;
    }

};


int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
 