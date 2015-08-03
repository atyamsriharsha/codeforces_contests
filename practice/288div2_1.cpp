/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long

/*debugging*/

#define out1(a)cout<<#a<<" is "<<a<<endl
#define out2(a,b)cout<<#a<<" is "<<a<<" "<<#b <<" is "<<b<<endl
#define out3(a,b,z)cout<<#a<<" is "<<a<<" "<<#b<<" is "<<b<<" "<<#z<<" is "<<z<<endl;
#define out4(a,b,c,d)cout<<#a<<" is "<<a<<" "<<#b<<"  is "<<b<<" "<<#c<<" is "<<c<<" "<<#d<<" is "<<d<<endl;
#define show(i,a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
#define sz(a) cout<<"size of "<<#a<<" is "<<a.size()
#define eaectime() cout<<"eaecution time "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAa 1000006


/*Frequent functions*/

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pu putchar
#define gu getchar
#define FastIn std::ios::sbnc_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)
#define vi vector<int> v
#define vc vector<char> v 

int main()
{
	int res[1005][1005] ;
	int n,m,k,a,b ;
	cin >> n >> m >> k ;
	//int res[n+1][m+1] ;
	int anse = 0 ;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; ++j)
		{
			res[i+1][j+1] = 0 ;
		}
	}
	for(int i=0;i<k;i++)
	{
		cin >> a >> b ;
        res[a][b] = 1 ;
        if(res[a][b-1] && res[a-1][b] && res[a-1][b-1])
		{
			anse=i+1;
			cout << anse << endl ;
			return 0 ;
		}
		if(res[a+1][b+1] && res[a][b+1] && res[a+1][b])
		{
			anse=i+1;
			cout << anse << endl ;
			return 0 ;
		}
		if(res[a][b-1] && res[a+1][b] && res[a+1][b-1])
		{
			anse=i+1;
			cout << anse << endl ;
			return 0 ;
		}
		if(res[a][b+1] && res[a-1][b+1] && res[a-1][b])
		{
			anse=i+1;
			cout << anse << endl ;
			return 0 ;
		}
	}
	cout << anse << endl ;
	return 0 ;
}