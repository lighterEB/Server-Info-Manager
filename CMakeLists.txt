cmake_minimum_required(VERSION 3.10)
project(ServerInfoManager)

set(CMAKE_CXX_STANDRARD 17)

# 添加ImGui
add_subdirectory(libs/imgui)

# 添加GLFW
find_package(glfw3 REQUIRED)

# 添加OpenGL
find_package(OpenGL REQUIRED)

# 包含头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/libs/imgui)

# 添加源文件
add_executable(ServerInfoManager
    src/main.cpp
    libs/imgui/imgui_impl_glfw.cpp
    libs/imgui/imgui_impl_opengl3.cpp
)

# 连接库
target_link_libraries(ServerInfoManager PRIVATE imgui glfw OpenGL::GL)