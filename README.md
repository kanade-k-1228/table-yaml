# table-yaml

部分的にテーブルを書くことができる、yamlの拡張です。

```yaml:
table: 
#{ name : age : school
 - hoge : 20  : foo univ
 - fuga : 21  : bar col
 - piyo : 22  : foo univ
#}
```

このようなテーブルを、

```yaml:
table:
 - name: hoge
   age: 20
   school: foo univ
 - name: fuga
   age: 21
   school: bar col
 - name: piyo
   age: 22
   school: foo univ
```

このようなyamlに変換します。

- `#{` ~ `#}` で囲まれた部分をテーブルとして認識します。
- `#{` で始まる行はヘッダです。
- テーブルの中の要素はプリミティブ型

## 使い方

```
$ tyaml input.tyaml output.yaml
```
