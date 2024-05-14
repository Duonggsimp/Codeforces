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
 
  ll cnt = 0;
  ll res = 0;
  unordered_map <ll,ll> mp;
  for (long i=1; i<=n; i++){
     cin >> a[i];
     cnt += a[i] == 1;
  }
 
  ll vt1 = 0, vt2 = 0;
  for (long i=1; i<=n; i++) if (a[i] == 1) { vt1 = i; break; }
  for (long i=n; i>=1; i--) if (a[i] == 1) { vt2 = i; break; }
  cout << vt2 - vt1 + 1 - cnt << xn;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
