#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> ans;
  for(int i=1; i*i<=n; i++) {
    if(n%i==0) {
      ans.push_back(i);
      if(n/i != i) {
        ans.push_back(n/i);
      }
    }
  }
  sort(ans.begin(), ans.end());
  for(auto a : ans) {
    cout << a << endl;
  }
  return 0;
}