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

char A[2000];
int main()
{
   int n,p;
   scanf("%d %d",&n,&p);
   scanf("%s",&A);
   int l=strlen(A);
   int i=l-1;
   while(i>=0 && i<l)
   {
        A[i]++;
        int d=A[i]-97+1;
        if(d>p)
        {
            A[i]=96;
            i--;
            continue;
        }
        if(i>0 && A[i]==A[i-1])
            continue;
        if(i>1 && A[i]==A[i-2])
            continue;
        i++;
   }
   if(i<0)
    printf("NO\n");
    else
   printf("%s\n",A);
    return 0;
}

