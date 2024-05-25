#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
 
ll t,n,k;
ll res,cnt;
ll a[N];
string s;
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> n >> k;
  for (long i=1; i<=n; i++) cin >> a[i];
 
  for (long i=2; i<=n; i++){
    if (a[i-1] >= a[i]){
        ll d = abs(a[i-1] - a[i])/k+1;
        a[i] += k*d;
        res += d;
    }
  }
 
  cout << res;
  return 0;
 
}
