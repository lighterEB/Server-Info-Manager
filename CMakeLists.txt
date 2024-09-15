cmake_minimum_required(VERSION 3.10)
project(ServerInfoManager)

set(CMAKE_CXX_STANDRARD 17)
set(CMAKE_CXX_STANDRARD_REQUIRED ON)

# 添加ImGui
set(IMGUI_DIR "${CMAKE_SOURCE_DIR}/libs/imgui")

# 添加GLFW
set(GLFW_DIR "${CMAKE_SOURCE_DIR}/deps/GLFW")

# 包含目录
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${IMGUI_DIR}
    ${IMGUI_DIR}/backends
    ${GLFW_DIR}/include
)

# 添加源文件
set(SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/UIManager.cpp
    ${CMAKE_SOURCE_DIR}/src/ServerManager.cpp
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_demo.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
    ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
)
# 创建可执行文件
add_executable(ServerInfoManager ${SOURCES})

# 链接GLFW库
target_link_libraries(ServerInfoManager 
    ${GLFW_DIR}/lib-vc2017/glfw3.lib
    opengl32
)

# 复制GLFW DLL到输出目录（如果使用动态链接）
add_custom_command(TARGET ServerInfoManager POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${GLFW_DIR}/lib-vc2017/glfw3.dll"
    $<TARGET_FILE_DIR:ServerInfoManager>
)