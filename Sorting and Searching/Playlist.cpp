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
    set<int>s;
    int i=0,j=0,ans=0;
    while(i<n && j<n){
        if(s.find(v[j])==s.end()){
            s.insert(v[j++]);
            ans=max(ans,j-i);
        }else{
            s.erase(v[i++]);//deleted the elemts fron the front
        }
    }
    cout << ans << endl;

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}