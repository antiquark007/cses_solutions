#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i]
#define all(v) v.begin(), v.end()
#define isEven(x) ((x % 2 == 0) ? 1 : 0)
#define sumAll(v) accumulate(v.begin(), v.end(), 0)
#define SORT(v) sort(v.begin(), v.end())
void solve()
{
    // Add problem-specific logic here
    int n;
    cin >> n;
    vi v(n);
    read(v, n);
    SORT(v);
    int x = 0;
    if (n % 2 == 0)
    {
        int mid1=v[n/2 -1];
        int mid2=v[n/2];
        int x1=0,x2=0;
        f(i, 0, n)
        {
            x1+=abs(v[i]-mid1);
            x2+=abs(v[i]-mid2);
        }
        cout << min(x1, x2) << endl;
    }
    else
    {
        int mid = v[n / 2];
        f(i, 0, n)
        {
            x+=abs(v[i]-mid);
        }
        cout << x << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
