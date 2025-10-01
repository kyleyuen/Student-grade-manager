# Student Grade Manager System

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![Console](https://img.shields.io/badge/Interface-Console-green.svg)
![OOP](https://img.shields.io/badge/Paradigm-OOP-orange.svg)
![Status](https://img.shields.io/badge/Status-Complete-success.svg)

A command-line student management system built with C++, featuring robust class and student record management with object-oriented design principles and modern C++17 features.

## 📋 Project Overview

The Student Grade Manager System is a console-based application that provides comprehensive management capabilities for educational settings. Built with C++17, this system demonstrates practical implementation of object-oriented programming, encapsulation, and data structure management. The application enables users to create and manage multiple classes, track student records, maintain grades, and perform CRUD operations through an intuitive menu-driven interface.

## 🎯 Purpose

This project was developed to:

- Master C++ object-oriented programming principles and class design
- Implement proper encapsulation with private/public access modifiers
- Practice data structure management using STL containers (vectors)
- Learn modern C++17 features (auto keyword, range-based loops, lambdas)
- Understand exception handling and input validation techniques
- Design clean interfaces for complex data relationships
- Build a practical CLI tool with robust menu navigation
- Explore architectural patterns for managing related entities

The Student Grade Manager serves as both a learning project for C++ development and a functional tool for educational record management.

## ✨ Features

### Class Management

- **Create Classes**: Add new classes with customizable name, ID, and maximum capacity
- **View All Classes**: Display comprehensive list of classes with their details
- **Update Classes**: Modify class information including name, ID, and size limits
- **Delete Classes**: Remove classes by specifying their unique class ID
- **Capacity Management**: Track and enforce maximum student limits per class

### Student Management

- **Add Students**: Enroll students with name, age, and grade information
- **Update Records**: Modify student age and grade data for existing students
- **Remove Students**: Delete student records by name from specific classes
- **View Rosters**: Display all students in a class with grades and letter grade markers
- **Grade Tracking**: Maintain numeric grades with automatic letter grade calculation

### User Experience

- **Menu-Driven Interface**: Clear, intuitive console menus for all operations
- **Input Validation**: Robust error handling for user inputs
- **Exception Safety**: Try-catch blocks for safe numeric conversions
- **Easy Navigation**: Numbered menu options with clear prompts
- **Real-time Feedback**: Immediate confirmation messages for all actions

## 🛠️ Tech Stack

### Core Technologies

- **C++17**: Modern C++ standard with advanced language features
- **STL Containers**: Standard Template Library for dynamic data structures
- **Object-Oriented Design**: Multiple classes with proper encapsulation

### Language Features

- **Auto Keyword**: Type inference for cleaner code
- **Range-based For Loops**: Modern iteration syntax
- **Lambda Expressions**: Anonymous functions for algorithms
- **Exception Handling**: Try-catch blocks for error management
- **Smart Pointers**: Safe memory management patterns

### Standard Library

- **iostream**: Console input/output operations
- **string**: Text data management
- **vector**: Dynamic arrays for students and classes
- **algorithm**: STL algorithms (find_if, remove_if) for data manipulation

### Development Tools

- **g++ Compiler**: GNU C++ compiler with C++17 support
- **Command Line**: Terminal-based compilation and execution
- **Git**: Version control and project tracking

## 🚀 Getting Started

### Prerequisites

- C++ compiler with C++17 support (g++ 7.0+ recommended)
- Terminal or command prompt access
- Git (optional, for cloning)

### Installation

1. **Clone the repository**

```bash
git clone https://github.com/kyleyuen/Student-grade-manager.git
cd Student-grade-manager
```

2. **Compile with g++**

On macOS/Linux:
```bash
g++ -std=c++17 -o StudentGradeManager main.cc
```

On Windows:
```bash
g++ -std=c++17 -o StudentGradeManager.exe main.cc
```

3. **Run the application**

On macOS/Linux:
```bash
./StudentGradeManager
```

On Windows:
```bash
StudentGradeManager.exe
```

### Quick Start Example

```bash
# Compile
g++ -std=c++17 -o StudentGradeManager main.cc

# Run
./StudentGradeManager

# Follow the menu prompts to:
# 1. Add a new class
# 2. Add students to the class
# 3. View and manage records
```

## 📖 Usage Guide

### Starting the Application

1. Launch the program: `./StudentGradeManager`
2. Choose from the main menu:
   - Manage Classes (Add, View, Update, Delete)
   - Manage Students within Classes
   - Exit Application

### Creating and Managing Classes

1. Select "Add New Class" from the menu
2. Enter class name (e.g., "Computer Science 101")
3. Specify unique class ID
4. Set maximum class size
5. View the confirmation message

### Managing Students

1. Select "Manage Students" from the main menu
2. Choose the target class by ID
3. Select operation:
   - **Add Student**: Enter name, age, and grade
   - **Update Student**: Modify existing student data
   - **Remove Student**: Delete student by name
   - **View All Students**: Display class roster with grades

### Grade Management

- Enter numeric grades (0-100)
- System automatically calculates letter grades
- View student performance in class rosters
- Update grades as needed throughout the semester

### Best Practices

- Use unique class IDs to avoid conflicts
- Validate student data before submission
- Regularly view class rosters to verify changes
- Use meaningful class names for easy identification

## 📚 Learning Outcomes

### Core Concepts Mastered

#### 1. Object-Oriented Design

- Designed three-class architecture (`Student`, `classmanager`, `classmanagerSystem`)
- Implemented proper encapsulation with public/private access specifiers
- Created cohesive class responsibilities with minimal coupling
- Developed clean public interfaces while protecting internal data
- Managed object state consistency during updates

#### 2. Data Encapsulation

- Protected internal data with private member variables
- Exposed controlled interfaces through public methods
- Implemented safe data access patterns (pointers/references)
- Balanced data protection with necessary functionality
- Maintained object invariants across operations

#### 3. Container Relationships

- Structured hierarchical data (students belong to classes)
- Implemented vector-based storage for dynamic sizing
- Managed one-to-many relationships (class to students)
- Designed container interfaces for clean data access
- Optimized data structures for common operations

#### 4. Modern C++17 Features

- Leveraged `auto` keyword for type inference
- Used range-based for loops for cleaner iteration
- Implemented lambda expressions in STL algorithms
- Applied structured bindings where appropriate
- Utilized constexpr for compile-time optimization

#### 5. Exception Handling

- Implemented try-catch blocks for input conversion
- Handled `std::stoi` and `std::stof` exceptions safely
- Provided graceful error recovery mechanisms
- Displayed user-friendly error messages
- Prevented program crashes from invalid input

#### 6. STL Algorithm Usage

- Used `std::find_if` for conditional searching
- Implemented `std::remove_if` for filtered deletion
- Applied algorithm functions for cleaner code
- Combined algorithms with lambda predicates
- Optimized performance with appropriate algorithms

### Technical Skills Developed

- **Memory Management**: Safe pointer usage and object lifecycle management
- **Input Validation**: Robust handling of user input with error checking
- **Data Structure Selection**: Choosing appropriate containers for use cases
- **Interface Design**: Creating intuitive and consistent public APIs
- **Code Organization**: Structuring multi-class applications effectively
- **Compiler Flags**: Understanding C++17 compilation requirements
- **Debugging**: Identifying and fixing encapsulation issues
- **Documentation**: Writing clear inline comments and function headers

### Key Challenges Overcome

#### 1. Class Architecture Design

Designed a three-tier architecture balancing encapsulation, functionality, and maintainability. Determined optimal public/private method distribution while ensuring object state consistency.

#### 2. Relationship Management

Structured complex relationships between students and classes using vectors and pointers, maintaining clean interfaces while providing necessary data access.

#### 3. Encapsulation Balance

Balanced data protection with practical accessibility, determining when to expose internal data through references versus keeping it fully private.

#### 4. Input Robustness

Implemented comprehensive exception handling for string-to-numeric conversions, preventing crashes while providing clear user feedback.

#### 5. Interface Consistency

Maintained consistent method naming, parameter patterns, and return types across all classes for predictable usage.

## 🔮 Future Enhancements

- [ ] **Data Persistence**: Implement file I/O with `fstream` to save/load data between sessions
- [ ] **Advanced Search**: Add filtering by grade range, age, or other criteria
- [ ] **Student ID System**: Implement unique student IDs for better tracking
- [ ] **Grade Statistics**: Calculate class averages, GPA, and performance metrics
- [ ] **Attendance Tracking**: Add attendance records for each student
- [ ] **Report Generation**: Export class rosters and grade reports to text files
- [ ] **Input Validation**: Enhanced checks for age ranges, grade bounds, and ID uniqueness
- [ ] **Undo Functionality**: Implement command pattern for operation reversal
- [ ] **Multi-file Organization**: Split into header (.h) and implementation (.cpp) files
- [ ] **Unit Testing**: Add Google Test framework for automated testing
- [ ] **GUI Interface**: Explore Qt or wxWidgets for graphical interface
- [ ] **Database Integration**: Replace file storage with SQLite database
- [ ] **Grade History**: Track grade changes over time with timestamps
- [ ] **Bulk Operations**: Import/export students from CSV files
- [ ] **Permission System**: Add teacher/admin role differentiation

## 📊 Technical Specifications

| Category | Details |
|----------|----------|
| **Language** | C++17 |
| **Paradigm** | Object-Oriented Programming |
| **Interface** | Command-Line Interface (CLI) |
| **Data Structures** | STL Vectors, Strings |
| **Compiler** | g++ 7.0+ (C++17 support required) |
| **Standard Library** | iostream, string, vector, algorithm |
| **Architecture** | Three-class hierarchy (Student, classmanager, classmanagerSystem) |
| **Features** | CRUD operations, Exception handling, Lambda expressions |
| **Platform** | Cross-platform (Linux, macOS, Windows) |
| **Dependencies** | C++ Standard Library only |
| **Development Time** | 4 hours |

### Project Structure

```
Student-grade-manager/
├── main.cc              # Main application with all classes and logic
├── README.md            # Project documentation
├── .vscode/             # VS Code configuration files
└── .DS_Store            # macOS system file
```

### Class Architecture

```cpp
class Student {
private:
    string name;
    int age;
    float grade;
public:
    // Constructors, getters, setters
};

class classmanager {
private:
    string className;
    int classID;
    int maxSize;
    vector<Student> students;
public:
    // Student management methods
};

class classmanagerSystem {
private:
    vector<classmanager> classes;
public:
    // Class management methods
    // Main menu and navigation
};
```

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! This project is a learning exercise, but improvements and suggestions are always appreciated.

### How to Contribute

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

### Contribution Guidelines

- Follow existing code style and naming conventions
- Add comments for complex logic
- Test thoroughly before submitting
- Update README if adding new features
- Ensure C++17 compatibility

## 📄 License

This project is open source and available for educational purposes. Feel free to use, modify, and distribute as needed for learning and non-commercial applications.

## 👤 Author

**Kyle Yuen**

- GitHub: [@kyleyuen](https://github.com/kyleyuen)

## 🙏 Acknowledgments

- **C++ Reference**: For comprehensive C++17 standard library documentation
- **Stack Overflow Community**: For troubleshooting OOP design patterns and STL usage
- **Modern C++ Resources**: For guidance on C++17 best practices and features
- **Open Source Community**: For inspiration and code organization examples
- **Software Design Principles**: For architectural guidance on encapsulation and SOLID principles

## ⭐ Show Your Support

If you found this project helpful or learned something from it, please consider giving it a star! ⭐

It helps others discover the project and motivates continued development.

---

Built with ❤️ as a learning project to explore C++ OOP design, data encapsulation, STL containers, and modern C++17 features
