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
 
void solve(){
  string s;
  cin >> n;
  cin >> s;
  ll res = 0;
  ll maxx = 0;
  ll cnt = 0;
  for (char i : s){
    if (i == '.') res++, cnt++;
    if (i == '#') res = 0;
    maxx = max(res, maxx);
  }
  cout << (maxx >= 3 ? 2 : cnt) << xn;
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> t;
  while (t--) solve();
 
  return 0;
}
