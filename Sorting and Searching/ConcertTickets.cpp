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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi v(n);
    read(v, n);
    SORT(v);
    multiset<int> available(all(v));

    vi v1(m);
    read(v1, m);

    for (int i = 0; i < m; i++)
    {
        auto it = available.upper_bound(v1[i]);
        if (it == available.begin())
        {
            cout << "-1\n"; 
        }
        else
        {
            --it; 
            cout << *it << "\n";
            available.erase(it); 
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define vi vector<int>
// #define pb push_back
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define read(a, n) f(i, 0, n) cin >> a[i]
// #define all(v) v.begin(), v.end()
// #define isEven(x) ((x % 2 == 0) ? 1 : 0)
// #define sumAll(v) accumulate(v.begin(), v.end(), 0)
// #define SORT(v) sort(v.begin(), v.end())
// void solve()
// {
//     // Add problem-specific logic here
//     int n,m;
//     cin>>n>>m;
//     vi v(n);
//     read(v, n);
//     SORT(v);
//     vi v1(m);
//     read(v1, m);
//     int val=-1,flag=0,indx=0;
//     for(int i=0;i<m;i++){
//         flag=0;
//         for(int j=0;j<n;j++){
//             if(v[j]<=v1[i]&&v[j]!=0){
//                 val=v[j];
//                 flag=1;
//                 indx=j;
//             }
//         }
//         if(flag==1){
//             cout<<v[indx]<<"\n";
//             v[indx]=0;
//         }else{
//             cout<<"-1"<<"\n";
//         }
//     }
// }
// int32_t main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//         solve();
// }
