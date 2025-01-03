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
    int n,i=0;
    cin >> n;
    vi v(n);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    int ans=1;
    for(i=2;i<=n;i++){
        if(v[i]<v[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        solve();
}
//not able to solve