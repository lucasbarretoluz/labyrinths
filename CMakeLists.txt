cmake_minimum_required(VERSION 3.5)
project(Labyrinths C)

set(CMAKE_C_STANDARD 99)

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

add_subdirectory(libs/raylib)

set(SRC_FILES src/main.c src/make_map.c)
set(SRC_INCLUDES_FILES src/includes/make_map.h)


add_executable(Labyrinths ${SRC_FILES} ${SRC_INCLUDES_FILES})
target_link_libraries(Labyrinths PRIVATE raylib)
target_include_directories(Labyrinths PRIVATE ${CMAKE_SOURCE_DIR}/src/includes)





