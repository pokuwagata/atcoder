#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> to(n);

  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, INF);
  vector<int> pre(n);

  q.push(0);
  dist[0] = 0;
  while(!q.empty()) {
    int v = q.front(); q.pop();
    for(int x : to[v]) {
      if(dist[x] != INF) continue;
      dist[x] = dist[v] + 1;
      q.push(x);
      pre[x] = v;
      }
  }
  cout << "Yes" << endl;
  for(int i=1; i<n; i++) {
    int ans = pre[i];
    ans++;
    cout << ans << endl;
  }

  return 0;
}