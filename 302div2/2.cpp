/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	char map[n][n];
	int temp[]={0,0};
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(((i%2)+j)%2==0 && count<k)
			{
				map[i][j]='L';
				count++;
			}
			else map[i][j]='S';
		}
	}
	if(count==k)
	{
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<map[i][j];
			}
			cout<<"\n";
		}
	}
	else
	 cout<<"NO";
	return 0;
}