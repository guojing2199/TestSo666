# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html.
# For more examples on how to use CMake, see https://github.com/android/ndk-samples.

# Sets the minimum CMake version required for this project.
cmake_minimum_required(VERSION 3.22.1)

project("mylib")

# 添加头文件搜索路径
include_directories(/usr/local/include)

add_library(${CMAKE_PROJECT_NAME} SHARED
        # List C/C++ source files with relative paths to this CMakeLists.txt.
        mylib.cpp)

# 添加链接库路径
target_link_libraries(${CMAKE_PROJECT_NAME} /usr/local/lib/liblua.so)

# Link your target with the Lua library
target_link_libraries(${CMAKE_PROJECT_NAME} ${LUA_LIBRARY_PATH})

target_link_libraries(${CMAKE_PROJECT_NAME}
        android
        log)
