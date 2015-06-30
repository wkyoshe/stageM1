#  cmake; 
#
#  Author(s): Kyoshe Winstone <wkyoshe@gmail.com>
#       Date: 2015-06-18
#
#  Université de Strasbourg.
#
# Distributed under the GPL(GNU Public License):
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#


#set the CMAKE_CXX_COMPILER
set(CMAKE_CXX_COMPILER /usr/bin/clag++ 3.6.0)
cmake_minimum_required(VERSION 2.8.9 FATAL_ERROR)
project(Chaine)

# Create a library called "Chainelibo" which includes the source file "Chaine.cxx".
# The extension is already found. Any number of sources could be listed here.

option(USE_SHARED 
            "use a shared library" OFF)
            
if(USE_SHARED)

add_library(Chainelib SHARED Chaine.cpp Chaine.h)  
# Make sure the compiler can find include files for our Chaine library
# when other libraries or executables link to operation

target_include_directories (Chainelib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

else()
add_library(Chainelib STATIC Chaine.cpp Chaine.h)
target_include_directories (Chainelib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
endif()
# 
# Add executable called "operatiom" that is built from the source files
# "Chaine.cxx"". The extensions are automatically found.
#

add_executable(Chaine main2.cpp)

# Link the executable to the operation library. Since the operation library has
# public include directories we will use those link directories when building
# operation
#

target_link_libraries(Chaine LINK_PUBLIC Chainelib)

# add a target to generate API documentation with Doxygen
option(BUILD_DOCUMENTATION "Use Doxygen to create the HTML based API documentation" ON)
if(BUILD_DOCUMENTATION)
find_package(Doxygen)
  if(NOT DOXYGEN_FOUND)
    message(FATAL_ERROR
      "Doxygen is needed to build the documentation. Please install it correctly")
  endif()
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in 
                       ${PROJECT_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc ALL
             COMMAND ${DOXYGEN_EXECUTABLE} ${PROJECT_BINARY_DIR}/Doxyfile
                  COMMENT "Generating API documentation with Doxygen" VERBATIM)
  #Doxygen will be triggered every time we run make
  # IF you do NOT want the documentation to be generated EVERY time you build the project
  # then leave out the 'ALL' keyword from the above command.                
endif()


