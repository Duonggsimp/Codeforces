#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2e6+5;
const ll mo=1e9+7;
 
ll n,t;
ll x;
ll a[N];
 
void solve(){
  cin >> n;
  for (long i=1; i<=n; i++){
     cin >> a[i];
  }
 
  sort(a+1,a+n+1);
  ll res = a[n] - a[1] + a[n-1] - a[2];
  cout << res*2 << xn;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
