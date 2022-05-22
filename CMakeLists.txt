cmake_minimum_required(VERSION 3.13)
project(laboratorio)

include_directories(/usr/local/lib/pkgconfig)
find_library(laboratorio_lib laboratorio)

#group the libraries
set(frameworks ${laboratorio_lib})

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test/lib/googletest-master/googletest-main)
include_directories(test/lib/googletet-master/googletest-main/googletest/include)
include_directories(test/lib/googletet-master/googletest-main/googlemock/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES main.cpp Chat.cpp IconBadgeMonitor.cpp MessageNotifier.cpp User.cpp)


add_executable(laboratorio ${SOURCE_FILES})
target_link_libraries(laboratorio gtest gtest_main)