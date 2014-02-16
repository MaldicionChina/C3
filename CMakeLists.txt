CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)

INCLUDE_DIRECTORIES( include )

ADD_DEFINITIONS( -std=c++11 )

add_library( functionArray SHARED
include/functionArray.hpp
src/functionArray.cpp
)

ADD_EXECUTABLE( usingFuctionArray src/usingFuctionArray.cpp )
target_link_libraries( usingFuctionArray functionArray)

