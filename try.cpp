#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i];

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n--;
        vi v(n);
        read(v, n);

        vi result;
        f(i, 0, n-1) {
            int half1 = v[i] / 2;
            int half2 = v[i] - half1;
            result.pb(half1);
            result.pb(half2);
        }
        if(n%2==0){
            result.pb(v[n-1]-result[n-1]);
        }
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}