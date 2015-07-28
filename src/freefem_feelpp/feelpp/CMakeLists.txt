#set(CMAKE_CXX_COMPILER /usr/bin/clag++ 3.6.0)
cmake_minimum_required(VERSION 2.8.9 FATAL_ERROR)
project(feelpp)

# Create a library called "feelpplib" which includes the source file "feelpp.cxx".
# The extension is already found. Any number of sources could be listed here.

option(USE_SHARED 
            "use a shared library" OFF)
            
if(USE_SHARED)

add_library(feelpplib SHARED feelpp1.cpp GaLS.cpp)  

target_include_directories (feelpplib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

else()
add_library(feelpplib STATIC feelpp1.cpp )
target_include_directories (feelpplib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
endif()

add_executable(feelpp feelpp1.cpp  GaLS.cpp)

target_link_libraries(feelpp LINK_PUBLIC feelpplib)
