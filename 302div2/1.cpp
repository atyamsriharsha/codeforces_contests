/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
#define M 105

int main()
{
   int k,i,n;
   char str[M];
   bool mp[26];
   while(scanf("%d%s",&k,str)!=EOF)
   {
        n=k;
        memset(mp,0,sizeof(mp));
        for(i=0;str[i];i++)
            if(!mp[str[i]-'a'])
            {
                k--;
                mp[str[i]-'a']=1;
            }
        if(k>0)
            printf("NO");
        else
        {
            printf("YES");
            for (i=0;str[i];i++)
            {
                if(mp[str[i]-'a']&&n)
                {
                    printf("\n");
                    mp[str[i]-'a']=0;
                    n--;
                }
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
  return 0 ;
}