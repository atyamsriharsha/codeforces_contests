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
	int n ,x,n1;
	cin >> n ;
	n1 = n ;
	std::vector<string> v;
	x  = n%10 ;
	    if(n==10)
	    {
          cout << "ten" ;
          return 0 ;
	    }
	    if(n==1)
		{
			cout << "one" ;
			return 0 ;
		}
		else if(n==2)
		{
			cout << "two" ;
			return 0 ;
		}
		else if(n==3)
		{
			cout << "three" ;
			return 0 ;
		}
		else if(n==4)
		{
			cout << "four" ;
			return 0 ;
		}
		else if(n==5)
		{
			cout << "five" ;
			return 0 ;
		}
		else if(n==6)
		{
			cout << "six" ;
			return 0 ;
		}
		else if(n==7)
		{
			cout << "seven" ;
			return 0 ;
		}
		else if(n==8)
		{
			cout << "eight" ;
			return 0 ;
		}
		else if(n==9)
		{
			cout << "nine" ;
			return 0 ;
		}
		else if(n==0)
		{
			cout << "zero" ;
			return 0 ;
		}

		if(x==1)
		{
			v.PB("one") ;
		}
		else if(x==2)
		{
			v.PB("two") ;
		}
		else if(x==3)
		{
			v.PB("three") ;
		}
		else if(x==4)
		{
			v.PB("four") ;
		}
		else if(x==5)
		{
			v.PB("five") ;
		}
		else if(x==6)
		{
			v.PB("six") ;
		}
		else if(x==7)
		{
			v.PB("seven") ;
		}
		else if(x==8)
		{
			v.PB("eight") ;
		}
		else if(x==9)
		{
			v.PB("nine") ;
		}
		else if(x==0)
		{
			v.PB("");
		}
		n = n/10 ;
		x = n%10 ;
		if(x==0)
		{
			v.PB("") ;
		}
	    if(x==2)
		{
			v.PB("twenty") ;
		}
		else if(x==3)
		{
			v.PB("thirty") ;
		}
		else if(x==4)
		{
			v.PB("forty") ;
		}
		else if(x==5)
		{
			v.PB("fifty") ;
		}
		else if(x==6)
		{
			v.PB("sixty") ;
		}
		else if(x==7)
		{
			v.PB("seventy") ;
		}
		else if(x==8)
		{
			v.PB("eighty") ;
		}
		else if(x==9)
		{
			v.PB("ninety") ;
		}
		if(n1>10 && n1 <20)
		{
			if(n1==11)
				cout << "eleven" ;
			else if(n1==12)
				cout << "twelve" ;
			else if(n1==13)
				cout << "thirteen" ;
			else if(n1==14)
				cout << "fourteen" ;
			else if(n1==15)
				cout << "fifteen" ;
			else if(n1==16)
				cout << "sixteen" ;
			else if(n1==17)
				cout << "seventeen" ;
			else if(n1==18)
				cout << "eighteen" ;
			else if(n1==19)
				cout << "nineteen" ;
			return 0 ;
		}
		if(n1%10==0)
		{
			cout << v[1] ;
			return 0 ;
		}
		cout << v[1] << "-"<< v[0] << endl ;
  return 0 ;
}