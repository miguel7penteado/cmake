# Projeto 2 - CMake

```bash
# criando o projeto
cmake .
# compilando e gerando o binário executável
make all
```


```bash
for i in `ls | grep -v -e 'README.md$' |grep -v -e 'CMakeLists.txt$' |grep -v -e 'cabecalhos$' |grep -v -e 'fonte$'` ; do rm -rf "$i"; done;
```
