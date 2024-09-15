#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>

#include <vector>
#include <string>

struct ServerInfo
{
    std::string address;
    int port;
    std::string username;
    std::string password;
};

std::vector<ServerInfo> servers;

int main() {

    return 0;
}