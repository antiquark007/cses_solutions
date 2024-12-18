#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i];
#define all(v) v.begin(), v.end()

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> subset;
    string s;
    cin >> s;
    sort(all(s));
    int n = s.size();
    do{
        subset.pb(s);
    }while(next_permutation(all(s)));
    cout<<subset.size()<<endl;
    for(auto&x:subset){
        cout<<x<<endl;
    }
    return 0;
}
