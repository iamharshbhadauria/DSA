#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n >> k;
    int arr[n];
    map<int , int> mp , m;
    set<int> st;

    int mn=1;
    for(int i=0 ; i<n; ++i){
        cin >> arr[i];
        int x = arr[i];
        if(x >= mn){
            for(int j=mn ; j<=x ; ++j) mp[j] = i+1;
            mn = x+1;
        }
        st.insert(x);
    }
    mn=1;
    for(int i=n-1 ; i>=0; --i){
        int x = arr[i];
        if(x >= mn){
            for(int j=mn ; j<=x ; ++j) m[j] = i+1;
            mn = x+1;
        }
    }
    if(st.find(1) != st.end()) cout << 2*(n) << " ";
    else cout << 0 << " ";
    for(int i=2 ; i<=k ; ++i){
        int x = mp[i];
        int y = m[i]+1;
        if(st.find(i) == st.end()) cout << 0 << " ";
        else cout << abs(y-x)*2 << " ";
    }
    cout << endl;
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