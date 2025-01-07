#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i]
#define all(v) v.begin(), v.end()
#define sumAll(v) accumulate(v.begin(), v.end(), 0)
#define SORT(v) sort(v.begin(), v.end())

bool canCompleteTasks(const vi &v, int n, int t, int time) {
    int tasks = 0;
    for (int i = 0; i < n; i++) {
        tasks += time / v[i];
        if (tasks >= t) return true; // No need to compute further
    }
    return tasks >= t;
}

void solve() {
    int n, t;
    cin >> n >> t;
    vi v(n);
    read(v, n);
    SORT(v);

    int left = 1, right = v[0] * t, result = right;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canCompleteTasks(v, n, t, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << result << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
