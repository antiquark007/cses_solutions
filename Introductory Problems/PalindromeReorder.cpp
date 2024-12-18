#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define read(a, n) f(i, 0, n) cin >> a[i];
#define sort(v) sort(v.begin(), v.end());
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    unordered_map<char, int> hm;
    for (char c : s)
    {
        hm[c]++;
    }
    int odd_count = 0;
    char odd_char = 0;
    for (const auto &pair : hm)
    {
        if (pair.second % 2 != 0)
        {
            odd_count++;
            odd_char = pair.first;
            if (odd_count > 1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }
    string half = "", palindrome = "";
    for (auto &pair : hm)
    {
        half += string(pair.second / 2, pair.first);
    }
    palindrome = half;
    if (odd_count == 1)
    {
        palindrome += odd_char;
    }
    //reverse(half.begin(), half.end());
    palindrome += half;
    cout << palindrome << "\n";

    return 0;
}
