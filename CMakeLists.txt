cmake_minimum_required(VERSION 3.10)
#set(CMAKE_C_STANDARD 99) # we will use C99
project(Search)
add_executable(
  Main

  src/arrays.h
  src/arrays.c
  src/bench.h
  src/bench.c
  src/sort.h
  src/main.c
  src/sort/bubble.c
  src/sort/selection.c
  src/sort/insertion.c
  src/sort/quick.c
  src/sort/merge.c
  src/sort/gnome.c
  src/sort/bogo.c
  src/sort/bozo.c
  src/sort/shell.c
  src/sort/radix.c
  )
