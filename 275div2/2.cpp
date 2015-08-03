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
	int n,c,r,p ;
	cin >> n ;
	for(;n--;) 
	{
        scanf("%d",&c);
        if(c) r+=2-p;
        p=c;
    }
    printf("%d\n",max(r-1,0));
  return 0 ;
}




