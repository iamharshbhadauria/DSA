#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n;

    vector<int> arr(n) , pre(n , 0);
    map<int , int> mp;
    int mn=INT_MAX , ind=-1;

    for(int i=0 ; i<n ; ++i) cin >> arr[i];
    cin >> k;
    for(int i=0 ; i<n ; ++i) mp[arr[i]]++;

    auto it = mp.begin();
    
    int sm = (*it).first , ls=0 , rem=k;
    // cout << "SM :  " << sm << endl;
    for(int i=0 ; i<n ; ++i){
        mp[arr[i]]--;
        // cout << arr[i] << " mp " << mp[arr[i]] << endl;
        if(arr[i] != sm) {
            // cout << "PROBLEM : " << endl;
            // cout << "AR :" << arr[i] << " SM: " << sm  << endl;
            if(mp[arr[i]] == 0) mp.erase(arr[i]);
        }
        else{
                            // cout << "HELLO11  ";

            if(mp[arr[i]] == 0){
                // cout << "HELLO  ";
                pre[i] =  min(k / arr[i] , rem / (arr[i]-ls)) ;
                // cout << "THIS : " << k/arr[i] << " " << rem / (arr[i]-ls) << endl;
                // cout << "REM : " << rem << " ARR : " << arr[i] << " LS : " << ls << endl;
                rem %= k % arr[i];
                // cout << "REM : " << rem << " ARLS : " << arr[i]-ls << endl;
                mp.erase(arr[i]);
                ls = arr[i];
                auto it = mp.begin();
                if(it != mp.end()) sm = (*it).first;
                else sm = -1;
                    // cout << "SM :  " << sm << endl;

            }
        }
    }
    int curr=0;
    // for(int i=0 ; i<n ; ++i) cout << pre[i] << " ";
    vector<int> v;
    for(int i=n-1; i>=0 ; --i){
        if(pre[i] != 0) curr = pre[i];
        v.push_back(curr);
    }
    for(int i=v.size()-1 ; i>=0 ; --i) cout << v[i] << " ";
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