#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
 
ll t,n;
ll a[N];
string s,tmp;
 
void solve(){
  cin >> s;
  s[0] = toupper(s[0]);
  for (long i=0; i<s.size(); i++) cout << s[i];
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  t=1;
  while (t--) solve();
 
  return 0;
}
