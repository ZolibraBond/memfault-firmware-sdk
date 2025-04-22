cmake_minimum_required(VERSION 3.15)

# Pull in the definitions from Memfault's main CMake scripts
set(MEMFAULT_SDK_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../../../memfault-firmware-sdk)
include(${MEMFAULT_SDK_ROOT}/cmake/Memfault.cmake)

# List the Memfault components you want to use
set(MEMFAULT_COMPONENTS
  core
  util
  panics
  metrics
)

# We'll produce a list of Memfault component sources & includes
memfault_library(
  ${MEMFAULT_SDK_ROOT}
  MEMFAULT_COMPONENTS
  MEMFAULT_COMPONENTS_SRCS
  MEMFAULT_COMPONENTS_INC_FOLDERS
  ARCH_ARM_CORTEX_M
)

# Now define your compile options:
list(APPEND MEMFAULT_COMPILE_DEFS
  -DMEMFAULT_PLATFORM_CONFIG_FILE=\"memfault_platform_config.h\"
)

add_library(memfault_stm32cube STATIC ${MEMFAULT_COMPONENTS_SRCS})

target_include_directories(memfault_stm32cube PUBLIC
  ${MEMFAULT_COMPONENTS_INC_FOLDERS}
  ${CMAKE_CURRENT_LIST_DIR}
  # e.g. the folder with my_memfault_platform_config.h
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../
  ${CMAKE_CURRENT_LIST_DIR}/../../../
)

target_compile_options(memfault_stm32cube PUBLIC
  ${MEMFAULT_COMPILE_DEFS}
)
