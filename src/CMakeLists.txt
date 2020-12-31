add_subdirectory(tests)

set(balinor_srcs

repl.h
repl.cpp
)

add_library(balinor ${balinor_srcs})
