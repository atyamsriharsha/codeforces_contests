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
	bool flag1 = false ;
	long long int n,m,count1=0 ;
	cin >> n >> m ;
	long long int l,r,ref ;
	vector<long long int> v,bridge ;
	pair<long long int,long long int>p[200001] ;
	for(long long int i=0;i<n;i++)
	{
		cin >> l >> r ;
		p[i].first = l ;
		p[i].second = r ;
	}
	for(long long int i=1;i<n;i++)
	{
		v.PB(p[i].first-p[i-1].second) ;
	}
	sort(all(v)) ;
	for(long long int i=0;i<m;i++)
	{
		cin >> ref ;
		bridge.PB(ref) ;
	}
	sort(all(bridge)) ;
	for(std::vector<long long int>::iterator it=v.begin(),it1=bridge.begin();it!=v.end(),it1!=bridge.end();it++,it1++)
	{
		if(flag1==0)
		{
			it1++ ;
			flag1 = 1 ;
		}
		if(v[*it]<bridge[*it1])
		{
			count1++ ;
		}
	}
	if(count1==n-1)
	{
		cout << "YES" << endl ;
	}
	else
	{
		cout << "NO" << endl ;
	}
  return 0 ;
}