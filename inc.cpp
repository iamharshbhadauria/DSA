#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int arr[n] , ans[n];
    for(int i=0 ; i<n ; ++i) cin >> arr[i];

    int a=1;
    for(int i=0 ; i<n ; ++i){
        if(a == arr[i]) a++;
        ans[i] = a;
        a++;
    }
    cout << ans[n-1] << endl;
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