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
  for (char &i : s) if (i == '+') i = ' ';
  stringstream ss(s);
  while (ss >> tmp){
    a[++n] = stoll(tmp);
  }
  sort(a+1,a+n+1);
  for (long i=1; i<n; i++) cout << a[i] << '+';
  cout << a[n];
}
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  t=1;
  while (t--) solve();
 
  return 0;
}
