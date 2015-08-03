#include <bits/stdc++.h>
using namespace std ;

#define FOR(i,a,b)   for(int i=a;i<b;i++)
#define REP(i,n)  FOR(i,0,n)
typedef vector<int> VI;
#define pb push_back
int a[105];

int main()
{
    int n, ans = 0;
    cin >> n;
    REP(i , n) cin >> a[i];
    REP(i, n)
    {
        FOR (j, i, n)
        {
            VI b;
            REP (k , n)
                b.pb (a[k]);
            int res = 0;
            FOR (k, i, j + 1)
            {
                b[k] ^= 1;
            }
            REP(k, n)
                if (b[k] == 1)
                    res ++;
            ans = max(ans,res);
        }
    }
    cout << ans << endl;
    return 0;
}