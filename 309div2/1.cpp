

#include <bits/stdc++.h>
using namespace std ;
#define ll long long



int main()
{
	int i ;
	string s ;
	cin >> s ;
	int flag1 = 0 ;
	int length1 = s.length() ;
	for(i = 0;i<length1;i++)
	{
		if(s[i]==s[i+1])
			flag1++ ;
	}
	cout << 26*(length1+1) - length1 ;


  return 0 ;
}