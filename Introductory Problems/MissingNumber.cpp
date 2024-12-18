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
 
    int n,i;
    cin >> n;
    n--;
    vi v(n);
    read(v, n);
    sort(v.begin(),v.end());
    int val=v[n-1]+1;
    f(i,0,n){
        if(v[i] !=i+1){
            val=i+1;
            break;
        }
    }
    cout<<val<<endl;
    return 0;
}