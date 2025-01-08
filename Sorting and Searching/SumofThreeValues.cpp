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

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;
    vi a(n);
    read(a, n);

    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++) {
        b.pb({a[i], i + 1}); 
    }
    sort(all(b));

    for (int i = 0; i < n - 2; i++) {
        int v1 = b[i].first;
        int l = i + 1, r = n - 1;

        while (l < r) {
            int sum = v1 + b[l].first + b[r].first;
            if (sum == x) {
                cout << b[i].second << " " << b[l].second << " " << b[r].second;
                return 0;
            }
            else if (sum < x) {
                l++;
            }
            else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}