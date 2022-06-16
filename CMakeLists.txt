cmake_minimum_required(VERSION 3.13)
project(laboratorio)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES Chat.cpp IconBadgeMonitor.cpp MessageNotifier.cpp User.cpp IconBadgeMonitor.h)
add_executable(laboratorio main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(laboratorio core)
