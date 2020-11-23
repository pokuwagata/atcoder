#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

string s;
int peekX(int cur) {
  if(s[cur+1] == 'f') {return peek(cur+1) - (cur+1);}
  else if(s[cur+1] == 'x') { return cur + 1;}
  else return -1;
}

int peek(int cur) {
  if(s[cur+1] == 'f') {
    if (peek(cur+1) < 0) return -1;
    return peek(cur+1) - (cur+1);
  }
  else if(s[cur+1] == 'o') { 
    if (peekX(cur+1) < 0) return -1;
    else return peekX(cur+1) - cur + 1;
  }
  else return 0;
}

int main() {
  int n;
  cin >> n;
  cin >> s;

  int cur = 0;
  int ans = 0;
  while (cur < s.size()) {
    if(s[cur] == 'f') {
      int skip = peek(cur);
      cur += skip;
      if (skip == 0) ans++;
    }
    else ans++;
    cur++;
  }
  return 0;
}