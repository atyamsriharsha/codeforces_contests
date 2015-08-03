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
	int n,temp,flag ;
	cin >> n ;
	std::vector<int> v;
	for(int i = 0; i < n; i++)
	{
		cin >> temp ;
		v.PB(temp) ;
	}
	for(int i=0;i<n;i++)
	{
		flag = 0 ;
		for(int j=0;j<n;j++)
		{
			if(v[j]!=j)
			{
				flag =1 ;
				break ;
			}
		}
		if(flag==0)
		{
			cout << "YES" ;
			return 0 ;
		}
		for(int k=0;k<n;k++)
		{
			if(k%2==0)
			{
				if(v[k]==n-1)
					v[k] = 0 ;
				else
				{
					v[k] = (v[k] + 1)%n ;
				}
			}
			else if(k%2==1)
			{
				if(v[k]==0)
					v[k] = n-1 ;
				else
				{
					v[k] = (v[k]-1)%n ;
				}
			}
		}
	}
	cout << "NO" ;
  return 0 ;
}