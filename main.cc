#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int choice;
    bool login = false;

    do {
        cout << "Welcome to the grade management system" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Login" << endl;
        cout << "3. Delete Account" << endl;
        cout << "4. Exit" << endl;
        cout << "Please enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                ifstream inFile("account.txt");
                string name, password, line;
                cout << "Enter your name: " << endl;
                cin >> name;
                bool usernameExists = false;
                while (getline(inFile, line)) {
                    if (line == name) {
                        cout << "Username already exists! Please choose a different name." << endl;
                        usernameExists = true;
                        break;
                    }
                }
                inFile.close();

                if (!usernameExists) {
                    cout << "Enter your password: " << endl;
                    cin >> password;

                    ofstream outFile("account.txt", ios::app);
                    outFile << name << endl;
                    outFile << password << endl;
                    outFile.close();

                    cout << "Account created successfully!" << endl;
                }
                break;
            }
            case 2: {
                ifstream inFile("account.txt");
                string name, password, line;
                bool found = false;
                cout << "Enter your name: " << endl;
                cin >> name;
                cout << "Enter your password: " << endl;
                cin >> password;

                while (getline(inFile, line)) {
                    if (line == name) {
                        found = true;
                        getline(inFile, line);
                        if (line == password) {
                            login = true;
                            cout << "Login successful!" << endl;
                        } else {
                            cout << "Incorrect password!" << endl;
                        }
                        break;
                    }
                }
                inFile.close();

                if (!found) {
                    cout << "Account not found!" << endl;
                }
                break;
            }
            case 3: {
                ifstream inFile("account.txt");
                ofstream tempFile("temp.txt");
                string name, password, line;
                bool found = false;
                cout << "Enter your name: " << endl;
                cin >> name;
                cout << "Enter your password: " << endl;
                cin >> password;

                while (getline(inFile, line)) {
                    if (line == name) {
                        string storedName = line;
                        found = true;
                        if (getline(inFile, line)) {
                            string storedPass = line;
                            if (storedPass == password) {
                                cout << "Account deleted successfully!" << endl;
                            } else {
                                cout << "Incorrect password!" << endl;
                                tempFile << storedName << endl;
                                tempFile << storedPass << endl;
                            }
                        } else {
                            tempFile << storedName << endl;
                        }
                    } else {
                        tempFile << line << endl;
                    }
                }

                inFile.close();
                tempFile.close();

                if (found) {
                    remove("account.txt");
                    rename("temp.txt", "account.txt");
                } else {
                    cout << "Account not found!" << endl;
                    remove("temp.txt");
                }
                break;
            }
            case 4: {
                cout << "Exiting program. Goodbye!" << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

    } 
    while (!login && choice != 4);

    if(login){
        cout << "You are now logged in." << endl;

    }

    return 0;
}
