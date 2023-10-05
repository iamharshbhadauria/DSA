#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    map<int , multiset<int>> m;
    for(int i=0 ; i<n ; ++i){
        int x , y;
        cin >> x >> y;
        m[x].insert(y);
    }

    int count = 0;
    for(auto it:m){
        int x = it.first;
        int cnt = x;
        auto it1 = m[x].end();
        it1--;
        int s = m[x].size();
        while(cnt>0 and s>0){
            count += (*it1);
            it1--;
            cnt--;
            s--;
        }
    }

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