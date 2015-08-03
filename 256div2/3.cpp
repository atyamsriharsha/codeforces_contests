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
int n,temp ;
int v[5002];

int solve(int left,int right,int ref)
{
	if(left==right)
		return 0 ;
	cout << left << " " << right << endl ;
	int min1 = min_element(v+left,v+right) - v ;
	cout << min1 << endl ;
	cout << min(right-left, solve(left,min1,v[min1]) + solve(min1+1,right,v[min1])+v[min1]-ref) ;
}

int main()
{
	cin >> n ;
	for(int i = 0; i < n; ++i)
	{
		cin >> temp ;
		v[i] = temp ;
	}
	//cout << 
	solve(0,n,0); //<< endl ;
    
  return 0 ;
}

