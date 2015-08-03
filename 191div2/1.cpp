#include <bits/stdc++.h>
using namespace  std ;
int main()
{
   int n,temp,i,max1=-1,p,j,k,count1=0 ;
   cin >> n ;
   vector<int> v ;
   v.push_back(0) ;
   for(i=0;i<n;i++)
   {
     cin >> temp ;
     v.push_back(temp);
   }
   for(i=1;i<=n;i++)
   {
     for(j=i;j<=n;j++)
     {
       count1 = 0 ;
       for( p=i;p<=j;p++)
       {
          v[p] = 1-v[p] ;
       }
       for( k=0;k<=n;k++)
       {
         if(v[k]==1)
         count1++ ;
       }
       for(int p=i;p<=j;p++)
       {
          v[p] = 1-v[p] ;
       }
       max1 = max(max1,count1) ;
     }
   }
   cout << max1 << endl ;
   return 0 ;
}