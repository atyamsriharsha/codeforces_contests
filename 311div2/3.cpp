/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAX 1000006


/*Frequent functions*/
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define F first
#define S second

/*loops and initialisation*/
#define ll long long int
#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=a;i<=b;i--)
#define vi vector<ll> 
#define vc vector<char>
#define pii pair<ll,ll> 


int dx[4] ={-1,1,0,0} ;
int dy[4] ={0,0,1,-1} ;

int main()
{
	ll n,temp ;
	cin >> n ;
	vi lengths,energy ;
	pii comb[100001] ;
	rep(i,0,n)
	{
       cin >> temp ;
       lengths.PB(temp) ;
	}
	rep(i,0,n)
	{
		cin >> temp ;
		energy.PB(temp) ;
	}
	rep(i,0,n)
	{
       comb[i].first = lengths[i] ;
       comb[i].second = energy[i] ;
	}
	sort(comb,comb+n) ;
  return 0 ;
}