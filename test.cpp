#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define mod 100'000'007

int fact(int m) {
    if (m == 0 || m == 1) return 1;
    return (m * fact(m - 1)) % mod;
}

int count_divisors(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (i != x / i) cnt++;
        }
    }
    return cnt;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int fc = fact(m);
    vi b(n);
    for (int i = 0; i < n; i++) {
        b[i] = (a[i]* fc) % mod;
        cout << count_divisors(b[i]) << " ";
    }
    cout << endl;
}

int32_t main() {
    ios;
    solve();
    return 0;
}