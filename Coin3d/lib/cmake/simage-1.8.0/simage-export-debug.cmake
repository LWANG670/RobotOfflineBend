#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "simage::simage" for configuration "Debug"
set_property(TARGET simage::simage APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(simage::simage PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/simage1d.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/simage1d.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS simage::simage )
list(APPEND _IMPORT_CHECK_FILES_FOR_simage::simage "${_IMPORT_PREFIX}/lib/simage1d.lib" "${_IMPORT_PREFIX}/bin/simage1d.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
