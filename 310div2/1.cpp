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
#define vi vector<ll> v
#define vc vector<char> v
#define pii pair<ll,ll> p


int dx[4] ={-1,1,0,0} ;
int dy[4] ={0,0,1,-1} ;

int main()
{
  int n ;
  cin >> n ;
  string s ;
  cin >> s ;
  int res= 0;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='1')
      res++ ;
    else
      res-- ;
  }
  cout << abs(res) ;
  return 0 ;
}