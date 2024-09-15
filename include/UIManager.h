/**
 * @file UIManager.h
 * @author lighterEB (lighterEB@126.com)
 * @brief This is the application’s interface management class
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#include "ServerInfo.h"
#include "imgui.h"
#include <vector>

using Vec = std::vector<ServerInfo>;

class UIManager
{
private:
    void renderTable(Vec& servers);
    void renderAddButton(Vec& servers);
public:
    void renderUI(Vec& servers);
};
