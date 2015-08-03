/****************************************/

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
	ll n,max1,min1,max2,min2,max3,min3 ;
	cin >> n >> min1 >> max1 >> min2 >> max2 >> min3 >> max3 ;
	ll res1,res2 ;
	res1 = min(max1,n-min2-min3) ;
	res2 = min(max2,n-res1-min3) ;
	cout << res1 << " " << res2 << " " << n-res1-res2 << endl;
  return 0 ;
}