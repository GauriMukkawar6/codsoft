#include <iostream>
#include <vector>
#include <string>

class TodoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
        std::cout << "Added task: " << task << std::endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
            return;
        }
        std::cout << "Your tasks:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i] << std::endl;
        }
    }

    void deleteTask(int taskNumber) {
        if (taskNumber < 1 || taskNumber > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
            return;
        }
        std::string removedTask = tasks[taskNumber - 1];
        tasks.erase(tasks.begin() + taskNumber - 1);
        std::cout << "Deleted task: " << removedTask << std::endl;
    }
};

int main() {
    TodoList todoList;
    int choice;
    std::string task;

    while (true) {
        std::cout << "\nTo-Do List Manager" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Delete Task" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Choose an option (1-4): ";
        std::cin >> choice;
        std::cin.ignore();  // Ignore leftover newline character

        switch (choice) {
            case 1:
                std::cout << "Enter the task: ";
                std::getline(std::cin, task);
                todoList.addTask(task);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                todoList.viewTasks();
                int taskNumber;
                std::cout << "Enter the task number to delete: ";
                std::cin >> taskNumber;
                todoList.deleteTask(taskNumber);
                break;
            case 4:
                std::cout << "Exiting the To-Do List Manager." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please select again." << std::endl;
        }
    }
    return 0;
}