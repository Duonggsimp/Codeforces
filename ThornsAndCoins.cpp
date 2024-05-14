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
char a[N];
 
void solve(){
  cin >> n;
  for (long i=1; i<=n; i++){
     cin >> a[i];
  }
 
  ll res = 0;
  for (long i=2; i<=n; i++){
     res += a[i] == '@';
     if (a[i] == '*' && a[i-1] == '*') break;
  }
 
  cout << res << xn;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
