cmake_minimum_required(VERSION 2020.2)
project(libft C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

file(GLOB SRCS ./srcs/*.c ./srcs*/*.c)
file(GLOB HEAD ./includes/*.h ./bonus.h)

add_library(lib STATIC ${SRCS} ${HEAD})