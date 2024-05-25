#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
 
ll t,n,k;
ll res1,res2;
ll a[N];
string s;
 
int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  cin >> n;
  cin >> s;
 
  for (long i=0; i<s.size(); i++){
    res1 += s[i] == '1' ;
    res2 += s[i] == '0' ;
  }
 
  cout << s.size() - 2*min(res1,res2);
  return 0;
 
}
