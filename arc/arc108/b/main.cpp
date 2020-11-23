#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

string s;
int cnt = 0;

void left(int start, int end) {
  if(end - start == 2) {
    if(s[start] == 'f' && s[end] == 'x') cnt++;
  }
  for(int i = start; i<=end; i++) {
    if(s[i] == 'o') {
      if(i>start) left(0, i-1);
      if(i+1<end) right(i+1, s.size()-1)
    } 
  }
}

int main() {
  int n;
  cin >> n;
  cin >> s;

  int cur = 0;
  int ans = 0;
  for(int i = 0; i<s.size(); i++) {
    if(s[i] == 'o') {
      if(i>0) left(0, i-1);
      if(i+1<s.size()) right(i+1, s.size()-1)
    } 
  }
  return 0;
}