#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k , x;
    cin >> n >> k >> x;
    if(k > n or k>x+1){
        cout << -1 << endl;
        return;
    }
    int count=0 , a = 0;
    if(k==x) x--;
    for(int i=0 ; i<k ; ++i) count += i;
    for(int i=k ; i<n ; ++i) count += x;
    cout << count << endl;
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