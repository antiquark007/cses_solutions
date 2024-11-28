#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i];
// int findfactor2(int n)
// {
//     int count = 0;
//     while (n % 2 == 0)
//     {
//         if (n % 2 == 0)
//         {
//             count++;
//             n /= 2;
//         }
//     }
//     return count;
// }
// int findfactor5(int n)
// {
//     int count = 0;
//     while (n % 5 == 0)
//     {
//         count++;
//         n /= 5;
//     }
//     return count;
// }

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    for(int i=5;n/i>0;i*=5){//the time complexity reduced to 5root
        cnt+=n/i;
    }
    cout << cnt << endl;
    // f(i, 1, n + 1)
    // {
    //     // if (i % 2 == 0)
    //     // {
    //     //     cnt2 += findfactor2(i);
    //     //     // cout<<cnt2<<endl;
    //     // }
    //     if (i % 5 == 0)
    //     {
    //         cnt5 += findfactor5(i);
    //         // cout<<cnt5;
    //     }
    //     while (cnt5 > 0)
    //     {
    //         cnt++;
    //         // cnt2--;
    //         cnt5--;
    //     }
    // }
}