/**
 * @file UIManager.cpp
 * @author lighterEB (lighterEB@126.com)
 * @brief Implementation of the UIManager class for managing server information.
 * @version 0.1
 * @date 2024-09-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "UIManager.h"

void UIManager::renderUI(std::vector<ServerInfo>& servers) {
    // ImGui::Begin("Server Information Manager");
    // renderAddButton(servers);
    // renderTable(servers);
    // ImGui::End();
    // if (ImGui::BeginMainMenuBar())
    // {
    //     if (ImGui::BeginMenu("File"))
    //     {
    //         if (ImGui::MenuItem("Exit"))
    //         {
    //             /* code */
    //         }
    //         ImGui::EndMenu();
    //     }
    //     ImGui::EndMainMenuBar();
    // }
    renderAddButton(servers);
    renderTable(servers);
}

void UIManager::renderTable(std::vector<ServerInfo>& servers) {
    if (ImGui::BeginTable("Servers", 5, ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg)) {
        ImGui::TableSetupColumn("Address");
        ImGui::TableSetupColumn("Port");
        ImGui::TableSetupColumn("Username");
        ImGui::TableSetupColumn("Password");
        ImGui::TableSetupColumn("Actions");
        ImGui::TableHeadersRow();

        for (int i = 0; i < servers.size(); i++) {
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::InputText(("##Address" + std::to_string(i)).c_str(), &servers[i].address[0], servers[i].address.size());
            ImGui::TableNextColumn();
            ImGui::InputInt(("##Port" + std::to_string(i)).c_str(), &servers[i].port);
            ImGui::TableNextColumn();
            ImGui::InputText(("##Username" + std::to_string(i)).c_str(), &servers[i].username[0], servers[i].username.size());
            ImGui::TableNextColumn();
            ImGui::InputText(("##Password" + std::to_string(i)).c_str(), &servers[i].password[0], servers[i].password.size(), ImGuiInputTextFlags_Password);
            ImGui::TableNextColumn();
            if (ImGui::Button(("Delete##" + std::to_string(i)).c_str())) {
                servers.erase(servers.begin() + i);
            }
            ImGui::SameLine();
            if (ImGui::Button(("Copy##" + std::to_string(i)).c_str())) {
                servers.push_back(servers[i]);
            }
        }
        ImGui::EndTable();
    }
}

void UIManager::renderAddButton(std::vector<ServerInfo>& servers) {
    if (ImGui::Button("Add New Server"))
    {
        servers.push_back({"", 0,"",""});
    }
    
}