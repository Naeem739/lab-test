#include<bits/stdc++.h>
using namespace std; 
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            string temp = s.substr(i, len); 
            map<char,
}

int main()
{
	   string s; cin>> s; 
	   subString(s,s.size()); 
}
