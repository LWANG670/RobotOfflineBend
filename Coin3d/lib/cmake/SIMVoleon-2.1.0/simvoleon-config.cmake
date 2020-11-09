# CMake package configuration file for SIMVoleon
#
# Defines the target "SIMVoleon::SIMVoleon"
#
# Add the following lines to your CMakeLists.txt to depend on SIMVoleon
#
#    find_package(SIMVoleon REQUIRED)
#    target_link_libraries(my_target_name SIMVoleon::SIMVoleon)
#
# Additionally you may one of the following variables (or their corresponding
# upper case version) that are also defined.
#
# SIMVoleon_COMPILE_DEFINITIONS
# SIMVoleon_DEFINITIONS
# SIMVoleon_INCLUDE_DIRS
# SIMVoleon_INCLUDE_DIR
# SIMVoleon_LIBRARY
# SIMVoleon_LIBRARIES
# SIMVoleon_LIBRARY_DIRS
# SIMVoleon_LIBRARY_DIR
#
# However, in most cases using the SIMVoleon::SIMVoleon target is sufficient,
# and you won't need these variables.


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was simvoleon-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(CMakeFindDependencyMacro)

find_dependency(Coin REQUIRED)

include("${CMAKE_CURRENT_LIST_DIR}/simvoleon-export.cmake")

get_property(SIMVoleon_COMPILE_DEFINITIONS TARGET SIMVoleon::SIMVoleon PROPERTY INTERFACE_COMPILE_DEFINITIONS)
foreach(_def ${SIMVoleon_COMPILE_DEFINITIONS})
  list(APPEND SIMVoleon_DEFINITIONS -D${_def})
endforeach()

get_property(SIMVoleon_INCLUDE_DIRS TARGET SIMVoleon::SIMVoleon PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
set(SIMVoleon_INCLUDE_DIR ${SIMVoleon_INCLUDE_DIRS})
set(SIMVoleon_LIBRARY SIMVoleon::SIMVoleon)
get_property(SIMVoleon_LIBRARIES TARGET SIMVoleon::SIMVoleon PROPERTY INTERFACE_LINK_LIBRARIES)
set(SIMVoleon_LIBRARIES SIMVoleon::SIMVoleon ${SIMVoleon_LIBRARIES})
set(SIMVoleon_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")
set(SIMVoleon_LIBRARY_DIR ${SIMVoleon_LIBRARY_DIRS})

# For backwards compatibility define upper case versions of output variables
foreach(_var
  SIMVoleon_COMPILE_DEFINITIONS
  SIMVoleon_DEFINITIONS
  SIMVoleon_INCLUDE_DIRS
  SIMVoleon_INCLUDE_DIR
  SIMVoleon_LIBRARY
  SIMVoleon_LIBRARIES
  SIMVoleon_LIBRARY_DIRS
  SIMVoleon_LIBRARY_DIR
  )
  string(TOUPPER ${_var} _uppercase_var)
  set(${_uppercase_var} ${${_var}})
endforeach()
