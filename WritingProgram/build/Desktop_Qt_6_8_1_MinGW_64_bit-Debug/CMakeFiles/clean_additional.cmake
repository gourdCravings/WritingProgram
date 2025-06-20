# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\WritingProgram_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\WritingProgram_autogen.dir\\ParseCache.txt"
  "WritingProgram_autogen"
  )
endif()
