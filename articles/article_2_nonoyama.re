= Docker

== Dockerとは
「どこでも動く」を達成するには、言語等の環境構築も必要になる。つまり、docker以前の仮想化環境では言語等の環境差分は解消できていない。そこでlinuxカーネルを共有することでアプリケーション層を共有することにした。

=== 構築時間
1. Dockerfileを作成する
2. docker compose upだけで起動できる
数秒

=== 仕組み

Dockerの構築は、OS全体ではなくlinuxカーネルを共有した。
1. Linuxカーネルを共有する
2. Namespaceでプロセスを隔離する
3. cgroupsでCPU・メモリを制御する
4. DockerfileからImageを作る
5. ImageからContainerを起動する

== 構築の時間問題の解消

Linuxカーネルを共有するだけなので、OSを共有していたときよりも早い
1. Dockerfileを作成する
2. docker compose upだけで起動できる

== 環境差分の解消

- プロジェクトごとに、Dockerfileを作成するので、個人による設定を脱却
- PCの交換・新メンバーの加入であっても、コマンド一つで構築できる
- バージョンの更新も、Dockerfileの更新のみで更新ができる
- 仕様書を作成する必要がなくなる。=>Dockerfileが仕様書になる。