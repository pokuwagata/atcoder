#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  int r,c, rs, tmp;
  cin >> r >> c;
  int cs[c];
  for(int i = 0; i <= c; i++) cs[i] = 0;
  for (int i = 0; i < r; i++)
  {
    rs = 0;
    for (int j = 0; j < c; j++)
    {
      cin >> tmp;
      cs[j]+= tmp;
      rs += tmp;
      cout << tmp << ' ';
    }
    cout << rs << endl;
    cs[c] += rs;
  }
  for(int i=0; i < c; i++) cout << cs[i] << ' ';
  cout << cs[c] << endl;
  
  return 0;
}