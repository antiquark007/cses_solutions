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
    int n,k,flag=0,xr=0,cnt=0,cntxr=0;
    cin >> n>>k;
    vi v(n);
    read(v, n);
    map<int, int> frequencyMap;
    for (int num : v) {
        xr=xr^num;
        if(xr==0){
            cntxr++;
        }
        if(num==k&&cntxr==0){
            flag=1;
        }
        frequencyMap[num]++;
    }
    xr=0;
    cntxr=0;
    for(int i=n-1;i>=0;i--){
        xr=xr^v[i];
        if(xr==0){
            cntxr++;
        }
        if(v[i]==k&&cntxr==0){
            flag=1;
        }

    }


    int mostFrequent = v[0];
    int maxFrequency = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency||(pair.first==k&&pair.second==maxFrequency)) {
            maxFrequency = pair.second;
            mostFrequent = pair.first;
        }
    }
    if(mostFrequent==k){
        cout<<0<<endl;
    }else if((v[0]==k||v[n-1]==k)||flag){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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