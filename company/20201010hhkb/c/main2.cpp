#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  sort(p.begin(), p.end());
  deque<int> q;
  rep(i, n) q.push(p[i]);
  vector<int> ans(n);
  while(q.empty()) {
    if(q.front() == 0) {
      int v = q.back();
      ans[q.size()-1] = v + 1;
      q.pop_back();
    } else {
      int v = q.front();
      ans[q.size()-1] = v - 1;
      q.pop_front();
    }

  }

  return 0;
}