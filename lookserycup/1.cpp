/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;


/*debugging*/

#define out1(x)cout<<#x<<" is "<<x<<endl
#define out2(x,y)cout<<#x<<" is "<<x<<" "<<#y <<" is "<<y<<endl
#define out3(x,y,z)cout<<#x<<" is "<<x<<" "<<#y<<" is "<<y<<" "<<#z<<" is "<<z<<endl;
#define out4(a,b,c,d)cout<<#a<<" is "<<a<<" "<<#b<<"  is "<<b<<" "<<#c<<" is "<<c<<" "<<#d<<" is "<<d<<endl;
#define show(i,a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
#define sz(a) cout<<"size of "<<#a<<" is "<<a.size()
#define exectime() cout<<"execution time "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAX 1000006


/*Frequent functions*/

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pu putchar
#define gu getchar
#define FastIn std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(i=a;i<=b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)

int main()
{
	int n,m ;
	cin >> n >> m ;
	char a[n+1][m+1] ;
	int count1 = 0 ;
	int flag1=0,flag2=0,flag3=0,flag4=0 ;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >> a[i][j] ;
		}
	}
	//cout << "atyam" ;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=m-1;j++)
		{
			flag1 =0 ;
			flag2= 0 ;
			flag3 = 0 ;
			flag4 = 0 ;
		//	cout << a[i][j] << " ";
			if(a[i][j]=='f')
				flag1 = 1 ;
			if(a[i][j]=='a')
				flag2 = 1 ;
			if(a[i][j]=='c')
				flag3 = 1 ;
			if(a[i][j]=='e')
				flag4 = 1 ;
			if(a[i+1][j]=='f')
				flag1 = 1 ;
			if(a[i+1][j]=='a')
				flag2 = 1 ;
			if(a[i+1][j]=='c')
				flag3 = 1 ;
			if(a[i+1][j]=='e')
				flag4 = 1 ;
			if(a[i][j+1]=='f')
				flag1 = 1 ;
			if(a[i][j+1]=='a')
				flag2 = 1 ;
			if(a[i][j+1]=='c')
				flag3 = 1 ;
			if(a[i][j+1]=='e')
				flag4 = 1 ;
			if(a[i+1][j+1]=='f')
				flag1 = 1 ;
			if(a[i+1][j+1]=='a')
				flag2 = 1 ;
			if(a[i+1][j+1]=='c')
				flag3 = 1 ;
			if(a[i+1][j+1]=='e')
				flag4 = 1 ;
            if(flag3==1 && flag4==1 && flag2==1 && flag1==1)
            {
            	count1++ ;
            }
		}
	//	cout << endl ;
	}
    cout << count1 << endl ;
  return 0 ;
}