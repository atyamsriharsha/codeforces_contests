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

int n;
char c[10005];
int main()
{
	int i,a,b,l1,l2;
	a=b=l1=l2=0;
	scanf("%d",&n);
	scanf("%s",&c[1]);
	for(i=1;i<=n;i++){
		if(c[i]=='L')
			a++;
		if(c[i]=='R')
			b++;
	}
	if(a==0 && b==0)
		l1=l2=1;
	else if(a==0){
		for(i=1;i<=n;i++){
			if(c[i]=='R'){
				if(l1==0)
					l1=i;
				l2=i+1;
			}
		}
	}
	else if(b==0){
		for(i=1;i<=n;i++){
			if(c[i]=='L'){
				if(l2==0)
					l2=i-1;
				l1=i;
			}
		}
	}
	else{
		for(i=1;i<=n;i++){
			if(c[i]=='R'){
				if(l1==0)
					l1=i;
				l2=i;
			}
		}
	}
	printf("%d %d",l1,l2);
	return 0;
}