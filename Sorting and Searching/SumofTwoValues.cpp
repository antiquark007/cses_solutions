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
    vi a(n);
    read(a,n);
    //will try two pointer approach
    SORT(a);
    int l=0,r=n-1;
    int flag=1;
    while(l<r){
        if(a[l]+a[r]==x){
            cout<<l+1<<" "<<r+1;
            flag=0;
            break;
        }
        else if(a[l]+a[r]<x){
            l++;
        }
        else{
            r--;
        }
    }
    if(flag){
        cout<<"IMPOSSIBLE";
    }
}
