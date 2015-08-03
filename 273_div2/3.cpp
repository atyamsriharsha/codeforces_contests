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
	int r,g,b ;
	cin >> r >> g >> b ;
	int min1 = min(r,min(g,b)) ;
    //cout << min1 ;
	int count1 ;
	if(r==g && g==b)
	{
		cout << b << endl ;
		return 0 ;
	}
	if(min1 ==r)
	{
	//	cout << "atyam" ;
	 	g = g-r ;
	 	b = b-r ;
	   if(abs(g-b)>min(g,b))
	   	  count1 = min(g,b) ;
	   	else
	   		count1 = abs(g-b) ;
	   	cout << min1 + count1 << endl ;
	   return 0 ;
	 }
	 if(min1 ==g)
	 {
	 //	cout << "atyt" ;
	 	b= b-g ;
	 	r = r -g ;
	 	if(abs(r-b)>min(r,b))
	   	  count1 = min(r,b) ;
	   	else
	   		count1  = abs(r-b) ;
	   	cout << min1 + count1 << endl ;  
	   return 0 ;
	 }
	 if(min1 ==b)
	 {
	// 	cout << "atyam1" << endl ;
	// 	cout << min1 << endl ;
	 	g = g-b ;
	 	r = r-b ;
	 //	cout << g << " " << r << endl ;
	 //	cout << abs(g-r) << endl ;
	 	if(abs(g-r)>min(g,r))
	 	{
	 	//	cout << min(g,r) << endl ;
	   	  count1 = min(g,r) ;
	 	}
	 	else
	 	{
	 		count1 = abs(g-r) ;
	 	}
	   //	cout << count1 << endl;
	   	cout << min1 + count1 << endl ;
	   return 0 ;
	 }
  return 0 ;
}

