#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SIMVoleon::SIMVoleon" for configuration "Debug"
set_property(TARGET SIMVoleon::SIMVoleon APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(SIMVoleon::SIMVoleon PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/SIMVoleon2d.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/SIMVoleon2d.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS SIMVoleon::SIMVoleon )
list(APPEND _IMPORT_CHECK_FILES_FOR_SIMVoleon::SIMVoleon "${_IMPORT_PREFIX}/lib/SIMVoleon2d.lib" "${_IMPORT_PREFIX}/bin/SIMVoleon2d.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
