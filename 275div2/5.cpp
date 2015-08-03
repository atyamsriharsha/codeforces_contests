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

int main()
{
	int n ;
	ll res ;
	ll f[10],g[10] ;
	ll mo = 1000000007;
	string a[100010] ;
	string s,s1 ;
	cin >> s >> n;
	for(int i=1;i<=n;i++)
	{
       cin >> s1 ;
		a[i] = s1 ;
	}
    for(int i=0; i<10; i++)  
    	f[i]=i,g[i]=10;
	for(int i=n; i>=1; i--)
	{
		ll ff=0,gg=1,len;
		len = a[i].length() ;
	    for(int j=3; j<len; j++)
		{
			int c = a[i][j]-'0';
			ff=((ff*g[c])+f[c])%mo;
			gg=(gg*g[c])%mo;
		}
		f[a[i][0]-'0']=ff;
		g[a[i][0]-'0']=gg;
	}
	for(int i=0,len=s.length(); i<len; i++)
	   res=((res*g[s[i]-'0'])%mo+f[s[i]-'0'])%mo;
	printf("%d",int(res));
  return 0 ;
}