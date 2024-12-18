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

    int k,i;
    cin >> k;
    f(i,1,k+1){
        cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<endl;
    }
    return 0;
}