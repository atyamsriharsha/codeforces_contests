/************************************************************
   Author : atyam
************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>   
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

long long int a[100][100] ;
int main()
{
  long long int n ,flag;
  long long int count1 = 0 ;
  cin >> n ;
  std::vector<long long int> v;
  for (long long int i = 0; i < n; ++i)
  {
    for (long long int j = 0; j < n; ++j)
    {
    	cin >> a[i][j] ;
    }
  }
  for (long long int i = 0; i < n; i++)
  {
  	flag = 0 ;
  	for (long long int j = 0; j < n; j++)
  	{
  		if(a[i][j]== 1 ||  a[i][j]== 3)
  		{
  			flag = 1 ;
  		}
  	}
  	if(flag==0)
  	{
  		//cout << i ;
  		v.push_back(i+1) ;
  		//cout << v[0] ;
  		count1++ ;
  	}
  }
  cout << count1  << endl;
  for (long long int i = 0; i <v.size(); ++i)
  {
  	/* code */
  	cout << v[i] << " " ;
  }
  return 0 ;
}

