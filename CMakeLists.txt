cmake_minimum_required(VERSION 3.18)
project(Progetto_Labo)

set(CXX_STANDARD 11)

add_subdirectory(Test_Progetto)

set(SOURCE_FILES Utente.cpp Messaggio.cpp Chat.cpp Registro_Chat.cpp)
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} core)
