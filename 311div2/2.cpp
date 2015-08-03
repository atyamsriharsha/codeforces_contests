/*atyam*/

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
#define repi(i,a,b) fornll i=a;i<=b;i--)
#define vi vector<ll>
#define vd vector<double> 
#define vc vector<char> 
#define pii pair<ll,ll> 
int dx[4] ={-1,1,0,0} ;
int dy[4] ={0,0,1,-1} ;


int main()
{
	ll temp,n,w ;
	cin >> n >> w ;
    vi p ;
    rep(i,0,2*n)
    {
    	cin >> temp ;
    	p.PB(temp) ;
    }
    sort(all(p)) ;
    double min1 = p[0] ;
    double min2 = double(p[n])/2 ;
    double min3 = min(min1,min2) ;
    cout << fixed << std::setprecision(6) << min(3*min3*n,double(w))  << endl ;
	return 0 ;
}