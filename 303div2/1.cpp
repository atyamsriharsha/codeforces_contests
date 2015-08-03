/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

int main()
{
	int count1 = 0,count2 ;
	string s1,s2 ;
  int n,m ;
  cin >> s1;
  cin >> s2;
  n = s1.length() ;
  m = s2.length() ;
  //cout << s1 ;
 // cout << n ;
  for(int i=0;i<n;i++)
  {
  	if(s1[i]!=s2[i])
  		count1++ ;
  }
  count2 = count1/2 ;
  if(count1%2!=0)
  {
  	cout << "impossible" ;
  	return 0 ;
  }
  else
  {
  	for(int i=0;i<n;i++)
  	{
  		if(s1[i]!=s2[i] && count2>0)
  		{
  			s1[i] = s2[i] ;
            count2-- ;
  		}
  	}
  }
  cout << s1 ;
  return 0 ;
}

