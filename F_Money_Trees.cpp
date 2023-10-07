#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n >> k;
    int arr[n] , pre[n] , v[n] , pre2[n];
    for(int i=0 ; i<n ; ++i) cin >> arr[i];
    for(int i=0 ; i<n ; ++i) cin >> v[i];

    for(int i=0 ; i<n-1 ; ++i){
        if(v[i] % v[i+1] == 0) pre[i] = 1;
        else pre[i] = -1;
    }
    pre[n-1] = 2;

    for(int i=0 ; i<n ; ++i) pre2[i] = pre[i];
    for(int i=0 ; i<n-1 ; ++i) if(pre2[i] == 1 and pre2[i+1] == -1) pre[i+1]=2;


    int mx = -1 , count=0 , tot=0 , ans=0 , ind=0;
    if(pre[0] != 1) ind = -1;
    for(int i=0 ; i<n ; ++i){
        if(pre[i] == 1 or pre[i] == 2){
            count += arr[i];
            tot++;
        }
        
        if(count > k){
            int a = i-ind+1;
            while(a--){
                count -= arr[ind];
                ind++;
                tot--;
                if(count <= k) break;
            }
        }

        if(tot > ans and count <= k) ans = tot;

        if(pre[i] == -1 or pre[i] == 2){
            count = 0;
            tot = 0;
            ind = -1;
        }
        if(pre[i] == 0 and pre[i+1] == 1) ind = i+1;
    }

    cout << ans << endl;
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