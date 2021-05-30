# techbookfest11

pankona が技術書典11に向けて本を書くためのリポジトリです。
本リポジトリは [TechBooster/ReVIEW-Template](https://github.com/TechBooster/ReVIEW-Template) をテンプレートとして生成されました。

## ビルド方法

まず、以下のコマンドで PDF 生成のための docker image をビルドします。

```sh
docker-compose build review
```

次に、以下のコマンドで PDF を生成します。


```sh
./build-in-docker-compose.sh
```

## LICENSE

T.B.D

## Author

Yosuke Akatsuka (a.k.a [@pankona](https://github.com/pankona))

