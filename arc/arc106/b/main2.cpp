#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, m) {
    int c, d;
    cin >> c >> d;
    c--; d--;
    uf.unite(c, d);
  }

  vector<ll> sum(n);
  rep(i, n) {
    sum[uf.find(i)] += a[i];
    sum[uf.find(i)] -= b[i];
  }
  if (sum == vector<ll>(n)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}