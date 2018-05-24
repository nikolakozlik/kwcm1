cmake_minimum_required (VERSION 2.8)
project(PierwszyProgram)
add_executable(Laborka main.cpp)

option (USE_TRIGONOMETRY_DEGREE
"Czy argumentami funkcji trygonometrycznych maja byc stopnie" OFF)


if (USE_TRIGONOMETRY_DEGREE)

include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")

add_subdirectory (Trygonometria)
target_link_libraries (Laborka Trygonometria)

endif (USE_TRIGONOMETRY_DEGREE)
