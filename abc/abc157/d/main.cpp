#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

vector<int> to[100005];
set<int> block[100005];

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  rep(i, k) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    block[a].insert(b);
    block[b].insert(a);
  }

  vector<int> ans(n);
  rep(i, n) {
    queue<int> q;
    vector<int> dist(n, INF);
    q.push(i);
    dist[i] = 0;
    while(!q.empty()) {
      int v = q.front(); q.pop();
      for(int x : to[v]) {
        if(dist[x] != INF) continue;
        dist[x] = dist[v] + 1;
        if(dist[x] >=2 && !block[i].count(x)) {
          cout << x << endl;
          ans[i]++;
        }
        q.push(x);
      }
    }
  }

  rep(i, n-1) {
    cout << ans[i] << " ";
  }
  cout << ans[n-1] << endl;


  return 0;
}