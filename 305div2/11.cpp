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
	string s ;
	cin >> s ;
	int length = s.length() ;
	int k,flag=0,div1 ;
	cin >> k ;
	div1 = length/ k ;
	if(length%k!=0)
	{
		cout << "NO" ;
	}
	else
	{
		for(int i=0;i<length;i=i+div1)
		{
		  if(flag==1)
		  	break ;
          for(int j=i; j<i+div1 , j<length;j++)
          {
          	if(s[j]!=s[div1-j-1] )
          	{
          		flag = 1 ;
          		break ;
          	}
          }
          div1 = div1 + div1 ;
        }
		if(flag==0)
		{
			cout << "YES" ;
		}
         else
         {
         	cout << "NO" ;
         }
 	}


  return 0 ;
}

