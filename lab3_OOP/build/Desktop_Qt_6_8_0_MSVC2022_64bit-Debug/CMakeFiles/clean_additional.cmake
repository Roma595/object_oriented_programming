# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\lab3_OOP_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\lab3_OOP_autogen.dir\\ParseCache.txt"
  "lab3_OOP_autogen"
  )
endif()