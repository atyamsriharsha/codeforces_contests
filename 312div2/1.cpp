/* author :: atyam*/
#include <bits/stdc++.h>

using namespace std;

/*typedef's for frequently used*/

typedef long long int ll;
typedef vector<int>VI;
typedef vector<ll>VLI;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
typedef unsigned long long int ull;

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

/*For variables*/	

#define LET(a) __typeof(a) x(a) 
#define ALL(a) a.begin(),a.end()

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
#define swap(VAR1,VAR2) VAR1=VAR1^VAR2;VAR2=VAR1^VAR2;VAR1=VAR1^VAR2
#define UB(x,a) (upper_bound(ALL(a),x)-a.begin())
#define LB(a,x) (lower_bound(ALL(a),x)-a.begin())
#define NP(a) next_permutation(ALL(a))

/*exponentiation*/


ll inline ipow(ll a,ll b,ll m){ll val=1;a%=m;while(b){if(b&01)val=(val*a)%m;b>>=1;a=(a*a)%m;};return val%m;}
ll inline ipow(ll a,ll b){ll val=1;while(b){if(b&01)val=(val*a);b>>=1;a=(a*a);};return val;}

/* Seive */


/*
#define LIM1 1000001
bitset<LIM1> isp;
vi primes;
inline void seive(){isp.set();isp.reset(0);isp.reset(1);for(int i=2;i*i<LIM1;i++)if(isp[i]){for(int j=i<<1;j<LIM1;j+=i)isp.reset(j);}repl(i,2,LIM1)if(isp[i]){primes.pb(i);}}
*/

/* Totient */

/*
#define LIM4 1000001
int phi[LIM4];
void totient(){repl(i,1,LIM4)phi[i]=i;tr(primes,it)for(int i=*it;i<LIM4;i+=*it)phi[i]-=phi[i]/(*it);}
*/

/* Inverse Modulo */

/*inline ll invmod(ll a, ll b){return (isp[b])?ipow(a,b-2,b):ipow(a,phi[b]-1,b);}*/

/* Combinatorics */

/*
#define LIM2 1000001
ll fact[LIM2];
inline void Fact(){fact[0]=1;repl(i,1,LIM)fact[i]=(i*fact[i-1])%MOD;}
inline ll inv(ll x,ll mod){return ipow(x,mod-2,mod);}
inline ll comb(ll a, ll b){return ((fact[a]*inv(fact[b],MOD)%MOD)*inv(fact[a-b],MOD))%MOD;}
*/

/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define repi(i,a,b) for(ll i=a;i>=b;i--)
#define repdf(i,a,b,d) for(ll i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(ll i=a;i>=b;i-=d)
#define repl(i,a,b) for (ll i=a;i<b;i++)
#define repil(i,a,b) for (ll i=a;i>b;i--)
#define tr(v,it) for( LET(it,v.begin()) ; it != v.end() ; it++)
#define rtr(v,it) for( LET(it,v.rbegin()) ; it != v.rend() ; it++)
#define TC() int t;cin>>t;while(t--)

/*space for global variables*/

set<ipair> s;
set<int> xc;
set<int> yc;
int dx[4] ={-1,1,0,0} ;
int dy[4] ={0,0,1,-1} ;

/**************************************************************  	
  	          Main Code
**************************************************************/

int main()
{
    //FastIn;
    clock_t tStart = clock();/* for execution time calculation*/
    ll n ;
    cin >> n ;
    pair<ll,ll> p[100] ;
    pair<ll,ll> p1[100] ;
    ll temp1,temp2 ;
    ll sum1=0,sum2=0,count1=0,count2=0,sum3=0,sum4=0,k=0,k1=0 ;
    repl(i,0,n)
    {
    	cin >> temp1 >> temp2 ;
        if(temp1>0)
        {
    	  p[k].first = temp1 ;
    	  p[k].second = temp2 ;
          sum1 += temp2 ;
          count1 = count1+1;
          k++ ;
        }
        else
        {
            p1[k1].first = -temp1 ;
            p1[k1].second = temp2 ;
            sum2+=temp2 ;
            count2 = count2 +1 ;
            k1++ ;
        }
    }
    /*repl(i,0,count1)
    {
        cout << p[i].second ;
    }
    repl(i,0,count2)
    {
        cout << p1[i].second ;
    }*/
    sort(p,p+count1) ;
    sort(p1,p1+count2) ;
    if(count1==count2)
    {
        cout << sum1 + sum2 ;
    }
    else if(count1==0)
    {
       cout << p1[0].second ;
    }
    else if(count2==0)
    {
        cout << p[0].second ;
    }
    else 
    {
        if(count1>count2)
        {
            repl(i,0,count2+1)
            {
                //cout << "hello" ;
                sum3 += p[i].second ;
            }
            repl(j,0,count2)
            {
                //cout << "hello1" ;
                sum4 += p1[j].second ;
            }
        }
        else if(count1<count2)
        {
            repl(i,0,count1+1)
            {
                //cout << "testing" ;
                sum3 += p1[i].second ;
            }
            repl(j,0,count1)
            {
                //cout << "testing1" ;
                sum4 += p[j].second ;
            }
        }
        cout << sum3 + sum4 ;
    }
 return 0 ;
}
