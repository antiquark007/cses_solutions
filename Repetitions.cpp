#include <bits/stdc++.h>
using namespace std;

int main() {
    string largeString;
    getline(cin, largeString);

    int maxLength = 0;
    int currentLength = 1;

    for (size_t i = 1; i < largeString.size(); i++) {
        if (largeString[i] == largeString[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define pb push_back
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define fr(i, a, b) for (int i = a; i >= b; i--)
// #define read(a, n) f(i, 0, n) cin >> a[i];
// #define SORT(v) sort(v.begin(), v.end())

// stack<char> s;
// int ans = 1;

// bool isPresent(char a) {
//     if (s.empty() || s.top() == a) {
//         s.push(a);
//         ans = max(ans, (int)s.size());
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     string largeString;
//     getline(cin, largeString);
    
//     for (char ch : largeString) {
//         if (!isPresent(ch)) {
//             while (!s.empty()) {
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }
    
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define pb push_back
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define fr(i, a, b) for (int i = a; i >= b; i--)
// #define read(a, n) f(i, 0, n) cin >> a[i];
// #define SORT(v) sort(v.begin(), v.end())

// stack<char> s;
// int ans=1;

// bool isPresent(char a){
//     //vector<char>temp;
//     bool found=false;

//     if(s.top()==a||s.empty()){
//         s.push(a);
//         ans=max(ans,(int)s.size());
//         found=true;
//     }else{
//         return false;
//     }

//     // while(!s.empty()){
//     //     if(s.top()!=a){
//     //         found=false;
//     //     }
//     //     temp.pb(s.top());
//     //     s.pop();
//     // }
//     // for(char c:temp){
//     //     s.push(c);
        
//     // }
    
//     // if(found){
//     //     s.push(a);
//     //     ans=max(ans,(int)s.size());
//     // }
    
//     return found;

// }

// int main(){
//     string largeString;
//     largeString.reserve(1000000);
//     getline(cin,largeString);
    
//     for(char ch:largeString ){
//         if(!isPresent(ch)){
//             // ans=max(ans,(int)s.size());
//             while(!s.empty()){
//                 s.pop();
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }