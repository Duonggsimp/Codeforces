#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2e6+5;
const ll mo=1e9+7;
 
ll n,t,k;
ll a[N];
 
void solve(){
 
  cin >> n;
  ll cnt = 0;
  for (long i=1; i<=n; i+=2){
    for (long j=i; j<=n; j+=j){
        a[++cnt] = j;
    }
  }
 
  for (long i=1; i<=n; i++) cout << a[i] << ' ';
  cout << xn;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
