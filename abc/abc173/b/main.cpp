#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
  }
  for (const auto &[key, value] : mp) {
    cout << key << value;
  }

  printf("%s x %d\n", "AC", mp["AC"]);
  printf("%s x %d\n", "WA", mp["WA"]);
  printf("%s x %d\n", "TLE", mp["TLE"]);
  printf("%s x %d\n", "RE", mp["RE"]);
  return 0;
}