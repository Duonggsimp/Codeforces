#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2e6+5;
const ll mo=1e9+7;
 
ll n,t,k;
 
void solve(){
 
  cin >> n >> k;
  ll a[n+5] = {}; ll x[n+5] = {}; ll s[n+5] = {};
  for (long i=1; i<=n; i++) cin >> a[i];
  for (long i=1; i<=n; i++) cin >> x[i];
  for (long i=1; i<=n; i++) s[abs(x[i])] += a[i];
 
  bool ok = 1;
  ll live = 0;
  for (long i=1; i<=n; i++){
    live += k - s[i];
    if (live < 0) ok = 0;
  }
  cout << (ok ? "YES\n" : "NO\n" );
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
