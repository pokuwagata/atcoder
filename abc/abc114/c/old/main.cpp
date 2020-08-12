#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int ans = 0;
int n;

void dfs(int x, int use) {
  if(x >= n) return;
  if(use == 0b111) ans++;

  dfs(10*x+7, use | 0b001);
  dfs(10*x+5, use | 0b010);
  dfs(10*x+3, use | 0b100);
}

int main() {
  cin >> n;
  dfs(0, 0);
  cout << ans << endl;
  return 0;
}