#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i];
#define sort(v) sort(v.begin(), v.end());
#define all(v) v.begin(), v.end()
#define iseven (x) (x&1) ? 0 : 1
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n ,k,j;
        cin>>n>>k;
        vi v(n);
        read(v,n);
        int  flag=0;
        f(i,0,n){
            f(j,0,n){
                if(i==j){
                    continue;
                }else{
                    if(abs(v[i]-v[j])%k!=0){
                        flag=0;
                        break;
                    }
                }

            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}