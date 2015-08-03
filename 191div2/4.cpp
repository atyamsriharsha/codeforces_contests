/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long

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
#define all(v) v.begin(),v.end()
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)
#define vi vector<int> v
#define vc vector<char> v 

char s[550][550];
int n, m, cnt;
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
char c[1000005];
int xx[1000005];
int yy[1000005];
std::pair<int,int> q[500005];

void bfs(int x, int y) 
{
    int head = 0, tail = 0;
    q[tail].first = x ;
    q[tail].second = y ;
    tail++ ;
    s[x][y] = '#';
    while(head<tail) 
    {
        pair<int,int> u ;
        u.first = q[head].first ;
        u.second = q[head].second ;
        head++ ;
        for(int i = 0; i < 4; ++i) 
        {
            int fx = u.first + dx[i];
            int fy = u.second + dy[i];
            if(fx < 0 || fx >= n || fy < 0 || fy >= m || s[fx][fy] == '#')
                continue;
            s[fx][fy] = '#';
            q[tail].first = fx ;
            q[tail].second = fy ;
            tail++ ;
        }
    }
    for(int i = 0; i < tail; ++i) 
    {
        c[cnt] = 'B';
        xx[cnt] = q[i].first + 1;
        yy[cnt++] = q[i].second + 1;
    }
    for(int i = tail - 1; i > 0; --i) 
    {
        c[cnt] = 'D';
        xx[cnt] = q[i].first + 1;
        yy[cnt++] = q[i].second + 1;
        c[cnt] = 'R';
        xx[cnt] = q[i].first + 1;
        yy[cnt++] = q[i].second + 1;
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0;i<n;++i)
        scanf("%s", s[i]);
    cnt = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m;++j)
            if(s[i][j] == '.')
                bfs( i, j );
    cout << cnt << endl ;
    for(int i = 0; i < cnt; ++i)
    	cout << c[i] << " " << xx[i] << " " << yy[i] << " " << endl ;
    return 0;
}