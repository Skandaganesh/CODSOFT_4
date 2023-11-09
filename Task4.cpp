#include <iostream>
#include <string>
#define MAX_TASKS 100
using namespace std;

int main()
{
    string tasks[MAX_TASKS];
    int Count = 5;

    while (true)
    {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (Count < 100)
            {
                cout << "Enter the task to add: ";
                cin.ignore();
                getline(cin, tasks[Count++]);
                cout << "Task added to the to-do list." << endl;
            }
            else
            {
                cout << "To-do list is full. You cannot add more tasks." << endl;
            }
            break;
        }
        case 2:
        {
            if (Count == 0)
            {
                cout << "No tasks in the to-do list." << endl;
            }
            else
            {
                cout << "Tasks in the to-do list:" << endl;
                for (int i = 0; i < Count; ++i)
                {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
            break;
        }
        case 3:
        {
            if (Count == 0)
            {
                cout << "No tasks to delete." << endl;
            }
            else
            {
                cout << "Tasks in the to-do list:" << endl;
                for (int i = 0; i < Count; ++i)
                {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }

                int Index;
                cout << "Enter the index of the task to delete: ";
                cin >> Index;

                if (Index >= 1 && Index <= Count)
                {
                    for (int i = Index - 1; i < Count - 1; ++i)
                    {
                        tasks[i] = tasks[i + 1];
                    }
                    Count--;
                    cout << "Task deleted from the to-do list." << endl;
                }
                else
                {
                    cout << "Invalid task index." << endl;
                }
            }
            break;
        }
        case 4:
            cout << "Exiting the to-do list manager." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please select a valid option (1/2/3/4)." << endl;
            break;
        }
    }
}
