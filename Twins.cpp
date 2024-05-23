#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;

ll n,m,k;
ll sum;
ll res;
ll a[N];

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for (long i=1; i<=n; i++) cin >> a[i], sum += a[i];

  sort(a+1,a+n+1,greater<ll>());
  for (long i=1; i<=n; i++){
    res += a[i];
    if (res > sum - res){
        cout << i;
        return 0;
    }
  }
}
