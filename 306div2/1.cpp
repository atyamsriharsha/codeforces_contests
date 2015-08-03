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

/*functions in program */



int main()
{
   string s,s1 ;
   cin >> s ;
   int length = s.length() ;
   int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0 ;
   int i = 0 ;
   for(i=0;i<length;i++)
   {
      if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A' && i<length-3)
      {
         count1++ ;
         if(s[i+3]=='B' && i <length-4)
            count5++ ;
      }
      if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B' && i<length-3)
      {
         count2++ ;
         if(s[i+3]=='A')
            count6++ ;
      }
      if(s[i]=='A' && s[i+1]=='B' && i<length-2)
         count3++ ;
      if(s[i]=='B' && s[i+1]=='A' && i<length-2)
         count4++ ;
   }
   if(count1!=0 && count2==0)
   {
      if(count4+count3-2*count1>=2)
      {
         cout << "YES" << endl ;
         return 0 ;
      }
      else
      {
         cout << "NO" << endl ;
         return 0 ;
      }
   }
   else if(count2!=0 && count1==0)
   {
      if(count4+count3-2*count2>=2)
      {
         cout << "YES" << endl ;
         return 0 ;
      }
      else
      {
         cout << "NO" << endl ;
         return 0 ;
      }

   }
   else if(count1!=0 && count2!=0)
   {
      if(count5==0 && count6==0)
      {
         if(count4+count3-2*count1-2*count2>=2)
         {
            cout << "YES" << endl ;
            return 0 ;
         }
         else
         {
            cout << "NO" << endl ;
            return 0 ;
         }
      }
      else if(count5>=2 || count6>=2)
      {
         cout << "YES" << endl ;
         return 0 ;
      }
      else if(count6==1 && count5==1)
      {
         
      }

   }
   else if(count1==0 && count2==0)
   {
      if(count3>0 && count4>0)
      {
         cout << "YES" << endl ;
         return 0 ;
      }
      else
      {
         cout << "NO" << endl ;
         return 0 ;
      }
   }
  return 0 ;
}