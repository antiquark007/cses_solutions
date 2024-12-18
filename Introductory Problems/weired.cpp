#include <bits/stdc++.h>
using namespace std;

void countFrequency(const string &str, unordered_map<char, int> &frequencyMap)
{
    for (char ch : str)
    {
        frequencyMap[ch]++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a, b;
        cin >> a ;
        cin >> b;
        unordered_map<char, int> frequencyMapA, frequencyMapB;

        countFrequency(a, frequencyMapA);
        countFrequency(b, frequencyMapB);
        int noa_n=0,nob_n=0;
        int noa_m=0,nob_m=0;
        for (const auto &pair : frequencyMapA)
        {

            noa_n= pair.first ;
            nob_n= pair.second ;
        }
        for (const auto &pair : frequencyMapB)
        {

            noa_m= pair.first ;
            nob_m= pair.second ;
        }
        if(n==m){
            cout<<"YES"<<endl;
        }else{
            if(n<m){
                if(noa_n>=m-n){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(noa_m>=n-m){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
