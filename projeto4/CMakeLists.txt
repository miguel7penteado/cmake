cmake_minimum_required(VERSION 2.8.9)
project(projeto4)
set(CMAKE_BUILD_TYPE Release)

# Cabeçalhos para o compilador
include_directories(cabecalhos)

# Arquivos fonte usados para gerar a biblioteca
file(GLOB SOURCES "fonte/*.cpp")

set_target_properties(aluno 
                        PROPERTIES 
                            VERSION 2.2.1 SOVERSION 1.0
                            #PUBLIC_HEADER "${H_FILES}"
                    )

#Gerar uma biblioteca estática
add_library(aluno STATIC ${SOURCES})

#Definir o local de instalação desta biblioteca
# Simulando o ambiente Linux Devuan, vamos utilizar
# o diretorio /usr/lib64/projeto4 
# Use "sudo make install" para instalar
install(TARGETS aluno DESTINATION /usr/lib64/projeto4)


