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
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n,x;
    cin>>n>>x;
    vi a(n);
    read(a,n);
    vi b(a);
    //will try two pointer approach
    SORT(b);
    int l=0,r=n-1;
    int val1=0,val2=0;
    int flag=1;
    while(l<r){
        if(b[l]+b[r]==x){
            val1=b[l];
            val2=b[r];
            flag=0;
            break;
        }
        else if(b[l]+b[r]<x){
            l++;
        }
        else{
            r--;
        }
    }
    if(flag){
        cout<<"IMPOSSIBLE";
    }else{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==val1){
                cnt=i+1;
                break;
            }
        }
        cout<<cnt<<" ";
        cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==val2){
                cnt=i+1;
            }
        }
        cout<<cnt;
    }
}