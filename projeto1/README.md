# Projeto 1 - CMake

O CMake vai gerar o projeto para compilar o arquivo
`projeto1.cpp`. Se você estiver no linux, utilizando provavelmente
o `GNU Make`, o cmake irá gerar um arquivo de projeto `Makefile` para
esta ferramenta.
Inicialmente teremos apenas os seguintes arquivos no diretório de projeto:

```
.
├── CMakeLists.txt
├── principal.cpp

```
Sendo o `CMakeLists.txt` o arquivo que dará toda a informação ao CMake sobre como construir projeto, diretórios, nomes de bibliotecas e nome de binários executáveis.

Vamos construir nosso primeiro projeto:
```bash
# Esta etapa lembra o comando **configure** do **GNU autotools**
# construa o projeto
cmake ./

# compile e crie um binário através do GNU Make
make all

# agora execute o binário gerado
./ola
```
Repare inclusive que o CMake criou vários arquivos para construir o projeto. Compare como ficou o conteúdo depois de gerado o projeto:
```
.
├── CMakeCache.txt
├── CMakeFiles
│   ├── 3.13.4
│   │   ├── CMakeCCompiler.cmake
│   │   ├── CMakeCXXCompiler.cmake
│   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   ├── CMakeSystem.cmake
│   │   ├── CompilerIdC
│   │   │   ├── a.out
│   │   │   ├── CMakeCCompilerId.c
│   │   │   └── tmp
│   │   └── CompilerIdCXX
│   │       ├── a.out
│   │       ├── CMakeCXXCompilerId.cpp
│   │       └── tmp
│   ├── cmake.check_cache
│   ├── CMakeDirectoryInformation.cmake
│   ├── CMakeOutput.log
│   ├── CMakeTmp
│   ├── feature_tests.bin
│   ├── feature_tests.c
│   ├── feature_tests.cxx
│   ├── Makefile2
│   ├── Makefile.cmake
│   ├── ola.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   ├── depend.make
│   │   ├── flags.make
│   │   ├── link.txt
│   │   └── progress.make
│   ├── progress.marks
│   └── TargetDirectories.txt
├── cmake_install.cmake
├── CMakeLists.txt
├── Makefile
├── principal.cpp

```
Para limpar você pode apagar tudo, com exeção do `README.md`, `projeto1.cpp` e, claro, `CMakeLists.txt`. Desta forma o projeto pode ser reconstruido de novo.

```bash
# apagando os arquivos gerados, com exceção de 
for i in `ls | grep -v -e 'README.md$' |grep -v -e 'CMakeLists.txt$' |grep -v -e 'principal.cpp$'`; do rm -rf "$i"; done;
```

