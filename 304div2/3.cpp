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

int main()
{
	int n,count1=0,temp ;
	cin >> n ;
	int k1 ;
	cin >> k1 ;
	std::queue<int>s1,s2 ;
	//cout << s1.empty() ;
	for(int i=0;i<k1;i++)
	{
       cin >> temp ;
       s1.push(temp) ;
	}
	int k2 ;
	cin >> k2 ;
	for(int i = 0; i < k2; ++i)
	{
		cin >> temp ;
		s2.push(temp) ;
	}
	while(1)
	{
		if(s1.empty()==1 || s2.empty()==1)
			break ;
		int a1 = s1.front() ;
		int a2 = s2.front() ;
		//cout << a1 << " " << a2  << endl;
		if(a1>a2)
		{
			s1.pop() ;
			s2.pop() ;
			s1.push(a2) ;
			s1.push(a1) ;
		}
		else
		{
			s1.pop() ;
			s2.pop() ;
			s2.push(a1) ;
			s2.push(a2) ;
		}
		count1+=1 ;
		if(count1>10000)
		{
			cout << "-1" << endl ;
			return 0 ;
		}
	}
	cout << count1 << " " ;
	if(s1.empty()==1)
	{ 
      cout << 2 << endl ;
	}
	else
	{
		cout << 1 << endl ;
	}
  return 0 ;
}