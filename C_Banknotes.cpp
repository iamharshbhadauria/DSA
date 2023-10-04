#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k;
    cin >> n >> k;

    int arr[n];
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i];             
    }

    sort(arr+1 , arr+n);

    for(int i=0 ; i<n ; ++i){

    }

    double power = pow(10 , arr[1]);
    int cnt = 0 , n1=n-1 ,i=1;

    while(n--){
        double a = pow(10 ,arr[i]);
        double b = pow(10 ,arr[i+1]);
        int c = a*9;
        int d = k-9;
        if((d+c) >= b){
            i++;
            continue;
        }
        while(true){
            
        }
    }

    




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