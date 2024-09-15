# Server Information Manager

This application is a GUI-based server information management tool built with C++ and ImGui. It allows users to manage a list of server details including address, port, username, and password.

## Features

- Display server information in a table format
- Add new server entries
- Edit existing server information
- Delete server entries
- Copy server entries

## Technologies Used

- C++
- ImGui for GUI
- GLFW for window management
- OpenGL for rendering

## Building the Project

This project uses CMake for build management. To build the project:

1. Ensure you have CMake, a C++ compiler, and GLFW installed on your system.
2. Clone this repository.
3. Navigate to the project directory.
4. Create a build directory: `mkdir build && cd build`
5. Run CMake: `cmake ..`
6. Build the project: `cmake --build .`

## Running the Application

After building, you can run the application by executing the generated binary: