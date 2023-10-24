#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , a , q;
    cin >> n >> a >> q;

    string s;
    cin >> s;

    int count = a , tot=a;
    for(int i=0 ; i<q ; ++i){
        if(count >= n){
            cout << "YES" << endl;
            return;
        }
        if(s[i] == '+') count++;
        else count--;

        if(s[i] == '+') tot++;
    }
    if(count >= n){
        cout << "YES" << endl;
        return;
    }
    if(tot < n){
        cout << "NO" << endl;
        return;
    }
    cout << "MAYBE" << endl;
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