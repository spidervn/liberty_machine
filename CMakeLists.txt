cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)

project( liberty_machine  )
include_directories(./)
file(GLOB SOURCES "main.cpp" 
					"sm/impl/*.cpp"
					"app/impl/*.cpp")

add_executable( main ${SOURCES} )