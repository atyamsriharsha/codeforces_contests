#include <bits/stdc++.h>
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define PII pair<int,int>
#define VPII vector<pair<int,int> >
#define PLL pair<long long,long long>
#define F first
#define S second
typedef long long LL;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
const int INF = 0x3f3f3f3f;
#define LOCALTEST 0 // change this to 1 to perform localtest on "in.txt"
int n,m;
char s[20][25];
int a[20][20];
int z[1<<20],sv[20][20],c[20][20];
int main(){
    if (LOCALTEST) {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    while (RII(n,m)==2) {
        REP(i,n) RS(s[i]);
        REP(i,n) REP(j,m) RI(a[i][j]);

        REP(i,n) REP(j,m) {
            int co=0;
            int ma=0;
            REP(k,n) {
                if (s[i][j]==s[k][j]) {
                    sv[i][j]|=(1<<k);
                    co+=a[k][j];
                    ma=max(ma,a[k][j]);
                }
            }
            c[i][j]=co-ma;
        }

        REP(i,1<<n) z[i]=INF;
        z[0]=0;
        REPP(mask,1,(1<<n)) {
            int lowbit=-1;
            REP(i,n) if (mask&(1<<i)) {
                lowbit=i;
                break;
            }
            REP(i,m) {
                z[mask]=min(z[mask],z[mask&~(sv[lowbit][i])]+c[lowbit][i]);
                z[mask]=min(z[mask],z[mask&~(1<<lowbit)]+a[lowbit][i]);
            }
        }
        printf("%d\n",z[(1<<n)-1]);
    }
    return 0;
}