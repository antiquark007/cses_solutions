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

    int n;
    cin >> n;
    int result = 1;
    int e = 1e9;
    f(i, 1, n + 1)
    {
        int val = pow(2, 1);
        result *= val;
        result=result%(e+7);
        //result=result%(e+7);
    }
    cout << result%(e+7) << endl;
}