# Codtech C Programming Internship
>This repository contains four foundational C programming tasks demonstrating file handling, linked lists, lexical analysis, and run-length encoding. Each program is modular, commented for clarity, and includes sample inputs and outputs for better understanding.

##  Internship Details

- **Company**: Codtech IT Solutions  
- **Domain**: C Programming
- **Mentor**: Neela Santhosh Kumar  
- **Intern Name**: Taham Aawez
- **Intern ID**: CT04DF2454
- **Duration**: 4 Weeks  

---

##  Deliverables

| Task   | Description                                               | Folder Link                                                                 | Files                                                                                     |
|--------|-----------------------------------------------------------|------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------|
| Task 1 | File operations: create, write, append, read              | [file_handling](https://github.com/TAHAM05AAWEZ/Internship-Codtech/tree/main/file_handling)     | [`task1_file_handling.c`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/file_handling/task1_file_handling.c), [`output.txt`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/file_handling/output.txt), [`File_handling_README.md`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/file_handling/File_handling_README.md) |
| Task 2 | Singly Linked List: insert, delete, traverse              | [linked_list](https://github.com/TAHAM05AAWEZ/Internship-Codtech/tree/main/linked_list)         | [`Task2_linked_list.c`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/linked_list/Task2_linked_list.c), [`Linked_list_README.md`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/linked_list/Linked_list_README.md)                  |
| Task 3 | Lexical analyzer: identify tokens like keywords, operators| [Lexical_analyzer](https://github.com/TAHAM05AAWEZ/Internship-Codtech/tree/main/Lexical_analyzer)| [`Task3_lexical_analyzer.c`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/Lexical_analyzer/Task3_lexical_analyzer.c), [`Lexical_analyzer_README.md`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/Lexical_analyzer/Lexical_analyzer_README.md) |
| Task 4 | RLE compression & decompression utility                   | [RLE](https://github.com/TAHAM05AAWEZ/Internship-Codtech/tree/main/RLE)                      | [`Task4_RLE.c`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/RLE/Task4_RLE.c), [`RLE_README.md`](https://github.com/TAHAM05AAWEZ/Internship-Codtech/blob/main/RLE/RLE_README.md)                            |

>  Each folder includes its own dedicated `README.md` file explaining the task logic, implementation, and sample output.

---

##  Task Descriptions

###  Task 1 – File Handling
File handling in C refers to the process of storing data in external files, so that information can be saved and retrieved even after the program stops running. It plays a vital role in applications that require long-term data storage, such as logs, reports, or user-generated input.

This task involves building a simple menu-driven C program that demonstrates the basic operations involved in file handling. The user can choose from four main options: create a file, write content to it, append additional data, or read the existing contents. The file used for all operations is named output.txt. The program uses standard C functions like fopen(), fputs(), and fgetc() to perform these tasks. It captures multi-line user input using fgets() and handles user interaction with a do-while loop and switch statement. This task helps understand how to manage persistent data using external text files in C, which is an essential concept for logging, configuration storage, or basic file I/O applications. The folder contains Task1_file_handling.c as the main source code file where all logic is implemented, output.txt as the target file used for input/output, and Task1_README.md, which explains how the program works along with example outputs for clarity.

###  Task 2 – Singly Linked List
Linked lists are a type of linear data structure where elements (called nodes) are connected using pointers. Unlike arrays, linked lists are dynamic in size and allow efficient insertion and deletion of elements.

The second task focuses on implementing a basic singly linked list using dynamic memory in C. The program allows the user to insert new nodes at the end of the list, delete nodes by a given value, and display the current state of the list. It uses a user-friendly menu interface for navigation and performs operations based on simple conditions and pointer manipulation. The linked list is built using a struct to define nodes and utilizes malloc() and free() for memory management. This task provides a practical understanding of how dynamic data structures work and how elements can be managed in real-time. All functionality is written in Task2_linked_list.c, while Task2_README.md includes a breakdown of how the program behaves with real terminal inputs and outputs.

###  Task 3 – Lexical Analyzer
Lexical analysis is the first step in the compilation process, where a piece of source code is broken down into tokens such as keywords, operators, identifiers, and constants. These tokens help the compiler understand the structure of the code.

This task involves writing a basic lexical analyzer that can identify and classify different tokens from a C-style expression. The program takes a string input and scans it to detect keywords, operators, integers, and identifiers, displaying the category of each token. It simulates the first phase of a compiler where input is broken into recognizable elements. Arrays are used to store and compare against predefined C keywords and operators. Standard functions like strcmp(), isdigit(), and strncpy() help with string and character manipulation. This program improves the understanding of how compilers begin processing code by analyzing its lexical components. All logic is implemented in Task3_lexical_analyzer.c, and supporting explanations, along with sample outputs, are provided in Task3_README.md.

###  Task 4 – Run-Length Encoding (RLE)
Run-Length Encoding (RLE) is a simple form of lossless data compression where sequences of repeated characters are replaced by a single character followed by the number of repetitions. It is useful in reducing the size of repetitive string data.

The final task introduces a simple implementation of Run-Length Encoding (RLE), which is a basic text compression technique. The program offers two options: compress a string by replacing repeated characters with a single character followed by the count (e.g., "aaabb" becomes "a3b2"), or decompress such encoded strings back to their original form. The logic involves scanning the input using loops and applying character and numeric processing with isdigit() to detect counts. This task helps in understanding the concept of compression and how algorithms can reduce data size for efficient storage. The source code is written in Task4_RLE.c, and a separate Task4_README.md explains the process, showing how both compression and decompression work with input/output samples.

---

##  How to Compile & Run

These programs are written in standard C and can be compiled using `gcc`.

###  Steps:
1. Open terminal and navigate to the folder:
   ```bash
   cd file_handling
   ```
   
2. Compile using:
```bash
gcc Task1_file_handling.c -o task1
```

3. Run the program:
```bash
./task1
```

Repeat the same for other folders like linked_list, Lexical_analyzer, and RLE.

--- 
