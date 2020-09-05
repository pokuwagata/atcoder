#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  string n;
  cin >> n;
  ll sum = 0;
  for(char i : n){
    sum += i - '0';
  }
  if(sum % 9 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}