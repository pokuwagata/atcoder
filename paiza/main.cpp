#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  vector<pair<int, vector<int>>> t;
  int cnt = 0;
  while(cnt < n) {
    if (cnt + 2 == n) {
      string f, s, th;
      cin >> f >> s >> th;
      int first = f == "G" ? 0 : stoi(f);
      int second = s == "G" ? 0 : stoi(s);
      int third = th == "G" ? 0 : stoi(th);

      t.push_back({0, {first, second, third}});
      cnt += 3;
    } else {
      string f, s;
      cin >> f >> s;
      int first = f == "G" ? 0 : stoi(f);
      int second = s == "G" ? 0 : stoi(s);

      pair<int, vector<int>> p;
      int state = 0;
      if(first == 10) state = 2;
      else if(first + second == b) state = 1;

      if(state == 2) {
        t.push_back({state, {first, 0}});
        cnt++;
      } else {
        t.push_back({state, {first, second}});
        cnt +=2;
        cout << cnt << endl;
      }
    }
  }

    for(auto p : t) {
      cout << p.first << ":" << p.second[0] << p.second[1] << endl;
    }

  return 0;
}