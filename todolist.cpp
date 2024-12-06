#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        // Display menu
        cout << "\nTo-Do List Program\n";
        cout << "1. Add a Task\n";
        cout << "2. Show All Tasks\n";
        cout << "3. Delete a Task\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            // Add a task
            cin.ignore(); // Clear the newline character from buffer
            string newTask;
            cout << "Enter your task: ";
            getline(cin, newTask);
            tasks.push_back(newTask);
            cout << "Task added.\n";
        } else if (choice == 2) {
            // Show tasks
            if (tasks.empty()) {
                cout << "No tasks to show.\n";
            } else {
                cout << "Your Tasks:\n";
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        } else if (choice == 3) {
            // Delete a task
            int taskNum;
            if (tasks.empty()) {
                cout << "No tasks to delete.\n";
            } else {
                cout << "Enter the task number to delete: ";
                cin >> taskNum;
                if (taskNum > 0 && taskNum <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNum - 1);
                    cout << "Task deleted.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
            }
        } else if (choice == 4) {
            // Exit program
            cout << "Exiting the program. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
