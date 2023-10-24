file(GLOB SOURCE_CAP "*.cpp")

add_library(cap_lib STATIC ${SOURCE_CAP})
target_include_directories(cap_lib PUBLIC
    ${CAP_LIBRARIES}
)

# if(BUILD_TESTING)
#   add_subdirectory(test)
# endif()
