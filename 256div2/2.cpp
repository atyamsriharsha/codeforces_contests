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

int a[26],b[26];
char s[101],t[101];
int main()
{
	int l1,l2,n,i,j ;
    cin >> s >> t ;
    l1=strlen(s);
    l2=strlen(t);
    for(i=0;i<l1;++i)
    {
    	++a[s[i]-'a'];
    }
    for( i=0;i<l2;++i)++b[t[i]-'a'];
    for( i=0;i<26;++i)
        if(a[i]<b[i]){printf("need tree\n");return 0;}
    for(i=0,j=0;i<l2 && j<l1;++i,++j)
        while(j<l1&&s[j]!=t[i]) ++j;
    printf("%s\n",i<l2?(l1==l2?"array":"both"):"automaton");
}

