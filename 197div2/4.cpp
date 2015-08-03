/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
typedef vector<int> vi ;
#define pb push_back 
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

const int maxn= 100000 + 100 ; 
int t[maxn*8],a[maxn],l[maxn],r[maxn],q[maxn],ans[maxn],n,m; 
inline int C(int x,int y) {return x & (1 << y);} 

void build(int l,int r,int p)
{
    if(l==r) 
    {
        t[p]=ans[l]; 
        return ; 
    }
    int mid= l+r >> 1;
    build(l,mid,p<<1) ;
    build(mid+1,r,p<<1|1) ; 
    t[p] = t[p<<1] & t[p<<1|1] ; 
}

int query(int l,int r,int x,int y,int p)
{
    if(l==x && r==y) 
        return t[p] ; 
    int mid = l+r >> 1 ;
    if(y<=mid)  
        return query(l,mid,x,y,p<<1) ;
    if(x>mid) 
        return query(mid+1,r,x,y,p<<1|1) ; 
    return query(l,mid,x,mid,p<<1) & query(mid+1,r,mid+1,y,p<<1|1) ;  
}

int main()
{
    cin>>n>>m ;
    for(int i=1; i<=m; ++i) 
        scanf("%d%d%d",l+i,r+i,q+i);
    for(int bit=0; bit<=30; ++bit)
    {
        memset(a,0,sizeof(a)); 
        for(int i=1; i<=m ; ++i) 
        {
            if(C(q[i],bit))
            { 
                ++a[l[i]] ;
                --a[r[i]+1] ;
            } 
        }
        for(int i=1; i<=n; ++i) 
            a[i] += a[i-1] ;  
        for(int i=1; i<=n; ++i)
         if(a[i])
         { 
            ans[i] |= 1<<bit ;
         }  
    }
    build(1,n,1) ; 
    int flag  = 1; 
    for(int i=1; i<=m; ++i)
    { 
        if(query(1,n,l[i],r[i],1)!=q[i])
        {
          flag = 0 ;
          break ; 
        }
    }
    if(flag)
    {
      cout << "YES" << endl;
    }
    else 
    {
      cout << "NO" << endl;
    }
    if(flag) 
    {
        for(int i=1;i<=n; ++i)
        {
          if(i!=n)
            printf("%d ",ans[i]) ;
          else
          {
            cout << ans[i] << endl ;
          } 
        }
    }
    return  0 ;
}