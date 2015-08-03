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

struct  players
{
	int number ;
	int count1 ;
	int flag = 0 ;
	int yellow_count =0;
	int red_count = 0  ;
	string team ;
};

int main()
{
	string team1,team2 ;
	cin >> team1 >> team2 ;
	int n ;
	cin >> n ;
	players v[100] ;
	players v1[100] ;
	for(int i = 0; i < n; ++i)
	{
	    int t ;
	    cin >> t ;
	    char p ;
	    cin >> p ;
	    int m ;
	    cin >> m ;
	    char card ;
	    cin >> card ;
	    if(p=='h')
	    {
	        v[m].team = team1;
	        v[m].count1 = t ;
	        if(card=='y' && v[m].yellow_count<1)
	           v[m].yellow_count += 1 ;
	        else
	        {
	           if(v[m].flag!=1)
	           {
                  v[m].red_count = 1 ;
                  v[m].flag = 1 ;
                  cout << v[m].team << " " ;
                  cout << m  << " " << t;
                  cout << endl ;
               }
	        } 
	   }
	   else
	   {
	     	v1[m].team = team2 ;
	        v1[m].count1 = t ;
	        if(card=='y' && v1[m].yellow_count<1)
	           v1[m].yellow_count += 1 ;
	        else
	        {
	           if(v1[m].flag!=1)
	           {
                 v1[m].red_count = 1 ;
                 v1[m].flag = 1 ;
                 cout << v1[m].team << " " ;
                 cout << m  << " " << t;
                 cout << endl ;
               }
	       } 
	   }
   }
  return 0 ;
}