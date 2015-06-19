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




cmake_minimum_required(VERSION 2.8.9 FATAL_ERROR)
project(operation)

# Create a library called "operationlibo" which includes the source file "operation.cxx".
# The extension is already found. Any number of sources could be listed here.

add_library(operationlib operation.cpp operation.h)


# Make sure the compiler can find include files for our operation library
# when other libraries or executables link to operation

target_include_directories (operationlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 
# Add executable called "operatiom" that is built from the source files
# "operation.cxx"". The extensions are automatically found.
#

add_executable(operation main.cpp)

# Link the executable to the operation library. Since the operation library has
# public include directories we will use those link directories when building
# operation
#

target_link_libraries(operation LINK_PUBLIC operationlib)

# add a target to generate API documentation with Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
add_custom_target(doc
${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
COMMENT "Generating API documentation with Doxygen" VERBATIM
)
endif(DOXYGEN_FOUND)



