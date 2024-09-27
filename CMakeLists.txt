cmake_minimum_required(VERSION 3.15.0)

set(MY_PROJECT_NAME still-alive)

project(${MY_PROJECT_NAME})

find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR})
include_directories(${PROJECT_SOURCE_DIR})

add_executable(${MY_PROJECT_NAME} main.cpp Player.cpp)
target_link_libraries(${MY_PROJECT_NAME} ${CURSES_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")
include(CPack)

install(TARGETS ${MY_PROJECT_NAME} DESTINATION bin)