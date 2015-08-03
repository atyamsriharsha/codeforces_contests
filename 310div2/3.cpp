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
	int n,k,m,temp ;
	cin >> n >> k ;
	int ans = 2 * n - k + 1;
    for(int i = 0; i <k ; i++)
    {
        cin >> m ;
        for(int i = 0;i<m;i++)
        {
            cin >> temp ;
            if(temp ==i+1)
                ans=ans-2;
        }
    }
    cout << ans << endl ;
  return 0 ;
}