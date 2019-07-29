cmake_minimum_required(VERSION 2.8.9)
project(projeto3)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as Student.h into the project
include_directories(cabecalhos)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "fonte/*.cpp")

#Generate the shared library from the sources
add_library(aluno SHARED ${SOURCES})

set_target_properties(aluno 
                        PROPERTIES 
                            VERSION 2.2.1 SOVERSION 1.0
                            #PUBLIC_HEADER "${H_FILES}"
                    )

#Definir o local de instalação desta biblioteca
# Simulando o ambiente Linux Devuan, vamos utilizar
# o diretorio /usr/lib64/projeto4 
# Use "sudo make install" para instalar
install(TARGETS aluno DESTINATION /usr/lib64/projeto4)
