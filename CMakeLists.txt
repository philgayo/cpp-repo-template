cmake_minimum_required (VERSION 3.8)

project(GreetingsMeta CXX)

# Set your C++ level
set(CMAKE_CXX_STANDARD 17)

# Set compile options common to all your targets
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # additional warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Add the code directory
add_subdirectory(code)

# Add the test directory if enabled
if(ENABLE_TESTING)
    add_subdirectory(test)
endif()


# If docs enabled, allow to make documentation with "make docs"
if(ENABLE_DOCS)
    find_package(Doxygen REQUIRED dot)

    if (TARGET Doxygen::doxygen)
        set(DOXYGEN_USE_MDFILE_AS_MAINPAGE "README.md")
        set(DOXYGEN_STRIP_INC_PATH "code")
        doxygen_add_docs(docs "README.md" "code")
    endif ()
endif()

