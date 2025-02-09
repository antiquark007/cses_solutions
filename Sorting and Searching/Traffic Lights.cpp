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
    // Add problem-specific logic here
    int x, n;
    cin >> x >> n;
    set<int> position;
    multiset<int> length;
    position.insert(0);
    position.insert(x);
    length.insert(x-0);
    f(i, 0, n) {
        int p;
        cin >> p;
        position.insert(p);
        auto it = position.find(p);
        int prevVal= *prev(it);
        int nextVal = *next(it);
        length.erase(length.find(nextVal-prevVal));
        length.insert(p-prevVal);
        length.insert(nextVal-p);
        cout << *length.rbegin() << " ";    
    }

    
    
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}