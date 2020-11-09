#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SIMVoleon::SIMVoleon" for configuration "Release"
set_property(TARGET SIMVoleon::SIMVoleon APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SIMVoleon::SIMVoleon PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/SIMVoleon2.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/SIMVoleon2.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS SIMVoleon::SIMVoleon )
list(APPEND _IMPORT_CHECK_FILES_FOR_SIMVoleon::SIMVoleon "${_IMPORT_PREFIX}/lib/SIMVoleon2.lib" "${_IMPORT_PREFIX}/bin/SIMVoleon2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
