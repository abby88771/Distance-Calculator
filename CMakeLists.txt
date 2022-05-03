cmake_minimum_required(VERSION 3.0.0) #CMake version minimum request is 3.0.0
project(compile) #give project a name!

set(CMAKE_BUILD_TYPE "Debug")
set(THIRD_PARTY_SRC ${PROJECT_SOURCE_DIR}/third_party/def_gravity.c) #define where is THIRD_PARTY_SRC path
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) #set library path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) #set executable path

add_library(THIRD_PARTY ${THIRD_PARTY_SRC}) #create third party library(THIRD_PARTY)
include_directories("${PROJECT_SOURCE_DIR}/include") #Include (.h) file path

add_executable(TEST main.c  #need to compiled file
${PROJECT_SOURCE_DIR}/src/one.c #one.c
${PROJECT_SOURCE_DIR}/src/two.c #two.c
${PROJECT_SOURCE_DIR}/src/three.c) #three.c

target_link_libraries(TEST PRIVATE THIRD_PARTY  m) # Connect TEST and THIRD_PARTY library . Also math.h needs to be included! 



