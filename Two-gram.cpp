#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
 
ll t,n,k;
ll cnt;
ll maxx;
ll a[N];
string res;
string s;
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> n;
  cin >> s;
  unordered_map <string,ll> mp;
  for (long i=1; i<n; i++){
    string st = s.substr(i-1,2);
    mp[st]++;
    if (mp[st] > maxx){
        maxx= mp[st];
        res = st;
    }
  }
  cout << res;
  return 0;
}
