cmake_minimum_required(VERSION 3.26)
project(Progetto_Labo)

set(CMAKE_CXX_STANDARD 11)

#
#add_subdirectory(Test_Program)
add_executable(Progetto_Labo main.cpp
        Utente.h
        Utente.cpp
        Messaggio.h
        Messaggio.cpp
        Chat.h
        Chat.cpp
        Registro_Chat.h
        Registro_Chat.cpp
)
