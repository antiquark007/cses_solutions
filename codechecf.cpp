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
    int n;
    cin >> n;
    vi v(n);
    read(v, n);
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(__builtin_popcount(v[j])==__builtin_popcount(v[i])){
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
        }
    }
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=1;
        }
    }
    if(!flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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