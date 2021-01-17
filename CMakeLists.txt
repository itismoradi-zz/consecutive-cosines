CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT("consecutive cosine")
SET(CMAKE_CXX_STANDARD 11)
INCLUDE_DIRECTORIES(include)
ADD_EXECUTABLE(app 
    src/main.cpp
    src/functions.cpp
)