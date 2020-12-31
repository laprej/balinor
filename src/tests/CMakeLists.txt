find_package(Catch2 REQUIRED)
add_executable(tests test_repl.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2 balinor)

include(CTest)
include(Catch)
catch_discover_tests(tests)
