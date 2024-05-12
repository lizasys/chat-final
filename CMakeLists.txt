cmake_minimum_required(VERSION 3.26)
project(Proggetto_Labo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proggetto_Labo main.cpp
        Utente.h
        Utente.cpp
        Messaggio.h
        Messaggio.cpp
        Chat.h
        Chat.cpp
        Registro_Chat.h
        Registro_Chat.cpp
)
