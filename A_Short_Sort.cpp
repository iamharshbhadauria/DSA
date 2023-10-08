#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    if(s[0] != 'a' and s[1] != 'b' and s[2] !='c'){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    auto Harsh_Bhadauria = chrono::high_resolution_clock::now();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}