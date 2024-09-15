/**
 * @file ServerManager.h
 * @author lighterEB (lighterEB@126.com)
 * @brief The function of this application.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#include "ServerInfo.h"
#include <vector>

using Vec = std::vector<ServerInfo>;

class ServerManager {
public:
    Vec& getServers();
    void addServer(const ServerInfo& server);
    void removeServer(int index);
    void copyServer(int index);
private:
    Vec servers;
};