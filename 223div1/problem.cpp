#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
using namespace std ;

char constructstutil(string s,int ss,int se,char* st,int si)
{
	if(ss==se)
	{
		return 0 ;
	}
	int mid = ss + (se-ss)/2 ;
	st[si] = constructstutil(s,ss,mid,st,2*i+1)
}

char *construct(string s,int length)
{
	int height = (int)ceil(log2(length)) ;
    int max_size = 2*int(pow(2,height)) - 1 ;
    char *st = new char[max_size] ;
    constructstutil(s,0,length-1,st,0) ;
    return st ;
}

int main()
{
	string s ;
	cin >> s ;
	int length = s.length() ;
	construct(s,length) ;
	return 0 ;
}

