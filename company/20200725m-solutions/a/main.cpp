#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int x;
  cin >> x;
  int ans;
  if(x>=400 && x<=599) {
   ans = 8; 
  }
  if(x>=600 && x<=799) {
   ans = 7; 
  }
  if(x>=800 && x<=999) {
   ans = 6; 
  }
  if(x>=1000 && x<=1199) {
   ans = 5; 
  }
  if(x>=1200 && x<=1399) {
   ans = 4; 
  }
  if(x>=1400 && x<=1599) {
   ans = 3; 
  }
  if(x>=1600 && x<=1799) {
   ans = 2; 
  }
  if(x>=1800 && x<=1999) {
   ans = 1; 
  }
  cout << ans << endl;
  return 0;
}