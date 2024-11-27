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
    int t;
    cin >> t;
    while (t--){
        int r,c;
        cin>>r>>c;
        int maxi=max(r,c);
        int d = maxi*maxi-(maxi-1);
        if(r>=c){
            if(r%2==0){
                cout<<d+(r-c)<<endl;
            }else{
                cout<<d-(r-c)<<endl;
            }
        }else{
            if(c%2==0){
                cout<<d-(c-r)<<endl;
            }else{
                cout<<d+(c-r)<<endl;
            }
        }
    }
}