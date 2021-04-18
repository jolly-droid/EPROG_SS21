cmake_minimum_required(VERSION 3.17)
project(EPROG_SS21 C)

set(CMAKE_C_STANDARD 99)

add_executable(EPROG_SS21 series04/binomial.c series04/pirecursive.c series04/cross.c series04/pnorm.c series04/frobeniusnorm.c series04/kgv.c series04/check.c series04/sqrt_new.c)
target_link_libraries(EPROG_SS21 m)