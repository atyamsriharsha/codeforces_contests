#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <cstdlib>
#include <algorithm>
using namespace std;
typedef long long ll;
#define eps 1e-9
#define mod 1000000007
#define foreach(it,v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
const int maxn=3010;
const int inf =0x3f3f3f3f;
int n,m;
int d[maxn][maxn];
vector<int> G[maxn];
void add_edge(int u,int v){
    G[u].push_back(v);
    G[v].push_back(u);
}
void bfs(int cur){
    memset(d[cur],0,sizeof d[cur]);
    queue<int>q;
    q.push(cur);
    while(!q.empty()){
            int u=q.front();
    q.pop();
        foreach(it,G[u])if(!d[cur][*it]){
            d[cur][*it] = d[cur][u] +1;
            q.push(*it);
        }
    }
    for(int i=1;i<=n;i++){
        if(!d[cur][i])
        d[cur][i] = inf;
    }
    d[cur][cur]=0;
}
int main(){
    while(~scanf("%d%d",&n,&m)){
        for(int i=1;i<=n;i++){
            G[i].clear();
        }
        for(int i=1;i<=m;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            add_edge(u,v);
        }
        for(int i=1;i<=n;i++){
            bfs(i);
        }
        int s1,s2,l1,l2,t1,t2;
        scanf("%d%d%d%d%d%d",&s1,&t1,&l1,&s2,&t2,&l2);
        if(d[s1][t1] > l1||d[s2][t2] > l2){
            puts("-1");
            continue;
        }
        int res=d[s1][t1] + d[s2][t2];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int w1=min(d[s1][i]+d[i][j]+d[j][t1],d[s1][j]+d[j][i]+d[i][t1]);
                int w2=min(d[s2][i]+d[i][j]+d[j][t2],d[s2][j]+d[j][i]+d[i][t2]);
                if(w1>l1||w2>l2)continue;
                res = min(res,w1+w2-d[i][j]);
            }
        }
        printf("%d\n",m-res);
    }
    return 0;
}