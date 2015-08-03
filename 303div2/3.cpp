/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<long long ,long long> pii ;
typedef vector<pii> vii ;
long long  max1= -3e9 ;
int main()
{
	long long  n ;
	long long count1=0 ;
	vii trees ;
	cin >> n ;
	for (int i = 0; i <n; ++i)
	{
		long long b,c ;
	   cin >> b >> c ;
	   trees.push_back(pii(b,c)) ;
	}
	for(int g = 0; g < trees.size();g++)
	{
		/* code */
		if (trees[g].first-trees[g].second>max1)
        {
            max1=trees[g].first; 
            count1++; 
            continue; 
        }
        if(g==trees.size()-1)
        {
            count1++; 
            continue; 
        }
        if(trees[g].first+trees[g].second<trees[g+1].first)
        {
            max1=trees[g].first+trees[g].second; 
            count1++; 
            continue; 
        }
        max1=trees[g].first;
	}
       cout << count1 ;
	return 0;
}