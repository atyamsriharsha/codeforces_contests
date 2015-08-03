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
  /* int n,k ;
   cin >> n >> k ;
   std::vector<int> v;
   std::vector<int> ans;
   for(int i=0;i<n;i++)
   {
   	  v.push_back(i+1) ;
   	//  cout << v[i] << endl ;
   }
   do
   {
   	ans.clear() ;
   	int flag = 0 ;
   	for(int i=0;i<n;i++)
   	{
   	   if(i!=n-1)
   	   {
   	     int res= v[i] - v[i+1] ;
   	     ans.pb(res) ;
   	    //  cout << ans[i] << endl;
   	   }  
   	}
   	sort(ans.begin(),ans.end()) ;
   //	cout << ans.size() ;
   	for(int i=0;i<ans.size();i++)
   	{
   		if(i!=ans.size()-1)
   		{
   		  if(ans[i]!=ans[i+1])
   		  {
   			 flag++ ;
   		  }
   		}
   	}
  // 	cout << flag << endl ;
   	if(flag==k-1)
   	{
   		for(int i=0;i<n;i++)
   		{
   			cout << v[i] << " " ;
   		}
   		return 0 ;
   	}
   }while(next_permutation(v.begin(),v.end()));*/
   	int n,k,first,last;
	cin >> n >> k ;
	first=n-k;
	for(int i=1;i<=first;i++)
	printf("%d ",i);
	first++;
	last=n;
	while(first<=last)
	{
		printf("%d ",last--);
		if(first<=last)
			printf("%d ",first++);
		else
		 break;
	}
	return 0;
  return 0 ;
}

