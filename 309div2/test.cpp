#include <bits/stdc++.h>
using namespace std;

#define fr(i,n,m) for (int i = (n) ; i < (m) ; i ++)
#define rp(i,n,m) for (int i = (n - 1) ; i >= (m) ; i --)
#define fr_(i,n,m,k) for (int i = (n) ; i < (m) ; i += k)
#define rp_(i,n,m,k) for (int i = (n - 1) ; i >= (m) ; i -= k)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define f first
#define s second

typedef long long ll;
ll const mod = 1e9 + 7;
ll c[2015][2015] , a[1010] , b[1010] , k , ans = 1;

int main(){
	fr(i,0,2015){
		c[i][i] = 1;
		fr(j,i+1,2015){
			if (!i) c[i][j] = 1;
			else c[i][j] = (c[i-1][j-1] + c[i][j-1]) % mod;
		}
	}
	cin >> k;
	fr(i,1,k+1){
		cin >> a[i];
		b[i] = a[i-1] + b[i-1];
		}
	
	fr(i,2,k+1){
		(ans *= c[b[i]][a[i]+b[i]-1]) %= mod;
	}
	return cout << ans , 0;
}