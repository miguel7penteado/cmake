# Projeto 5

Neste projeto iremos compilar o arquivo **principal.cpp** para gerar 
um binario chamado **executavel.bin**.
Neste projeto, **executavel.bin** será gerado dentro da pasta **bin/**,
criada dentro do diretório **construcao/** durante o processo de 
compilação.

```
.
├── cabecalhos
│   └── Aluno.h
├── CMakeLists.txt
├── construir
├── fonte
│   ├── Aluno.cpp
│   └── principal.cpp
└── README.md
```

o programa **executavel.bin** fará uso de bibliotecas. 
As bibliotecas serão geradas a partir do arquivo **Aluno.cpp**.
Neste projeto a biblioteca poderá ser estática ou dinâmica, bastando editar
o arquivo **CMakeLists.txt** para definir o tipo de uso que o binário
fará da biblioteca.

## Requisitos:

### Requisitos Linux:

```bash
# no debian / devuan / ubuntu, você deve ter instalado o CMAKE
sudo apt-get install cmake
# no debian / devuan / ubuntu, você deve ter instalado o NINJA
sudo apt-get install ninja-build
```
### Requisitos MS-Windows:

```cmd

```
## Compilação e construção:

### Compilação e construção no Linux:

#### Compilação e construção no Linux usando o CMAKE + GNU Make:
```bash
# criando o projeto
cd construcao
cmake ../
# compilando e gerando o binário executável
make all
```
#### Compilação e construção no Linux usando o CMAKE + Ninja:
```bash
# criando o projeto
cd construcao
cmake -GNinja ../
# compilando e gerando o binário executável
ninja
```

## Apagando arquivos temporários
```bash
# apagando arquivos temporários
for i in `ls | grep -v -e 'README.md$' |grep -v -e 'CMakeLists.txt$' |grep -v -e 'cabecalhos$' |grep -v -e 'construcao$' |grep -v -e 'fonte$'` ; do rm -rf "$i"; done;
```

### Compilação e construção no Windows:

#### Compilação e construção no Linux usando o CMAKE + Microsoft NMake:
```cmd
# criando o projeto
cd construcao
cmake -G "NMake Makefiles" ..\
# compilando e gerando o binário executável
nmake
```
#### Compilação e construção no Linux usando o CMAKE + Ninja:
```cmd
# criando o projeto
cd construcao
cmake -G "Ninja" ..\
# compilando e gerando o binário executável
ninja
```

## Apagando arquivos temporários
```cmd
# apagando arquivos temporários
for /F %f in ('dir /b .\construir\') do del /f /s /q .\construir\%f
for /F %f in ('dir /b .\construir\') do rmdir /s /q .\construir\%f
```
