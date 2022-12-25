# table-yaml

部分的にテーブルを書くことができる、yamlの拡張です。

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

このような、テーブル構造をもったyamlを、

```yaml:
table: 
#{ name : age : school
 - hoge : 20  : foo univ
 - fuga : 21  : bar col
 - piyo : 22  : foo univ
#}
```

このように書くことができるようにします。

`#{` ~ `#}` で囲まれた部分をテーブルとして認識します。

## 使い方

```
$ tyaml input.tyaml [-o output.yaml]
```
