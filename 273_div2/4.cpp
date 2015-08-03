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

int mod = (int) 1e9 + 7;
int R, G;
int dp[200003];   

int main()
{
    cin >> R >> G;
    int H;
    for(int i=1;i<=1000;++i)
    {
        if((i*(i+1))/2 > R+G )
        {
            H = i-1;
            break;
        }
    }
    if(R > G) swap(R,G);
    dp[0] = dp[1] = 1;
    for(int h=2;h<=H;++h)
    {
        int cur = (h*(h+1))/2;
        for(int r=R;r>=0;--r)
        {
            int tmp = 0;
            if(r-h>=0) tmp = (tmp + dp[r-h])%mod;
            if(cur-r-h>=0) tmp = (tmp + dp[r])%mod;
            dp[r] = tmp;
        }
    }
    int ans = 0, tow = (H*(H+1))/2;
    for(int r=R;r>=0 && tow-r<=G;--r)
    {
        ans = (ans + dp[r])%mod;
    }
    cout << ans << endl;
    return 0;
}