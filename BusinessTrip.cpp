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
 
  cin >> n;
  for (long i=1; i<=12; i++) cin >> a[i];
 
  sort(a+1,a+12+1,greater<ll>());
  a[13] = 1e18;
  while (res < n){
    cnt++;
    res += a[cnt];
  }
 
  cout << (cnt == 13 ? -1 : cnt);
  return 0;
 
}
