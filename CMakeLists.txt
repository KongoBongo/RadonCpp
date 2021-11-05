cmake_minimum_required(VERSION 3.10)
project(Rdn.main)

add_executable(Rdn.main)
set_target_properties(Rdn.main PROPERTIES OUTPUT_NAME radon)

include(Sources.cmake)