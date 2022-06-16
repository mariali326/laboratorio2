
add_subdirectory(./lib/googletest-master/googletest-main)
set(gtest_SOURCE_DIR, ./lib/googletest-master/googletest-main/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(TEST_SOURCE_FILES RunAllTests.cpp MessageNotifierTest.cpp MessageTest.cpp ChatTest.cpp UserTest.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)
