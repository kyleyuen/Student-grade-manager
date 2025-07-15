# Student Grade Manager System

## Overview

The **Student Grade Manager System** is a simple C++ console application designed to help users manage classes and students in an educational setting. It supports adding, viewing, updating, and deleting classes, as well as managing student records within each class. The program offers a menu-driven interface allowing easy interaction for performing these tasks.

## Features

- **Class Management**
  - Add new classes with specified class name, ID, and maximum size.
  - View all existing classes along with their details.
  - Update class information such as class name, class ID, and class size.
  - Delete classes by specifying the class ID.

- **Student Management Within Classes**
  - Add students with name, age, and grade to specified classes.
  - Update student information (age and grade) for existing students.
  - Remove students by name from classes.
  - View all students in a particular class, including their grades and letter grade markers.

## Technologies Used

- **C++17 Standard**
  - Leveraged modern C++17 features like `auto` keyword, range-based for loops, and lambda expressions.
  - Used standard container `std::vector` for dynamic storage of classes and students.
  - Exception handling (`try-catch`) to handle user input safely (e.g., `std::stoi`, `std::stof`).

- **Standard Library Components**
  - `<iostream>` for console input/output.
  - `<string>` for managing text inputs.
  - `<vector>` for dynamic arrays of students and classes.
  - `<algorithm>` (e.g., `std::find_if`, `std::remove_if`) for searching and removing elements.

## How to Compile and Run

**1. Save your C++ code:**
Save your complete C++ source code (the one you've been developing) into a file named `main.cpp` (or `main.cc`).

**2. Compile with g++ (C++17):**
Open your terminal or command prompt, navigate to the directory where you saved `main.cpp`, and run the following command:
```g++ -std=c++17 -o StudentGradeManager main.cpp```

This command compiles your `main.cpp` file using the C++17 standard and creates an executable file named `StudentGradeManager`.

**3. Run the program:**
After successful compilation, execute the program using:
``` ./StudentGradeManager```


## Challenges Faced

- **Designing and Organizing Classes with Proper Encapsulation:**  
  One of the more significant challenges was designing the system architecture around multiple classes (`Student`, `classmanager`, `classmanagerSystem`) while effectively managing **data encapsulation** through private and public access specifiers. Balancing the need to protect internal data (`private` members) while providing sufficient public interfaces for interaction required careful planning. This included deciding **which methods should be public or private**, how to expose internal data safely (e.g., returning pointers or references for modification), and ensuring object state remained consistent and valid during updates.

- **Grouping and Managing Related Data:**  
  Structuring the relationships between classes was challenging, especially representing how students belong to classes and how classes are managed together. Designing the container relationships (e.g., `vector` of students inside `classmanager`, and vector of classes inside `classmanagerSystem`) while providing clean and maintainable interfaces demanded attention to cohesive class responsibilities and minimizing coupling.

- **Input Handling and Exception Safety:**  
  Ensuring robust input handling through string input conversion and exception handling was also non-trivial, but secondary in comparison to the architectural challenges of class design.

## Notes and Future Improvements

- **Data Persistence:** Implement file I/O (e.g., using `fstream`) to save and load class and student data, so it persists between program runs.
- **Advanced Search/Filter:** Add functionality to search for specific students or classes based on various criteria (e.g., grade range, age).
- **More Robust Input Validation:** Enhance input checks beyond just numeric conversion (e.g., validate age ranges, grade ranges, unique IDs).
- **Student Grade Update:** Implement a dedicated function within `Student` or `classmanager` to update student grades individually.
- **Refactoring:** Consider splitting the codebase into separate header (`.h`) and source (`.cpp`) files for better organization and maintainability.
- **User Interface Enhancements:** Explore options for a more interactive or graphical user interface beyond the basic console.

## Time spent= 4 hours




