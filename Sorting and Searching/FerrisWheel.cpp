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
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    vi p(n);
    read(p,n);
    SORT(p);
    int ans=0;
    int i=0,j=n-1;
    while(i<n&&j>=0&&i<=j){
        if(p[i]+p[j]<=x){
            ans++;
            i++;
            j--;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans;
}