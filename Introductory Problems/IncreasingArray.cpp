#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define read(a, n) f(i, 0, n) cin >> a[i];
#define SORT(v) sort(v.begin(), v.end())
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi v(n);
    read(v, n);
    int val=0;
    f(i,1,n){
        if(v[i-1]-v[i]>0){
            val=val+v[i-1]-v[i];
            v[i]+=v[i-1]-v[i];
            //cout<<v[i]<<" ";
        }
    }
    cout<<val<<endl;
    return 0;
}