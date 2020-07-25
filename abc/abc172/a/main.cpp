#include <bits/stdc++.h>
#include <chrono>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  auto start = chrono::system_clock::now();
  int i = 0;
  while(chrono::duration_cast<std::chrono::milliseconds>(chrono::system_clock().now() - start).count() < 2000) {
    i++;
  }
  cout << i;

  return 0;
}