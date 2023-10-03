#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;
vector<int> dp(N);
int arr[N];

int func(int a){
  int cost = INT_MAX;
  if(dp[a] != -1) return dp[a];
  if(cost == 0) return 0;
  cost = min(cost , func(a-1) + abs(arr[a] - arr[a-1]));
  if(a > 1) cost = min(cost , func(a-2) , abs(arr[a] - arr[a-2])); 
  return dp[a] = cost;
}

signed main(){
  int n;
  cin >> n;
  // int arr[n];
  for(int i=0 ; i<n ; ++i){
    cin >> arr[i];
  }
  cout << func(n-1);
  return 0;
}