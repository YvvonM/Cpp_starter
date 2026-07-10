# C++ Starter

A beginner-friendly C++ learning repository with example projects and exercises.

## Overview

This repository serves as a starter guide for learning C++ programming. It includes practical examples and exercises covering fundamental concepts like variables, constants, functions, and basic projects to help you build a strong foundation in C++.

## Repository Structure

```
Cpp_starter/
├── .devcontainer/          # Development container configuration
├── .github/                # GitHub workflows and configurations
├── .vscode/                # VS Code settings and tasks
│   └── tasks.json          # Compilation tasks
├── C++_projects/           # Main project directory
│   ├── helloworld.cpp      # Classic Hello World program
│   ├── answers.cpp         # Reference solutions and answers
│   ├── beginner_variables_contsants_functions_test.cpp
│   └── beginner_variables_contsants_functions_test
└── README.md               # This file
```

##  Getting Started

### Prerequisites

- **C++ Compiler**: GCC, Clang, or MSVC
- **Build Tool**: Make or CMake (optional)
- **IDE/Editor**: VS Code (recommended) or any text editor

### Quick Start

1. **Clone the repository**
   ```bash
   git clone https://github.com/YvvonM/Cpp_starter.git
   cd Cpp_starter
   ```

2. **Compile a program** (using g++)
   ```bash
   g++ -o helloworld C++_projects/helloworld.cpp
   ```

3. **Run the program**
   ```bash
   ./helloworld
   ```

### Using VS Code

If you're using Visual Studio Code:
1. Open the repository folder in VS Code
2. Use the built-in tasks (press `Ctrl+Shift+B` or `Cmd+Shift+B`)
3. Select the compilation task from `tasks.json`

##  Projects & Exercises

### 1. **Hello World** (`helloworld.cpp`)
   - The classic first C++ program
   - Prints "Hello, World!" to the console
   - Perfect starting point for beginners

### 2. **Beginner Variables, Constants & Functions** (`beginner_variables_contsants_functions_test.cpp`)
   - Covers fundamental concepts:
     - Variable declaration and initialization
     - Constants and their usage
     - Function definition and calls
   - Includes test cases for practice

### 3. **Answers & Reference** (`answers.cpp`)
   - Comprehensive reference solutions
   - Best practices and common patterns
   - Study guide for understanding concepts

##  Topics Covered

- ✅ Variables and data types
- ✅ Constants
- ✅ Functions
- ✅ Input/Output operations
- ✅ Basic control flow

##  Development Environment

This repository includes configuration for:

- **Dev Container**: Streamlined Docker-based development environment
- **VS Code**: Pre-configured tasks for quick compilation
- **GitHub Actions**: CI/CD workflows (if configured)

##  How to Use This Repository

1. **Learn**: Start with `helloworld.cpp` to understand the basics
2. **Practice**: Work through `beginner_variables_contsants_functions_test.cpp`
3. **Reference**: Check `answers.cpp` for solutions and best practices
4. **Experiment**: Modify and extend the programs to deepen understanding
5. **Build**: Create your own projects in the `C++_projects/` directory

##  Learning Path

Recommended order for beginners:
1. Run and understand `helloworld.cpp`
2. Study variables and constants in `beginner_variables_contsants_functions_test.cpp`
3. Review function implementations in `answers.cpp`
4. Modify existing programs to practice
5. Create new programs combining what you've learned

##  Contributing

This is a personal learning repository, but feel free to:
- Fork and adapt for your own learning
- Report issues if you find any
- Suggest improvements for clarity

##  License

This repository is provided as-is for educational purposes. No specific license is assigned.

##  Troubleshooting

### Compilation errors?
- Ensure you have a C++ compiler installed
- Try using the VS Code tasks for automatic compilation
- Check that file paths are correct

### Program won't run?
- Make sure the executable was successfully compiled
- On Linux/Mac, use `./executable_name`
- On Windows, use `executable_name.exe`

##  Questions?

If you're stuck or have questions:
- Review the reference solutions in `answers.cpp`
- Consult C++ documentation at [cppreference.com](https://en.cppreference.com/)
- Search for similar issues in C++ beginner forums

---

**Happy Learning! **
