/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
typedef vector<int> vi ;
#define pb push_back 
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

bool ispal(string s1)
{
	int length = s1.length() ;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s1[length-i-1])
		{
			return 0 ;
		}
	}
	return 1 ;
}

int main()
{
	string s,s1 ;
	int length,div1,k ;
	cin >> s ;
	cin >> k ;
	length = s.length() ;
//	cout << length << endl ;
	if(length%k!=0)
	{
		cout << "NO" << endl ;
	}
	else
	{
       div1 = length/k ;
  //     cout << div1 << endl ;
       for(int i=0;i<length;i++)
       {
         s1 = s.substr(0,div1) ;
         if(!ispal(s1))
         {
            cout << "NO" << endl ;
            return 0 ;
         }
         s.erase(0,div1) ;
       }
       	cout << "YES" << endl ;
	}
  return 0 ;
}