#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    if(k > 3) cout << 0 << endl;
    else if(k == 3){
        if(m <= n) cout << 0 << endl;
        else{
            int x = m % n , y = (m / n) - 1;
            cout << x + (y*(n-1)) << endl;
        }
    }
    else if(k == 2){
        int x = (m / n)-1;
        cout << n + x << endl;
    }
    else cout << 1 << endl;
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

