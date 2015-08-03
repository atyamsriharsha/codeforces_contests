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

int a[501][501] ;
int main()
{
   int n,m,q ;
   cin >> n >> m >> q ;
   int x,y,max1,max2,count1=0 ;
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=m;j++)
      {
         cin >> a[i][j] ;
      }
   }
   for(int i=0;i<q;i++)
   {
      cin >> x >> y ;
      a[x][y] = 1 - a[x][y] ;
      max2 = -1 ; 
      for(int i=1;i<=n;i++)
      {
         count1 = 0 ;
         max1 = -1 ;
         for(int j=1;j<=m;j++)
         {
            if(a[i][j])
            {
               count1++ ;
            }
            else
            {
               count1 = 0 ;
            }
             max1 = max(count1,max1) ;
         }
         max2 = max(max1,max2) ;
         if(max2 == m)
            break ;
      }
      cout << max2 << endl ;
   }
  return 0 ;
}

