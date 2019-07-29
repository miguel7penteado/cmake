cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

#Diga ao compilador qual diretório estão aqruivos cabeçalhos
include_directories(cabecalhos)

#Você pode ir agregando os arquivos fonte 1 por 1 na variavel SOURCES seguindo o exemplo abaixo:
#set(SOURCES fontes/mainapp.cpp fontes/Student.cpp)

#vamos facilitar, porque a função file(GLOB...) permite adição de coringas:
file(GLOB SOURCES "fonte/*.cpp")

add_executable(binario ${SOURCES})



