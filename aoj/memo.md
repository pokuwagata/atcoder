# memo

## 目標

- 2020/8ぐらいに茶色になれると嬉しい

## AOJ

- `<<endl` で改行挿入できる
- pow は double を返す、#include cmath 必要
- cin, cout は scanf, printf でも代用できる
- scanf の第一引数は受け取る文字列を表現する
- **swap は`<algorithm>`header**
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
- **`<alghorihm>`で max, min 関数使える**
- 最大・最小を求めるのは、初期値に必ず負ける数を設定しておいて for 文で変数を更新しながら勝ち抜き戦すると手軽
- 合計を保持する際には型に注意する。long int 2^31 -1, long long 2^63 -1
- 大抵は long int と int に差はなく 4byte(32bit)（処理系依存ではある）
  - <https://www.quora.com/Whats-the-difference-between-int-type-and-long-int-type-in-C++>
- 偶数かつ偶数=true || 奇数かつ奇数=true 　<=> 和が偶数 を利用してこういう模様を作れる

```
4 4
#.#.
.#.#
#.#.
.#.#
```

- do{} while(); は最初に 1 度処理を実行する
- for 文で最後のループだけ別の処理をしたい場合は、手前までループして次の処理で if 文にしてしまうのもあり
  - 例) '1 2 3'のように最後だけ右にスペースをつけない処理等
  - もしくは`cout <<" "<< n[num-i-1]`
- `if(!true)`書ける
- `#include<map>` `map<char,int>ll;`で map 型使える
- サイズ固定の多次元配列の初期化 `int arr[10][20] = {0};`, `memset(arr, 0, sizeof arr);`
  - <https://stackoverflow.com/questions/23039134/how-to-use-memset-function-in-two-dimensional-array-for-initialization-of-member>
- `scanf("%s %d",mark,&tmp);` はアドレス演算子の返す型がポインタで、配列は式の中でポインタに読み替えられるので OK
- 代入文は並べられる`S[i] = H[i] = C[i] = D[i] = 0;`
- `vector<vector<int>>`の>>は c++11 以降じゃないとエラーになる。g++はオプションを指定することでコンパイル時のバージョンサポートを
  変更できる
  - <https://www.neuralsparrow.com/entry/2017/04/12/002201>
- `1 2 3`のような入力は cin >> で受けたほうが楽、`scanf`だと無理？

```
timeout: the monitored command dumped core 0.00user 0.00system 0:00.00elapsed 66%CPU (0avgtext+0avgdata 3184maxresident)k 0inputs+16outputs (0major+236minor)pagefaults 0swaps
```

- vector を使うと ↑ のエラーが出るみたい。できるだけ配列を使ったほうがいい

- `int a[n][m] = {0};`動的配列の初期化は無理ぽい
- 配列は初期化せずに加算等を行うと意図しない結果になる
- ITP1_6_D はなぜ不正解なのかよく分からない...
- `while`の中で`scanf`と`printf`すると、実行時は 1 入力に対して出力後に次の入力を待つように見えるが実際には入力を全て受けてから全て出力するので問題ない
- `scanf("%d")`のループで`1 2 3`を受け取ることは可能
- 入力の matrix に対して加工・行列追加等を行って出力する場合は、読み込みと出力を分離したほうがすっきりするかも（別の二次元配列を出力用に用意する）
  - ITP1-7
- 出力値が変な場合は`printf`に表示したい変数を渡し忘れていないか確認する
  - `printf("%d")`等
- 32bit int は −2,147,483,648 から 2,147,483,647 桁数は 10 桁
- 64bit long long int は最大が 9223372036854775807, 桁数は 19 桁
- long long int は`printf("%lld", hoge)`
- `(int)num[0]`で 5 が 53 になるのはなぜなんだろう？
  - `ch -0`で int にキャストできる
- 終端文字までのループは`while((ch = getchar()) != '\n')`
  - 改行文字を含む場合はEOFで判定
- 大文字 → 小文字変換は、`ch + 32`
- アルファベット判定は`ch >= 'a' && ch <= 'z'`
- `<bits/stdc++.h>` は何？
  - <https://stackoverflow.com/questions/25311011/how-does-include-bits-stdc-h-work-in-c>

## 3/21 AGC

- 動的な char 型の多次元配列の受け取り方
  - `scanf("%s", &m[i][0])`はどういう意味？ そもそも正しい？
- ↑ の関数への渡し方
- 多次元配列の長さの求め方
- grid 系問題を解いたことない
- A, B 問題を読んだが、問題が抽象化されていて正しく意図を理解できない、

## 3/28 ABC160

- int, long long int の 10 進数の最大桁数は把握した方が良さそう
- 多次元配列をどう関数へ渡したらいい？ 宣言は`int *dist[],`でいいみたい。実行時は？
- C99 では、func(int n, dist[][n])でいける, C++では駄目っぽい
  - 関数の仮引数における[]は最外周の配列に限りポインタに読み替えられる
  - dist[n][n] の型は int の配列(n)の配列(n)
  - 式中の dist は int の配列(n)のポインタ
- `1<<n`はビットシフトを表しているらしい
- 巡回セールスマン問題と bit DP は未経験
  - <https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361#0-%E3%83%93%E3%83%83%E3%83%88%E3%81%A8%E3%81%AF>
  - しかし、C 問題については方法の適用以前に素朴な解決策があった
- acc でコンテストのテストデータ落とせないのはなぜ？

## 4/4 ABC161

### a

- `iostream` or `<algorithm>` で `swap` が使える
  - `swap(a, c);` で、変数や配列の要素同士を入れ替えることができる

### b

- int 型同士の割り算の商が int に丸められることに気づくのが遅すぎた
  - (double) でキャストすればいい
  - もしくは等式を変形して割り算が発生しないようにする
  - C++の暗黙的キャストのルールを知らない

### c

- 良かったこと
  - 紙を使えた、図を書けた
  - 余りを利用することに気づけたこと
  - エッジケース（多分）以外は正解していた
- 改善点
  - 1 % 3 が1だと知らなかった。つまり剰余の結果が分子になる
    - なので分子・分母の大小で場合分けして複雑に考えてしまった
  - 既に定義済みの関数の再実装で思考コストを削られていた感ある
    - `#include <iostream>` で `abs` が使える
    - `<algorithm>` で `min` が使える
  - 愚直に `n>k`, `n=k`, `n<k` で場合分けして検討した方が良かった
  - 剰余の値だから int で十分というのは勘違い
    - 分子が long long なら剰余だって long long になる
    - 答えの出力に %d を使っていたので long long が正しく扱われなかった
      - cout だったらそういうことに気を使わなくていいので楽
  - テストケースとして、各値が最小の場合と最大の場合ぐらいは検討してもいいんじゃないか

### 解説動画

- もっと c++ の機能を使っていってもいいかも
  - `vector` , `cin`, `cout`, `<bits/stdc++.h>`
- やはり `rep` は使ったほうが良いかも

## ABS

- `3つのマスからなるマス目` というとき、マス目という言葉はマスの集合を指すらしい
