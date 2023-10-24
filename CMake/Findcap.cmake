# Find the path to sys/capability.h
find_path(CAP_INCLUDE_DIR sys/capability.h)

# Find the cap library
find_library(CAP_LIBRARIES cap)

# Include the module that provides a standardized way to handle arguments
include(FindPackageHandleStandardArgs)

# Check if all of the listed variables are TRUE
find_package_handle_standard_args(cap DEFAULT_MSG CAP_LIBRARIES CAP_INCLUDE_DIR)

# Mark the listed variables as advanced
mark_as_advanced(CAP_INCLUDE_DIR CAP_LIBRARIES)