#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    int a = m+k;
    n--;
    cout << min(a , n)*2 + 1 << endl;


}

signed main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}