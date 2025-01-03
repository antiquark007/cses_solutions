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

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    f(i, 0, n) {
        int x, y;
        cin >> x >> y;
        v.pb(make_pair(y,x));
    }
    sort(all(v));
    int end=0,cnt=0;
    for(auto e:v){
        if(e.second>=end){
            end=e.first;
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}