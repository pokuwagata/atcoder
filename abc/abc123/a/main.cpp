#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  vector<int> a(5);
  int k;
  rep(i, 5) cin >> a[i];
  cin >> k;
  rep(i, 5) {
    for(int j=i+1; j<5; j++) {
    if(a[j]-a[i] > k) {
      cout << ":(" << endl;
      return 0;
    }}
  }
  cout << "Yay!" << endl;
  return 0;
}