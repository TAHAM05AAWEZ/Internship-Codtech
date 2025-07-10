# Task 1 – File Handling

File handling in C refers to the process of storing data in external files, so that information can be saved and retrieved even after the program stops running. It plays a vital role in applications that require long-term data storage, such as logs, reports, or user-generated input.

This task involves building a simple menu-driven C program that demonstrates the basic operations involved in file handling. The user can choose from four main options: create a file, write content to it, append additional data, or read the existing contents. The file used for all operations is named `output.txt`. The program uses standard C functions like `fopen()`, `fputs()`, and `fgetc()` to perform these tasks. It captures multi-line user input using `fgets()` and handles user interaction with a `do-while` loop and `switch` statement. This task helps understand how to manage persistent data using external text files in C, which is an essential concept for logging, configuration storage, or basic file I/O applications.

### Files Included

* `Task1_file_handling.c` – The source code handling the menu-based file operations.
* `output.txt` – The file used for storing, appending, and reading user input.
* `README.md` – Explains how the program works along with example outputs for clarity.

### Sample Output

The following sample output reflects a full cycle of the file handling options available in the program. All interactions are performed on a designated file named `output.txt`.

```bash
===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit
Enter your choice (1–5): 1
File 'output.txt' created successfully.

===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit
Enter your choice (1–5): 2
Enter text to write to the file:
This file has been created as part of my C programming internship assignment.
 I’m learning how to perform basic file operations like creating a file, writing text to it, appending more data, and then reading it back.
It's interesting to see how the data stays even after the program ends, which is different from variables that vanish after execution.
This is my first time doing something like this using actual file pointers and modes in C, and it feels like a small step into real-world programming.
Data written to 'output.txt'.

===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit
Enter your choice (1–5): 3
Enter text to append to the file:
Now I’m adding this extra paragraph just to try out the append functionality.
 It should come right after the previous text without deleting anything.
 I think I’m getting the hang of how 'a' mode works in fopen().
This exercise really helped me understand why file handling is so important in programming beyond just printing things to the terminal.
Data appended to 'output.txt'.

===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit
Enter your choice (1–5): 4

Contents of 'output.txt':
This file has been created as part of my C programming internship assignment.
I’m learning how to perform basic file operations like creating a file, writing text to it, appending more data, and then reading it back.
It's interesting to see how the data stays even after the program ends, which is different from variables that vanish after execution.
This is my first time doing something like this using actual file pointers and modes in C, and it feels like a small step into real-world programming.
Now I’m adding this extra paragraph just to try out the append functionality.
It should come right after the previous text without deleting anything.
I think I’m getting the hang of how 'a' mode works in fopen().
This exercise really helped me understand why file handling is so important in programming beyond just printing things to the terminal.

===== File Handling Menu =====
1. Create File
2. Write to File
3. Append to File
4. Read File
5. Exit
Enter your choice (1–5): 5
Exiting program. Goodbye!
```

---
