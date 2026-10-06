# nice!view status screen showing both halves' batteries (left/central only).
if(CONFIG_CORNE_TP_DUAL_BATTERY_SCREEN)
  zephyr_library()
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
  zephyr_library_sources(
    src/nice_view_dual/custom_status_screen.c
    src/nice_view_dual/status.c
    src/nice_view_dual/util.c
  )
endif()
