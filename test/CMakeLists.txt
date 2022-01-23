set(Tests Test1)

foreach(test ${Tests})
    string(TOLOWER ${test} test_lower)
    add_executable(${test} main.cpp ${test_lower}.cpp)
    target_include_directories(${test} PUBLIC ${IncludeDir})
    target_include_directories(${test} PUBLIC ${TestDir})
    target_link_libraries(${test} PUBLIC VecLib ShapeLib)
endforeach()

add_test(NAME Test1 COMMAND ${BinDir}/Test1)
