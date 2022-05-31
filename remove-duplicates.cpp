#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s; 
	cin>>s;
	
	sort(s.begin(),s.end()); 

	cout<<s[0];
	
	for(int i=1; i<s.size(); i++) 
		if(s[i] != s[i-1])
			cout <<s[i];
	
	return 0;
}