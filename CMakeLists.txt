cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)

project( liberty_machine  )
include_directories(./src/LibertyMachine/)
file(GLOB SOURCES "src/LibertyMachine/main.cpp" 
					"src/LibertyMachine/sm/impl/*.cpp"
					"src/LibertyMachine/app/impl/*.cpp")

add_executable( main ${SOURCES} )