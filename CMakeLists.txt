cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(ov6770)

file(GLOB SRCS "./src/*")
target_sources(app PRIVATE ${SRCS} )

#file(GLOB MODULES LIST_DIRECTORIES true "./src/modules/*")
#add_subdirectory(${MODULES})


