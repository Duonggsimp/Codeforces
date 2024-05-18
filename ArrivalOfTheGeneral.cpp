#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;

ll t;
ll n;
ll cnt;
ll a[N];
ll tmp;
ll maxx = 0;
ll minn = 1e18;

void solve(){
  cin >> n;
  for (long i=1; i<=n; i++) cin >> a[i], maxx = max(maxx,a[i]), minn = min(minn,a[i]);

  ll l = 0, f = 0;
  for (long i=1; i<=n; i++) if (a[i] == minn) l = i;
  for (long i=n; i>=1; i--) if (a[i] == minn) f = i;
  ll vt1 = max(l,f);
  for (long i=1; i<=n; i++) if (a[i] == maxx) l = i;
  for (long i=n; i>=1; i--) if (a[i] == maxx) f = i;
  ll vt2 = min(l,f);
  //cout << vt1 << ' ' << vt2 << xn;
  cout << (vt1 > vt2 ? vt2 - 1 + n - vt1 : vt2 - 1 + n - vt1 - 1) ;
}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  t = 1;
  while (t--) solve();

  return 0;
}
