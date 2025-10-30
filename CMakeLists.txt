cmake_minimum_required(VERSION 3.16)
project(Progetto_Labo)

# Définir la norme C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Désactiver les extensions Microsoft
set(CMAKE_CXX_EXTENSIONS OFF)

# Activer les warnings
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

# Lister TOUS les fichiers sources
set(SOURCE_FILES
        main.cpp
        Utente.cpp
        Messaggio.cpp
        Chat.cpp
        Registro_Chat.cpp
)

# Créer l'exécutable avec TOUS les fichiers
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
