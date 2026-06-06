find_path(GLM_INCLUDE_DIR "glm/glm.hpp")
find_library(GLM_LIB glm)

set(GLM_LIBS
	${GLM_LIB})

set(GLM_INCLUDE_DIRS
	${GLM_INCLUDE_DIR})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GLM DEFAULT_MSG GLM_LIBS GLM_INCLUDE_DIRS)
mark_as_advanced(GLM_LIBS GLM_INCLUDE_DIRS)

if(NOT TARGET glm::glm)
	add_library(glm::glm INTERFACE IMPORTED)
    set_property(TARGET glm::glm PROPERTY INTERFACE_LINK_LIBRARIES "${GLM_LIBS}")
	set_property(TARGET glm::glm PROPERTY INTERFACE_INCLUDE_DIRECTORIES "${GLM_INCLUDE_DIRS}")
endif()
