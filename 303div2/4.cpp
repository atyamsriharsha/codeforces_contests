/************************************************************
   Author : atyam
************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>   
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii;
typedef vector<pii> vii;

//queue<long long> q ;
std::vector<ll> v;

int main(int argc, char const *argv[])
{
	ll n,temp,time1=0,ans=0; 
	cin >> n; 
    for (ll i=0; i<n; i++)
    {
        cin >> temp; 
        v.push_back(temp); 
    }      
    sort(v.begin(), v.end());  
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]>=time1)
        {
            ans++; 
            time1+=v[i]; 
        }
    }
    cout << ans; 
	return 0;
}