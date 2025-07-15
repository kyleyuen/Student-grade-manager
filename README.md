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

- **Managing Input Correctness and Buffer Issues:**  
  Handling the mixture of `std::cin >>` and `std::getline()` input methods proved challenging. Careful clearing of the input buffer (e.g., using `std::cin.ignore()`) was crucial to prevent inputs from being skipped or unintended newline characters being read. The final solution adopted reading all inputs as strings and converting them.

- **Modifying Objects Within a Container Correctly:**  
  A significant challenge was ensuring that updates to class or student data were persistent. Initially, attempts involved getting copies of objects from the main container, leading to modifications on temporary copies rather than the original data. This was successfully resolved by implementing methods that return pointers to the actual objects stored within the `std::vector`, enabling direct and effective modification.

- **Exception Safety for User Numeric Input:**  
  Converting string inputs (from `std::getline()`) to numeric types (`int` using `std::stoi` and `float` using `std::stof`) presented a risk of runtime crashes if the user entered non-numeric data. Implementing robust `try-catch` blocks around these conversions was essential to gracefully handle invalid input and prevent program termination.

- **Providing a Consistent and User-Friendly CLI Interface:**  
  Crafting clear, concise, and unambiguous prompts and messages for the user interface required iterative refinement. Avoiding redundant output (e.g., double success messages) and ensuring consistent formatting (like line breaks and error message phrasing) was key to improving the overall user experience.

## Notes and Future Improvements

- **Data Persistence:** Implement file I/O (e.g., using `fstream`) to save and load class and student data, so it persists between program runs.
- **Advanced Search/Filter:** Add functionality to search for specific students or classes based on various criteria (e.g., grade range, age).
- **More Robust Input Validation:** Enhance input checks beyond just numeric conversion (e.g., validate age ranges, grade ranges, unique IDs).
- **Student Grade Update:** Implement a dedicated function within `Student` or `classmanager` to update student grades individually.
- **Refactoring:** Consider splitting the codebase into separate header (`.h`) and source (`.cpp`) files for better organization and maintainability.
- **User Interface Enhancements:** Explore options for a more interactive or graphical user interface beyond the basic console.

## Time spent= 4 hours




