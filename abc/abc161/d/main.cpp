#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;

int main() {
  int k;
  cin >> k;

  vector<int>a;
  rep(i,9) a.push_back(i+1);

  while(1) {
    if(a.size() >= k) {
      rep(i, a.size()) cout << a[i] << endl;
      cout << a[k-1] << endl;
      return 0;
    }
    k-= a.size();

    vector<int> old;
    swap(old, a);
    for(ll v : old) {
      for(int i=-1; i<=1; i++) {
        int v2 = v % 10 + i;
        int add = v*10 + v2;
        if(v2 >=0 && v2 <=9) a.push_back(add);
      }
    }
  }
  return 0;
}