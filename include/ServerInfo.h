/**
 * @file ServerInfo.h
 * @author lighterEB (lighterEB@126.com)
 * @brief Defines the ServerInfo structure for storing server infomation.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#include <string>

struct ServerInfo
{
    std::string address;
    int port;
    std::string username;
    std::string password;
};
