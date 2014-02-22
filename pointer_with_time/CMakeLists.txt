CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)

INCLUDE_DIRECTORIES( include )

ADD_DEFINITIONS( -std=c++11 )

add_library( countTime  SHARED
include/countTime.hpp
src/probandoCountTime.cpp
)

ADD_EXECUTABLE( probandoCountTime src/prodandoCountTime.cpp )
target_link_libraries( probandoCountTime countTime)

