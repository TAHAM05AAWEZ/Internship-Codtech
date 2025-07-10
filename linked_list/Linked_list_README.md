# Task 2 – Singly Linked List

Linked lists are one of the fundamental data structures in computer science, especially useful in scenarios where dynamic memory allocation is required. Unlike arrays, linked lists do not require a fixed size at the time of declaration, making them ideal for managing data when the size is unknown or constantly changing.

This task involves creating a simple menu-driven program that allows the user to perform operations on a singly linked list. The program is designed to insert nodes at the end of the list, delete nodes by a specified value, and display the entire list. Each node contains an integer value and a pointer to the next node in the sequence. The implementation relies on dynamically allocated memory using `malloc()` and safely frees memory using `free()` when nodes are deleted. The control flow is managed using a `do-while` loop and `switch` statement to repeatedly offer the user a menu of actions. This task introduces key concepts of data structures in C and builds intuition around pointer manipulation and memory management.

### Files Included

* `Task2_linked_list.c` – The main program file implementing all linked list operations.
* `README.md` – Provides a detailed explanation of the task, the approach, and terminal output examples.

### Sample Output

The sample interaction below demonstrates how a user can manipulate a linked list by inserting, deleting, and displaying data:

```bash
--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 1
Enter value to insert: 5

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 1
Enter value to insert: 10

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 1
Enter value to insert: 20

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 3
Linked List: 5 -> 10 -> 20 -> NULL

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 2
Enter value to delete: 10
Node with value 10 deleted.

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 3
Linked List: 5 -> 20 -> NULL

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 2
Enter value to delete: 7
Value 7 not found in the list.

--- Singly Linked List Menu ---
1. Insert at end
2. Delete by value
3. Traverse
4. Exit
Enter your choice: 4
Exiting the program.
```

---
