C言語の学習記録です。Aizu Online Judgeの問題と大学の授業で書いたコードを記録しています。

「C言語ミスメモ」

入出力(printf scanf)
* `scanf` で変数の前に '&' が必要
* `scanf` の引数の間にはカンマ `,` が必要！
* `printf` で変数の中身を出すときは `%d` を使う (`printf("h:m:s")` だと文字がそのまま出る)

if文
* C言語では `a < b < c` みたいな3つつなげる書き方は不可！
　`a < b && b < c` のように `&&` (AND) で分ける。
* `if` の条件は丸かっこ `( )`、実行処理は波かっこ `{ }` で囲む。

Github commit
* GitHubと手元の履歴がズレたら `git pull --rebase origin main` で解決。
