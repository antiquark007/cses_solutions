// 
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        // Print all even numbers
        for (int i = 2; i <= n; i += 2) cout << i << " ";
        // Print all odd numbers
        for (int i = 1; i <= n; i += 2) cout << i << " ";
    }

    return 0;
}
