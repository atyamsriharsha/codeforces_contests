#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(long long a, long long b)
{
	if(a>b)
		return 1 ;
	return 0 ;
}

int main()
{
	int n,m;
	long long temp,count1=0 ;
	//ll A[100001], B[100001];
	std::vector<long long> bro1;
	std::vector<long long> bro2;
	cin >> n >> m ;
	for(int i = 0; i < n; ++i)
	{
		cin >> temp ; 
		bro1.push_back(temp);
	}
	for(int i = 0; i < m; ++i)
	{
		cin >> temp ;
		bro2.push_back(temp) ;
	}
	sort(bro1.begin(),bro1.end());
	sort(bro2.begin(),bro2.end(),cmp);
	for(int i=0; i < min(m,n) && bro1[i]<bro2[i];++i)
	{
		count1 += (bro2[i] - bro1[i]);
	}
	cout << count1 << endl;
	return 0;
}