#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int INF = 1001001001;

string getLast(string s, int cnt) {
  return s.substr(s.size()-cnt, cnt);
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    string h = "abcd";
    cout << h[h.size()-2] << endl;
    rep(i, n) cin >> s[i];

    rep(i, n) {
      if (s[i].back() == 's') cout << s[i] + "es" << endl;
      else if (getLast(s[i], 2) == "sh") cout << s[i] + "es" << endl;
      else if (getLast(s[i], 2) == "ch") cout << s[i] + "es" << endl;
      else if (s[i].back() == 'o') cout << s[i] + "es" << endl;
      else if (s[i].back() == 'x') cout << s[i] + "es" << endl;
      else if (s[i].back() == 'f') {
        s[i].pop_back();
        cout << s[i] + "ves" << endl;
      }
      else if (getLast(s[i], 2) == "fe") {
        s[i].pop_back();
        s[i].pop_back();
        cout << s[i] + "ves" << endl;
      }
      else if (s[i].back() == 'y' && getLast(s[i], 2)[0] != 'a' && getLast(s[i], 2)[0]  != 'i' && getLast(s[i], 2)[0]  != 'u' && getLast(s[i], 2)[0]  != 'e' && getLast(s[i], 2)[0]  != 'o') {
        s[i].pop_back();
        cout << s[i] + "ies" << endl;
      }
      else {
        cout << s[i] + "s" << endl;
      }
    }

    return 0;
}