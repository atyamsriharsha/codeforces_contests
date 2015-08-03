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
	int cnt1,cnt2,x,y;
	scanf("%d %d %d %d",&cnt1,&cnt2,&x,&y);
	int l,r;
	l=1;
	r=2000000000;
	while(l<r)
	{
		int m=l+(r-l)/2;
		if((cnt1<=m-m/x)&&(cnt2<=m-m/y)&&((cnt1+cnt2)<=m-m/(x*y)))
		{
			r=m;
		}
		else
		{
			l=m+1;
		}
	}
	printf("%d\n",r);
	return 0;
}