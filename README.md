# table-yaml

部分的にテーブルを書くことができる、yamlの拡張です。

```yaml:
prefecture:
#{ name     : suffix : area
 - tokyo    : to     : kanto
 - kyoto    : fu     : kinki
 - osaka    : fu     : kinki
 - hokkaido : do     : tohoku
 - aichi    : ken    : tokai
#}
```

このようなテーブルを、

```yaml:
prefecture:
 - name: tokyo
   suffix: to
   area: kanto
 - name: kyoto
   suffix: fu
   area: kinki
 - name: osaka
   suffix: fu
   area: kinki
 - name: hokkaido
   suffix: do
   area: tohoku
 - name: aichi
   suffix: ken
   area: tokai
```

このようなyamlに変換します。

- `#{` ~ `#}` で囲まれた部分をテーブルとして認識します。
- `#{` で始まる行はヘッダです。
- テーブルの中の要素はプリミティブ型

## 使い方

```
$ tyaml input.tyaml output.yaml
```
