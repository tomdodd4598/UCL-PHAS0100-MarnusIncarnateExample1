add_library(VecLib STATIC vecstuff.cpp)
target_include_directories(VecLib PUBLIC ${IncludeDir})

add_library(ShapeLib STATIC shapestuff.cpp)
target_include_directories(ShapeLib PUBLIC ${IncludeDir})

add_executable(MarnusIncarnate main.cpp)
target_link_libraries(MarnusIncarnate PRIVATE VecLib ShapeLib)
