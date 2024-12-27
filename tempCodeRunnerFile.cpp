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
#define RSORT(v) sort(v.rbegin(), v.rend())
void solve() {
    // Add problem-specific logic here
    int n;
    cin >> n;
    vi a(n);
    read(a, n);
    vi b(n);
    read(b, n);
    int ans = 0;
    f(i, 0, n-1) {
        if(a[i]-b[i+1]>0){
            ans+=a[i]-b[i+1];
            //cout<<ans<<"\t";
        }
    }
    
    cout<<ans+a[n-1]<<"\n";
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}