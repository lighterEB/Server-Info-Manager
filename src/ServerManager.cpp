/**
 * @file ServerManager.cpp
 * @author lighterEB (lighterEB@126.com)
 * @brief Implementation of the ServerManager class for managing server information.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ServerManager.h"

std::vector<ServerInfo>& ServerManager::getServers() {
    return servers;
}

void ServerManager::addServer(const ServerInfo& server) {
    servers.push_back(server);
}

void ServerManager::removeServer(int index) {
    if (index >= 0 && index < servers.size())
    {
        servers.erase(servers.begin() + index);
    }
    
}

void ServerManager::copyServer(int index) {
    if (index >= 0 && index < servers.size())
    {
        servers.push_back(servers[index]);
    }
    
}