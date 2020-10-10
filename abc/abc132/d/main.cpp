#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

// nPnの順列に対して処理を実行する
void foreach_permutation(int n, std::function<void(int *)> f) {
  int indexes[n];
  for (int i = 0; i < n; i++) indexes[i] = i;
  do {
    f(indexes);
  } while (std::next_permutation(indexes, indexes + n));
}

// nPkの順列に対して処理を実行する
void foreach_permutation(int n, int k, std::function<void(int *)> f) {
  foreach_comb(n, k, [&](int *c_indexes) {
    foreach_permutation(k, [&](int *p_indexes) {
      int indexes[k];
      for (int i = 0; i < k; i++) {
        indexes[i] = c_indexes[p_indexes[i]];
      }
      f(indexes);
    });
  });
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<bool> p[n];
  foreach_permutation(
      n, k, [](int *indexes) {
        rep(i, k) {
          p[indexes[i]] = true;
        }
      }
  );
  return 0;
}