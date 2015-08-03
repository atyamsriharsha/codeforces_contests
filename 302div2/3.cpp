#include <iostream>
using namespace std;
int n,m,b,mod,sol,a[505],D[505][505];
int main()
{
    int i,j,k;
    cin>>n>>m>>b>>mod;
    D[0][0]=1;
    for(k=1;k<=n;++k)
    {
        cin>>a[k];
        for(i=a[k];i<=b;++i)
            for (j=1;j<=m;++j)
                D[i][j]=(D[i][j]+D[i-a[k]][j-1])%mod;
    }
    for(i=0;i<=b;++i)
        sol=(sol+D[i][m])%mod;
    cout<<sol<<"\n";
    return 0;
}