
#include <iostream>
#include <string>
#include <map>
using namespace std;


int romanToDecimal(string &S) 
{
    //created the hash-map
    map<char, int> roman;
    roman.insert(pair<char, int>('I', 1));
    roman.insert(pair<char, int>('V', 5));
    roman.insert(pair<char, int>('X', 10));
    roman.insert(pair<char, int>('L', 50));
    roman.insert(pair<char, int>('C', 100));
    roman.insert(pair<char, int>('D', 500));
    roman.insert(pair<char, int>('M', 1000));
    
    int len = S.length();
    int num;
    int sum=0;
    
    for(int i=0;i<len;)
    {
        if(i == (len-1) || roman[S[i]] >= roman[S[i+1]]){
            num = roman[S[i]];
            i++;
        }
        else{
            num = roman[S[i+1]] - roman[S[i]];
            i = i+2;
        }
        sum = sum + num;
    }
    return sum;
}


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}
