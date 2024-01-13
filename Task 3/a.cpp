#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    std::string description;
    bool completed;

    Task(const std::string& desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& desc) {
        tasks.emplace_back(desc);
        std::cout << "Task added successfully.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
        } else {
            std::cout << "Tasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". ";
                if (tasks[i].completed) {
                    std::cout << "[X] ";
                } else {
                    std::cout << "[ ] ";
                }
                std::cout << tasks[i].description << "\n";
            }
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            std::cout << "Task marked as completed.\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }
};

int main() {
    ToDoList todoList;

    while (true) {
        std::cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Quit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter task description: ";
                std::string description;
                std::cin.ignore();
                std::getline(std::cin, description);
                todoList.addTask(description);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                std::cout << "Enter task index to mark as completed: ";
                size_t index;
                std::cin >> index;
                todoList.markTaskCompleted(index);
                break;
            }
            case 4:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

