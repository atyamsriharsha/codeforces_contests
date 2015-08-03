#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair <int, int> 
map <PII, int> disg; 
int key [300005]; int key2[300005]; int n, m,node; 
vector <int> eag [300005]; int last[300005]; 
int vis[300005]; 
int counter=0; 
map <PII, int> findnum;

void dijikstra (int node)
{
    key[node]=0; 
    priority_queue <PII, vector <PII>, greater<PII> > t; 
    t.push(PII(0, node)); 
    while (t.size())
    {
        int dist=t.top().first; 
        int curnode=t.top().second; 
        t.pop(); 
        if (key[curnode]<dist) continue;
        for (int g=0; g<eag[curnode].size(); g++)
        {
            int newdist=dist+disg[PII(curnode, eag[curnode][g])]; 
            if (key[eag[curnode][g]]>newdist)
            {
                key[eag[curnode][g]]=newdist; 
                t.push(PII(newdist, eag[curnode][g]));
            }
        }
    }
}

void solve()
{
    priority_queue <PII, vector <PII>, greater<PII> > wen; 
    wen.push(PII(0, node)); 
    key2[node]=0; 
    while (wen.size())
    {
        PII z=wen.top(); wen.pop(); 
        if (z.first>key2[z.second]) continue; 
        int newnode=z.second;
        for (int y=0; y<eag[newnode].size(); y++)
        {
            int newdist=disg[PII(eag[newnode][y], newnode)]; 
            if (newdist+key[newnode]!=key[eag[newnode][y]]) continue; 
            if (newdist<key2[eag[newnode][y]])
            {
                key2[eag[newnode][y]]=newdist;
                last[eag[newnode][y]]=newnode;  
                wen.push(PII(newdist, eag[newnode][y]));
            }
        }
    }
}
 main()
{
    for (int g=1; g<=300000; g++) 
        key[g]=3e16, key2[g]=3e16;
    scanf("%I64d %I64d", &n, &m); 
    for (int g=0; g<m; g++)
    {
        int u, v, w;
        scanf("%I64d %I64d %I64d", &u, &v, &w); 
        disg[PII(u, v)]=w; 
        disg[PII(v, u)]=w; 
        eag[u].push_back(v); 
        eag[v].push_back(u); 
        findnum[PII(u, v)]=g+1; 
        findnum[PII(v, u)]=g+1; 
    }
    scanf("%I64d", &node); 
    dijikstra(node); 
    solve();
    int ans=0;  
    for (int g=1; g<=n; g++)
    {
        if (g==node) continue;
        ans+=disg[PII(g, last[g])]; 
    }
    cout << ans << '\n'; 
    for (int g=1; g<=n; g++)
    {
        if (g==node) continue;
        cout << findnum[PII(g, last[g])] << ' '; 
    }
    return 0; 
}