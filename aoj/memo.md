# memo

## AOJ

- `<<endl` で改行挿入できる
- pow は double を返す、#include cmath 必要
- cin, cout は scanf, printf でも代用できる
- scanf の第一引数は受け取る文字列を表現する
- swap は`<algorithm>`header
  - &は不要
- sort の素朴な実装は勝ち抜き戦（O(n!))
- scanf で変数のリファレンス忘れがち
- printf で\n 忘れがち
- 長さ不定の入力の場合は while と if で受ける
  - while は for 文の終了条件を省略しても実現できる。index が必要な場合はこっちの方がいい
- int → double への cast は C-style で良さそう
  - <https://stackoverflow.com/questions/28002/regular-cast-vs-static-cast-vs-dynamic-cast>
- 円周率は<math.h>の M_PI にある
- ""と''は意味が違う？
  - <https://stackoverflow.com/questions/3683602/single-quotes-vs-double-quotes-in-c-or-c>
  - ""文字列リテラルは char の配列で\0 で終端する、配列は式の中では配列の先頭要素へのポインタに読み替えられる
    - 添字演算子`[]`は配列と無関係、`array[i]`は array がポインタに読み替えられて\*(p+i)になるだけ
- c/c++には switch 文がある
- `<alghorihm>`で max, min 関数使える
- 最大・最小を求めるのは、初期値に必ず負ける数を設定しておいて for 文で変数を更新しながら勝ち抜き戦すると手軽
- 合計を保持する際には型に注意する。long int 2^31 -1, long long 2^63 -1
- 大抵は long int と int に差はなく 4byte(32bit)（処理系依存ではある）
  - <https://www.quora.com/Whats-the-difference-between-int-type-and-long-int-type-in-C++>

## 3/21 AGC

- 動的な char 型の多次元配列の受け取り方
  - `scanf("%s", &m[i][0])`はどういう意味？ そもそも正しい？
- ↑ の関数への渡し方
- 多次元配列の長さの求め方
- grid 系問題を解いたことない
- A, B 問題を読んだが、問題が抽象化されていて正しく意図を理解できない、