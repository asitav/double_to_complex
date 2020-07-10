cmake_minimum_required(VERSION 2.8)
project(D2C)
mark_as_advanced(FORCE CMAKE_INSTALL_PREFIX)

set(INCLUDE_DIRS ${D2C_SOURCE_DIR}/)

file(GLOB d2c_sources "${D2C_SOURCE_DIR}/*.cpp")

# compile options
option(D2C_COMPLEX "Compile D2C in complex mode (default: off)" OFF)

if(D2C_COMPLEX)
  add_definitions(-DCMPLX_ON)
else() # use default
  add_definitions(-DCMPLX_OFF)
endif()

#set(CMAKE_CXX_FLAGS "-Wall -DCMPLX_OFF")
#set(CMAKE_CXX_FLAGS "-Wall")

message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")

add_executable(d2c ${d2c_sources})

set_target_properties( d2c PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
  )
target_include_directories(d2c PUBLIC ${INCLUDE_DIRS})
