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

    int n, i;
    cin >> n;
    if ((n * (n + 1) / 2) % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        // cout << "YES";
        vi vs;
        vi vl;
        if (n % 2 == 0)
        {
            f(i, 1, n / 2)
            {
                if (i % 2 == 0)
                {
                    vs.pb(i+1);
                    vs.pb(n - i-1);
                }
                else
                {
                    vl.pb(i+1);
                    vl.pb(n - i-1);
                }
            }
        }else{
            f(i, 1, (n-1) / 2 + 1){
                if (i % 2 == 0){
                    vs.pb(i+1);
                    vs.pb(n - i);
                }else{
                    vl.pb(i+1);
                    vl.pb(n - i);
                }
            }
            if(vl.size()>vs.size()){
                vs.pb(n);
            }else{
                vl.pb(n);
            }
        }
        cout<<vs.size()<<endl;
        for(auto i:vs){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<vl.size()<<endl;
        for(auto i:vl){
            cout<<i<<" ";
        }
    }
}