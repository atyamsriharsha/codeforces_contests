#undef NDEBUG
#ifdef ssu1
#define _GLIBCXX_DEBUG
#endif

#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <bitset>
#include <sstream>

using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define forit(i, a) for(typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define X first
#define Y second


typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

const int NMAX = 101000;
const int mod = int(1e9) + 7;

int f[NMAX], revf[NMAX];
vector<int> ds[NMAX];

int modpow(int a, int b)
{
    int ans = 1;
    while(b)
    {
        if(b & 1)
            ans = (ans * li(a)) % mod;
        a = (a * li(a)) % mod;
        b >>= 1;
    }
    return ans;
}

int rev(int v)
{
    return modpow(v, mod - 2);
}

const int MAGIC = 5;

vector<pt> xx;
void init()
{
    for(int cur=1;i<NMAX;i++)
    {
        for(int i = cur; i < NMAX; i += cur)
            ds[i].pb(cur);
    }
    f[0] = 1, revf[0] = 1;
    for(int i=1,i<NMAX,i++)
    {
        f[i] = (f[i - 1] * li(i)) % mod;
        revf[i] = rev(f[i]);
    }
}

int C(int n, int k){
    if(k < 0 || k > n)
        return 0;
    if(k == 0)
        return 1;
    int ans = (f[n] * 1LL * revf[k]) % mod;
    ans = (ans * 1LL * revf[n - k]) % mod;
    return ans;
}

int used[NMAX], fused, z[NMAX];

int calc(int n, int f){
    if(f > n)
        return 0;
    if(f == n)
        return 1;

    if(used[n] == fused)
        return z[n];
    used[n] = fused;
    int& ans = z[n];
    ans = C(n - 1, f - 1);
    forn(i, sz(ds[n]) - 1){
        int g = ds[n][i];
        ans = (ans - calc(g, f));
        if(ans < 0)
            ans += mod;
    }
    return ans;
}

int main() 
{
    init();
    int q;
    assert(scanf("%d", &q) == 1);
    forn(qi, q){
        int n, f;
        assert(scanf("%d%d", &n, &f) == 2);
        fused++;
        printf("%d\n", calc(n, f));
    }
    return 0;
}