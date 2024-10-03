cmake_minimum_required(VERSION 3.15.0)

set(MY_PROJECT_NAME still-alive)

project(${MY_PROJECT_NAME})

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})
include_directories(${PROJECT_SOURCE_DIR})

add_executable(${MY_PROJECT_NAME} main.cpp Player.cpp)
target_link_libraries(${MY_PROJECT_NAME} ${CURSES_LIBRARIES})

install(TARGETS ${MY_PROJECT_NAME} DESTINATION bin)
