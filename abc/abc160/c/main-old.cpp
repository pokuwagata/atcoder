#include <stdio.h>
using namespace std;

const int INF = 100000000; // 十分大きな値

/* メモ再帰 */
int dp[(1<<20) + 1][21]; // dpテーブルは余裕をもったサイズにする
int rec(int bit, int v, int N, int dist[2][3])
{
    // すでに探索済みだったらリターン
    if (dp[bit][v] != -1) return dp[bit][v];

    // 初期値
    if (bit == (1<<v)) {
        return dp[bit][v] = 0;
    }

    // 答えを格納する変数
    int res = INF;

    // bit の v を除いたもの
    int prev_bit = bit & ~(1<<v);

    // v の手前のノードとして u を全探索
    for (int u = 0; u < N; ++u) {
        if (!(prev_bit & (1<<u))) continue; // u が prev_bit になかったらダメ

        // 再帰的に探索
        if (res > rec(prev_bit, u, N, dist) + dist[u][v]) {
            res = rec(prev_bit, u, N, dist) + dist[u][v];
        }
    }

    return dp[bit][v] = res; // メモしながらリターン
}

int main()
{
  int k, n, tmp, d;
  scanf("%d %d", &k, &n);
  int dist[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      dist[i][j] = -1;
    }
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      dist[i][i + 1] = a[i + 1] - a[i];
      dist[i][n - 1] = a[n - 1] - a[i];
    }
    else if (i == n - 1)
    {
      dist[i][0] = a[i] - a[0];
      dist[i][i - 1] = a[i] - a[i - 1];
    }
    else
    {
      dist[i][i + 1] = a[i + 1] - a[i];
      dist[i][i - 1] = a[i] - a[i - 1];
    }
  }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d ", dist[i][j]);
  //   }
  //   printf("\n");
  // }

  for (int bit = 0; bit < (1<<n); ++bit) for (int v = 0; v < n; ++v) dp[bit][v] = -1;

    // 探索
    int res = INF;
    for (int v = 0; v < n; ++v) {
        if (res > rec((1<<n)-1, v, n, dist)) {
            res = rec((1<<n)-1, v, n, dist);
        }
        // dist[n][n] の型は intの配列(n)の配列(n)
        // 式中のdistは intの配列(n)のポインタ
        // 関数の宣言は、func(int (*dist)[n])
        // ↑のnの部分が予めわからない場合は、どうしたらいいか？
        // C99では、func(int n, dist[][n])でいける, C++では駄目っぽい
        // 関数の仮引数における[]は最外周の配列に限りポインタに読み替えられる
    }

  return 0;
}