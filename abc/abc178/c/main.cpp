#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll P(int n, int k) {
  ll ans = n;
  k--;
  rep(i, k) ans *= n-k;
  return ans;
}

int main() {
  COMinit();
  int n;
  cin >> n;
  ll ans = 0;
  for(int i=1; i<n; i++) {
    for(int j=1; i+j<=n; j++) {
      ans += (COM(n, i+j) * P(i+j, 2) % MOD * (ll)pow(8, n-(i+j)) % MOD)%MOD;
      // cout << i << " " << j << endl;
      // cout << ans << endl;
    }
  }
  ans %= MOD;
  cout << ans << endl;
  return 0;
}