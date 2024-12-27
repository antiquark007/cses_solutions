//ved 
#include <bits/stdc++.h>
using namespace std;

// ---------------------- TYPE DEFINITIONS AND MACROS ----------------------
// Makes all integers long long by default for handling larger numbers
#define int long long
#define ll long long

// Optimize input/output operations for competitive programming
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    

// Loop shortcuts
#define f(i, t, n) for (int i = t; i <= n; i++)    // Loop from t to n inclusive
#define fr(n) for (int i = 0; i < n; i++)          // Loop from 0 to n-1

// Vector operations
#define all(x) x.begin(), x.end()                  // Used for algorithms like sort()
#define rall(x) x.begin(), x.end(), greater<int>() // For sorting in descending order
#define vvi vector<vector<int>>                    // 2D integer vector
#define vi vector<int>                             // 1D integer vector
#define vs vector<string>                          // Vector of strings
#define vc vector<char>                            // Vector of characters
#define pb push_back                               // Add element to vector

// Vector input/output helpers
// Sum all elements in a vector
#define acc(x) accumulate(x.begin(), x.end(), 0)   

// Input elements into a vector
#define inp(v)        \
    for (auto &i : v) \
    {                 \
        cin >> i;     \
    }

// Output all elements in a vector
#define out(x)            \
    for (auto i : x)      \
    {                     \
        cout << i << " "; \
    }

// Vector utility operations
#define maxi(x) *max_element(x.begin(), x.end())   // Maximum element in vector
#define mini(x) *min_element(x.begin(), x.end())   // Minimum element in vector
#define cnt(x, n) count(x.begin(), x.end(), n)     // Count occurrences of n
#define cov(x, n) find(x.begin(), x.end(), n)      // Find element n
#define lower(v, x) lower_bound(v.begin(), v.end(), x) - v.begin() // Index of lower bound

// Common data structure shortcuts
#define ff first                                   // First element of pair
#define ss second                                  // Second element of pair
#define mii map<int, int>                         // Integer to integer map
#define si set<int>                               // Set of integers

// Output formatting
#define endl '\n'                                 // Newline character
#define nl cout << '\n';                         // Print newline
#define yes cout<<"YES"<<endl;                   // Print YES
#define no cout<<"NO"<<endl;                     // Print NO
#define one cout<<"-1"<<endl;                    // Print -1

// ---------------------- GLOBAL CONSTANTS ----------------------
const int N = 1e6 + 5;                           // Common array size
const int mx = 100'007;                          // Maximum value
const int mod = 100'000'007;                     // Modulo value
const int INF = 1e18;                            // Infinity representation
int chk_prime[N];                                // Array for prime checking

// ---------------------- MATHEMATICAL FUNCTIONS ----------------------

/**
 * Generates prime numbers up to n using Sieve of Eratosthenes
 * @param n Upper limit to generate primes
 * @return Vector of booleans where is_prime[i] is true if i is prime
 */
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

/**
 * Calculates the Nth Fibonacci number with modulo
 * @param N The position in Fibonacci sequence
 * @return The Nth Fibonacci number % mod
 */
long long fibonacci(int N) {
    long long A = 1, B = 1;
    for (int i = 3; i <= N; i++) {
        long long temp = (A + B) % mod;
        A = B;
        B = temp;
    }
    return B;
}

/**
 * Simple primality test
 * @param x Number to test
 * @return true if x is prime, false otherwise
 */
bool prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

/**
 * Calculate Greatest Common Divisor using Euclidean algorithm
 * @param a First number
 * @param b Second number
 * @return GCD of a and b
 */
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/**
 * Calculate Least Common Multiple of array elements
 * @param a Array of numbers
 * @param n Size of array
 * @return LCM of all numbers
 */
int lcm(int a[], int n) {
    int r = a[0];
    for (int i = 1; i < n; i++) {
        r = ((a[i] * r) / gcd(a[i], r));
    }
    return r;
}

/**
 * Multiply large numbers using binary method
 * Used when numbers are too large for direct multiplication
 * @param a First number
 * @param b Second number
 * @return (a * b) % mod
 */
ll binary_multiply(ll a, ll b) {
    a %= mod;
    ll ans = 0;
    while (b > 0) {
        if (b & 1) {
            ans += a;
            ans %= mod;
        }
        b >>= 1;
        a += a;
        a %= mod;
    }
    return ans;
}

/**
 * Binary exponentiation for fast power calculation
 * @param a Base
 * @param b Exponent
 * @return (a^b) % mod
 */
ll binexp(ll a, ll b) {
    a %= mod;
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = (ans * a) % mod;
        }
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}

/**
 * Calculate factorial recursively
 * @param m Number to calculate factorial of
 * @return m!
 */
int fact(int m) {
    if (m == 0 or m == 1) return 1;

    return m * fact(m - 1);
}

/**
 * Count number of set bits in binary representation
 * @param h Number to count bits in
 * @return Number of 1s in binary representation
 */
int set_bits(int h) {
    int c = 0;
    while (h) {
        c += (h & 1);
        h >>= 1;
    }
    return c;
}

/**
 * Find smallest divisor of a number
 * @param n Number to find divisor of
 * @return Smallest divisor or -1 if prime
 */
int divisor(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) return i;
    }
    return -1;
}

/**
 * Comprehensive primality test
 * @param n Number to test
 * @return true if n is prime, false otherwise
 */
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

/**
 * Swap two numbers
 * @param a First number
 * @param b Second number
 */
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/**
 * Main solution function where you write your code
 * @param test Current test case number
 */
void solve() {
    // Write your solution code here
    // Use the helper functions and macros defined above
    int n,m;
    cin>>n>>m;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int fc=fact(m);
    fc%=mod;
    int ans=0;
    vi b(n);
    for(int i=0;i<n;i++){
        int x=a[i]%mod;
        b[i]=((x)*fc);
        b[i]=b[i]%mod;
        //b[i]=b[i]%7;
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        cnt=divisor(b[i]);
        cout<<cnt<<" ";
    }
}

/**
 * Main function - handles multiple test cases
 */
int32_t main() {
    ios;                // Enable fast I/O
    solve(); // Solve each test cas
    return 0;
}