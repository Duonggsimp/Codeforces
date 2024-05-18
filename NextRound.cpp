#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
 
ll t;
ll n,k;
ll res;
ll a[N];
string s;
 
void solve(){
  cin >> n >> k;
  for (long i=1; i<=n; i++) cin >> a[i];
  for (long i=1; i<=n; i++) res += a[i] >= a[k] && a[i] > 0;
  cout << res;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  t = 1;
  while (t--) solve();
 
  return 0;
}
