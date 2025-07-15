#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//default menu UI 
void showmenu(){
    std::cout <<"\nGrade Manager System\n"
              <<"1. Add Class\n"
              <<"2. View Class\n"
              <<"3. Update Class\n"
              <<"4. Delete Class\n"
              <<"5. Add Students\n"
              <<"6. Update Students\n"
              <<"7. Delete Students\n"
              <<"8. View Students\n"
              <<"9. Exit\n";
    
}

//Class for students 
class Student{
    private:
        std::string name;
        int age;
        float grade;

        char grademarker() const {
            if (grade >= 90) return 'A';
            else if (grade >= 80) return 'B';
            else if (grade >= 70) return 'C';
            else if (grade >= 60) return 'D';
            else return 'F';
        }

    public:
        Student(std::string n, int a, float g) : name(n), age(a), grade(g){}

        std::string getName() const {return name;}
        int getAge() const {return age;}
        float getGrade() const {return grade;}

        void display() const {
            std::cout << "Name: " << name 
                      << ", Age: " << age 
                      << ", Grade: " << grade << " (" << grademarker() << ")\n";
        }

};

//class to mangage students in a class
class classmanager{
    private: 
        std::vector<Student> students;
        std::string className;
        std::string classID;
        int classSize;

    public:
        classmanager(std::string Name, std::string classID, int classSize) : className(Name), classID(classID), classSize(classSize) {}

        void addStudent(const Student& student){
            if (students.size() < classSize) {
                students.push_back(student);
            } else {
                std::cout << "Class is full, cannot add more students.\n";
            }
        }

        void removeStudent(const std::string& studentName){
            auto it = std::remove_if(students.begin(), students.end(), [&](const Student& student) {
                return student.getName() == studentName;
            });

            if (it != students.end()) {
                students.erase(it, students.end());
                std::cout << "Student " << studentName << " removed successfully.\n";
            } else {
                std::cout << "Student " << studentName << " not found in this class.\n";
            }
        }

        void updateClassName(const std::string& newName){
            className = newName;
            std::cout << "Class name updated to: " << className << "\n";
        }

        void updateClassID(const std::string& newID){
            classID = newID;
            std::cout << "Class ID updated to: " << classID << "\n";
        }

        void updateClassSize(int newSize){
            if (newSize >= students.size()) {
                classSize = newSize;
                std::cout << "Class size updated to: " << classSize << "\n";
            }

            else {
                std::cout << "New class size cannot be less than current number of students.\n";
            }
        }

        void viewStudents() const {
            if (students.empty()) {
                std::cout << "No students in this class.\n";
            } else {
                for (const auto& student : students) {
                    student.display();
                }
            }
        }

        std::string getClassName() const { return className; }
        std::string getClassID() const { return classID; }
        int getClassSize() const { return classSize; }
};


//class to manage multiple classes
class classmanagerSystem{
    private:
        std::vector<classmanager> classes; 

    public:
        void viewClasses() const{
            if (classes.empty()){
                std::cout << "No classes available.\n";
            } 
            else {
                for (const auto& cls : classes) {
                    std::cout << "Class Name: " << cls.getClassName() 
                              << ", Class ID: " << cls.getClassID() 
                              << ", Class Size: " << cls.getClassSize() << "\n";

                    cls.viewStudents();
                    std::cout << "-----------------------------\n";
                }
            }
        }
        void addClass(const classmanager& newClass) {
            classes.push_back(newClass);
            std::cout << "Class added successfully.\n";
        }

        void removeClass(const std::string& classID){
            auto it = std::find_if(classes.begin(), classes.end(), [&](const classmanager& cls){
                return cls.getClassID() == classID; 
            });

            if(it != classes.end()){
                classes.erase(it);
                std::cout << "Class removed successfully.\n";
            } 

            else {
                std::cout << "Class with ID " << classID << " not found.\n";
            };
        }

        classmanager* findClassByID(const std::string& classID) {
            auto it = std::find_if(classes.begin(), classes.end(), [&](const classmanager& cls) {
                return cls.getClassID() == classID;
            });

            if (it != classes.end()) return &(*it);
            return nullptr;
        }
        

};

int getchoice(){
    std::string line;
    int choice = 0;

    while (true){
        std::cout << "Enter your choice: ";
        std::getline(std::cin, line);
        
        try {
            choice = std::stoi(line);
            if (choice >= 1 && choice <= 9) {
                return choice;
            } else {
                std::cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            }
        } 
        
        catch (const std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a valid number.\n";
        } 
        
        catch (const std::out_of_range&) {
            std::cout << "Input out of range. Please enter a valid number.\n";
        }
    }
}

int main(){
    classmanagerSystem cms;

    int choice;
    do {
        showmenu();
        choice = getchoice();

        switch (choice) {
            case 1: {
                std::string className, classID, temp;
                int classSize;

                std::cout << "\nEnter class name: ";
                std::getline(std::cin, className);
                std::cout << "Enter class ID: ";
                std::getline(std::cin, classID);
                std::cout << "Enter class size: ";
                std::getline(std::cin, temp);

                try {
                    classSize = std::stoi(temp);
                } catch (...) {
                    std::cout << "Invalid input for class size.\n";
                    break;
                }

                classmanager newClass(className, classID, classSize);
                cms.addClass(newClass);
                break;
            }

            case 2: {
                std::cout << "\n--- Viewing all classes ---\n";
                cms.viewClasses();
                break;
            }

            case 3: {
                std::string classID, newName, newID, temp;
                int newSize;

                std::cout << "\nEnter class ID to update: ";
                std::getline(std::cin, classID);

                classmanager* cls = cms.findClassByID(classID);
                if (cls) {
                    std::cout << "Enter new class name: ";
                    std::getline(std::cin, newName);
                    cls->updateClassName(newName);

                    std::cout << "Enter new class ID: ";
                    std::getline(std::cin, newID);
                    cls->updateClassID(newID);

                    std::cout << "Enter new class size: ";
                    std::getline(std::cin, temp);
                    try {
                        newSize = std::stoi(temp);
                    } catch (...) {
                        std::cout << "Invalid input for class size.\n";
                        break;
                    }
                    cls->updateClassSize(newSize);
                } else {
                    std::cout << "Class with ID '" << classID << "' not found.\n";
                }
                break;
            }

            case 4: {
                std::string classID;
                std::cout << "\nEnter class ID to delete: ";
                std::getline(std::cin, classID);

                cms.removeClass(classID);
                break;
            }

            case 5: {
                std::string classID, studentName, tempAge, tempGrade;
                int studentAge;
                float studentGrade;

                std::cout << "\nEnter class ID to add students: ";
                std::getline(std::cin, classID);

                classmanager* cls = cms.findClassByID(classID);
                if (cls) {
                    std::cout << "Enter student name: ";
                    std::getline(std::cin, studentName);

                    std::cout << "Enter student age: ";
                    std::getline(std::cin, tempAge);
                    try {
                        studentAge = std::stoi(tempAge);
                    } catch (...) {
                        std::cout << "Invalid input for age.\n";
                        break;
                    }

                    std::cout << "Enter student grade: ";
                    std::getline(std::cin, tempGrade);
                    try {
                        studentGrade = std::stof(tempGrade);
                    } catch (...) {
                        std::cout << "Invalid input for grade.\n";
                        break;
                    }

                    Student newStudent(studentName, studentAge, studentGrade);
                    cls->addStudent(newStudent);

                } else {
                    std::cout << "Class with ID '" << classID << "' not found.\n";
                }
                break;
            }

            case 6: {
                std::string classID, studentName, tempAge, tempGrade;
                int studentAge;
                float studentGrade;

                std::cout << "\nEnter class ID to update students: ";
                std::getline(std::cin, classID);

                classmanager* cls = cms.findClassByID(classID);
                if (cls) {
                    std::cout << "Enter student name to update: ";
                    std::getline(std::cin, studentName);

                    std::cout << "Enter new student age: ";
                    std::getline(std::cin, tempAge);
                    try {
                        studentAge = std::stoi(tempAge);
                    } catch (...) {
                        std::cout << "Invalid input for age.\n";
                        break;
                    }

                    std::cout << "Enter new student grade: ";
                    std::getline(std::cin, tempGrade);
                    try {
                        studentGrade = std::stof(tempGrade);
                    } catch (...) {
                        std::cout << "Invalid input for grade.\n";
                        break;
                    }

                    Student updatedStudent(studentName, studentAge, studentGrade);
                    cls->removeStudent(studentName);
                    cls->addStudent(updatedStudent);

                    std::cout << "Student updated successfully.\n";
                } else {
                    std::cout << "Class with ID '" << classID << "' not found.\n";
                }
                break;
            }

            case 7: {
                std::string classID, studentName;
                std::cout << "\nEnter class ID to remove students: ";
                std::getline(std::cin, classID);

                classmanager* cls = cms.findClassByID(classID);
                if (cls) {
                    std::cout << "Enter student name to remove: ";
                    std::getline(std::cin, studentName);
                    cls->removeStudent(studentName);
                } else {
                    std::cout << "Class with ID '" << classID << "' not found.\n";
                }
                break;
            }

            case 8: {
                std::string classID;
                std::cout << "\nEnter class ID to view students: ";
                std::getline(std::cin, classID);

                classmanager* cls = cms.findClassByID(classID);
                if (cls) {
                    cls->viewStudents();
                } else {
                    std::cout << "Class with ID '" << classID << "' not found.\n";
                }
                break;
            }

            case 9: {
                std::cout << "\nExiting the program. Goodbye!\n";
                return 0;
            }

            default: {
                std::cout << "\nInvalid choice. Please try again.\n";
                break;
            }
        }

    } while (choice != 9);

    return 0;
}
