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
        vi a(n);
        read(a, n);
        sort(a.begin(),a.end());
        int cnt=0;
        f(i,1,n-1){
            if(a[i-1]-a[i]<=a[i+1]-a[i]&&a[i+1]-a[i]>0){
                cnt++;
            }
        }
        if(cnt==n-2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}