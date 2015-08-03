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
	long long n,n1,count1=0,sum=0,diff,ans1 ;
	cin >>  n ;
	bool flag = 0 ; 
	if(n==10)
	{
		cout << 11 << endl ;
	    return 0 ;
	}
	if(n%10==0)
	{
		flag = 1 ;
		n = n-1 ;
	}
	n1 = n ;
	while(n1!=0)
	{
		n1 = n1/10 ;
		count1++ ;
	}
	long long  length = count1 ;
	//cout << length << endl ;
	long long  ref = (long long )pow(10,length-1) ;
	//cout << ref << endl;
	if(ref%10==0)
	{
		 diff =  n - ref ;
		 ans1 = diff*length ;
	  while(ref!=10)
	  {
		ref = ref/10 ;
		sum+= (8.9)*(long long)pow(10,length-2)*(length-1) ;
		length = length-1 ;
		//cout << sum << " " ;
	  }
	  sum+=11 ;
	  //cout << sum + ans1 << endl ;
	  if(flag==1)
	  {
	  	cout << sum + count1 + 1 + ans1;
	  	return 0 ;
	  }
	  cout << sum + ans1<< endl ;
	  return 0 ;
	}
    else
    {
    	cout << n << endl ;
    	return 0 ;
    }
  return 0 ;
}