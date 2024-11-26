#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define read(a, n) f(i, 0, n) cin >> a[i];
#define SORT(v) sort(v.begin(), v.end())

// Function to find divisors of a number
vi getDivisors(int n) {
    vi divisors;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            divisors.pb(i);
            if(i * i != n)
                divisors.pb(n/i);
        }
    }
    return divisors;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int x, m;
        cin >> x >> m;
        
        // Find all divisors of x
        vi divisors = getDivisors(x);
        
        // Use set to store valid values
        set<int> valid_nums;
        
        // For each divisor d of x, find numbers i where x^i = d
        for(int d : divisors) {
            int i = x ^ d;
            if(i >= 1 && i <= m) {
                valid_nums.insert(i);
            }
        }
        
        // For each i from 1 to m, check if i is divisible by x^i
        for(int i = 1; i <=m; i++) {
            int val = x ^ i;
            if(val != 0 && i % val == 0) {
                valid_nums.insert(i);
            }
        }
        
        cout << valid_nums.size() << "\n";
    }
    return 0;
}