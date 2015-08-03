/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
typedef vector<int> vi ;
#define pb push_back 
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

int main()
{
	ll m ;
	cin >> m ;
	ll h1,a1 ;
	cin >> h1 >> a1 ;
	ll x1,y1 ;
	cin >> x1 >> y1 ;
	ll h2,a2 ;
	cin >> h2 >> a2 ;
	ll x2,y2 ;
	cin >> x2 >> y2 ;
	ll count1=1,count2=1 ;
	set<ll> s,s1 ;
	while(1)
	{
		h1 = (((x1%m)*(h1%m))%m +y1%m)%m ;
		h2 =(((x2%m)*(h2%m))%m +y2%m)%m ;
		cout << h1 << " " << a1 << endl ;
		cout << h2 << " " << a2 << endl ;
		if(h1==a1 && h2==a2)
			break ;
		if(s.find(h1)==s.end())
		 s.insert(h1) ;
		else
		{
			cout << -1 << endl;
			return 0 ;
		}
		if(s1.find(h2)==s1.end())
		 s1.insert(h2) ;
		else
		{
			cout << -1 << endl;
			return 0 ;
		}
		count1++ ;
	} 
	cout << count1 << endl ;
	return 0 ;
}