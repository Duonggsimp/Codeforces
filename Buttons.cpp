#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll t;
ll a,b,c;
 
void solve(){
  cin >> a >> b >> c;
  if (c % 2 == 0){
  if (a > b) cout << "First" << xn; else cout << "Second" << xn;
  } else {
  if (b > a) cout << "Second" << xn; else cout << "First" << xn;
  }
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    cin >> t;
    while (t--) solve();
    return 0;
}
