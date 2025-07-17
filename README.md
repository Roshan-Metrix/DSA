# DSA Practice

This repository contains solutions to various Data Structures and Algorithms (DSA) problems. The goal is to practice and improve problem-solving skills by implementing efficient algorithms in C++.

## Getting Started

Follow these steps to set up your environment and start using this repository:

### 1. Clone the Repository

Open your terminal or command prompt and run:

```bash
git clone https://github.com/roshan-metrix/DSA.git
```

### 2. Install Visual Studio Code (VS Code)

- Visit [https://code.visualstudio.com/](https://code.visualstudio.com/)
- Download and install VS Code for your operating system.

### 3. Install C++ Extension for VS Code

- Open VS Code.
- Go to Extensions (`Ctrl+Shift+X`).
- Search for "C++" and install the **C/C++** extension by Microsoft.

### 4. Install MinGW (C++ Compiler for Windows)

- Visit [https://www.mingw-w64.org/downloads/](https://www.mingw-w64.org/downloads/)
- Download the installer for your system.
- Run the installer and follow the instructions to install MinGW.

### 5. Set Up Environment Variables (Windows)

- Find the path to the `bin` folder inside your MinGW installation (e.g., `C:\mingw-w64\bin`).
- Open **Control Panel** > **System** > **Advanced system settings** > **Environment Variables**.
- Under "System variables", find and edit the `Path` variable.
- Add the path to your MinGW `bin` folder.
- Click OK to save.

### 6. Verify Installation

Open a new command prompt and run:

```bash
g++ --version
```

You should see the installed version of `g++`.

### 7. Run and Test Solutions

- Open the cloned repository folder in VS Code.
- Browse the folders for different topics.
- Open any `.cpp` file and press `F5` or use the terminal to compile and run:

```bash
g++ filename.cpp -o output
./output
```

## Features

- Solutions to popular DSA problems
- Well-commented C++ code
- Organized by topic (arrays, linked lists, trees, graphs, etc.)

## Contributing

Feel free to fork the repo and submit pull requests for improvements or new solutions.

## License

This project is licensed under the MIT License.