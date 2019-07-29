cmake_minimum_required(VERSION 2.8.9)
project (projeto5)

if(UNIX)
    message("Sistema operacional ${CMAKE_SYSTEM_NAME}")
elseif(WIN32)
    message("Sistema operacional Windows 32 bits")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#LIBRARY_OUTPUT_PATH
#CMAKE_LIBRARY_OUTPUT_DIRECTORY
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY
#ARCHIVE_OUTPUT_PATH
########################################################################
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#target_compile_options(${PROJECT_NAME} PUBLIC "-pie")
#target_link_libraries(${PROJECT_NAME} "-pie -Wl,-E")
#set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE 1)
########################################################################
include_directories(cabecalhos)
#file(GLOB SOURCES "fonte/*.cpp")
file(GLOB SOURCES "fonte/Aluno.cpp")
########################################################################

# biblioteca estática
#For the static library:
#set ( PROJECT_LINK_LIBS libaluno.a )
#link_directories(construcao)

# biblioteca dinâmica
add_library(aluno SHARED ${SOURCES})
#set_target_properties(aluno PROPERTIES VERSION 2.2.1 SOVERSION 1.0 PUBLIC_HEADER "${H_FILES}")
set_target_properties(aluno PROPERTIES VERSION 2.2.1 SOVERSION 1.0)

set (PROJECT_LINK_LIBS aluno )
link_directories(construcao)
########################################################################
add_executable(binario fonte/principal.cpp)
#add_executable(binario ${SOURCES})
target_link_libraries(executavel.bin ${PROJECT_LINK_LIBS} )
########################################################################
install(TARGETS aluno DESTINATION /usr/lib64/projeto4)
#install(TARGETS test DESTINATION lib)
#install(FILES test.h DESTINATION include)
