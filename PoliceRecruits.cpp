#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;

ll m,n;
ll res,sum;
ll now,hired;
ll a[N];

void solve(){
  cin >> n;
  for (long i=1; i<=n; i++) cin >> a[i];
  for (long i=1; i<=n; i++){
    if (a[i] == -1){
        if (!hired) res++;
        else hired--;
    } else hired += a[i];
  } cout << res;
}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
  return 0;
}
