#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[k] , b[k];
    for(int i=0 ; i<k ; ++i) cin >> a[i];
    for(int i=0 ; i<k ; ++i) cin >> b[i];
    int q;
    cin >> q;

    for(int i=0 ; i<q ; ++i){
        int x;
        cin >> x;
        if(x < b[0]){
            int mn = min(x , a[0]+b[0]-x);
            int mx = max(x , a[0]+b[0]-x);
            mn--;
            mx--;
            while(mx > mn){
                swap(s[mn] , s[mx]);
                mn++;
                mx--;
            }
        }
        else if(x > a[n-1]){
            int mn = min(x , a[n-1]+b[n-1]-x);
            int mx = max(x , a[n-1]+b[n-1]-x);
            while(mx > mn){
                swap(s[mn] , s[mx]);
                mn++;
                mx--;
            }
        }
        else{
            int z = x-b[0];
            int mn = min(x , a[z]+b[z]-x);
            int mx = max(x , a[z]+b[z]-x);
            while(mx > mn){
                swap(s[mn] , s[mx]);
                mn++;
                mx--;
            }
        }
    }
    cout << s << endl;
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