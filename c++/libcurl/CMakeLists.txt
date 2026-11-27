cmake_minimum_required(VERSION 3.20)

project(curlExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Disable OpenSSL
set(CURL_USE_OPENSSL OFF CACHE BOOL "" FORCE)

# Use Apple's native TLS implementation
set(CURL_USE_SECTRANSP ON CACHE BOOL "" FORCE)

include(FetchContent)

# Download libcurl
FetchContent_Declare(
    curl
    GIT_REPOSITORY https://github.com/curl/curl.git
    GIT_TAG curl-8_17_0
    GIT_SHALLOW TRUE
)

# Build libcurl as part of this project
set(BUILD_CURL_EXE OFF CACHE BOOL "" FORCE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(BUILD_TESTING OFF CACHE BOOL "" FORCE)
set(CURL_USE_LIBPSL OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(curl)

add_executable(CurlExample main.cpp)

target_link_libraries(CurlExample PRIVATE CURL::libcurl)