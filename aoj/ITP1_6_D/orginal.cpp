#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m, tmp;
  scanf("%d %d", &n, &m);
  vector<vector<int>> a(n, vector<int>(m));
  vector<int> b(m);
  vector<int> c(m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      c[i] += a[i][j] * b[j];
    }
    printf("%d\n", c[i]);
  }
  return 0;
}