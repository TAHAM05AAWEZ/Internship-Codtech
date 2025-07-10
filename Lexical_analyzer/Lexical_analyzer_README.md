# Task 3 – Lexical Analyzer

Lexical analysis is the initial phase of the compilation process, where the source code is broken down into small units called tokens. These tokens include keywords, operators, identifiers, and constants, and they form the basic building blocks of a programming language. This process allows a compiler to understand the structure and meaning of the code that a programmer writes.

In this task, a basic lexical analyzer is implemented using the C programming language. The program scans a given string and detects different types of tokens. It identifies whether a part of the string is a keyword, an integer, an operator, a valid identifier, or an unrecognized input. The core logic of the program involves comparing substrings with a predefined list of C keywords and operators, using string comparison functions and character analysis to distinguish between different token types. Functions like `strcmp()`, `isdigit()`, `strncpy()`, and custom logic help perform these checks efficiently. The program also handles delimiters to separate tokens correctly and processes input in a way that mimics how a compiler would begin parsing C code.

By simulating this important compiler phase, the task helps in understanding how a source code is processed behind the scenes before it is actually compiled and executed. It builds a foundation for topics such as syntax parsing, semantic analysis, and code generation, which follow lexical analysis in a real compiler pipeline.

### Files Included

* `Task3_lexical_analyzer.c` – Contains the source code for the lexical analyzer logic.
* `Lexical_analyzer_README.md` – Provides explanation of the token detection process and usage with output samples.

### Sample Output

The following output shows how the program detects and classifies tokens for two different sample input strings.

```bash
For Expression "int a = b + c":
Token: Keyword, Value: int
Token: Identifier, Value: a
Token: Operator, Value: =
Token: Identifier, Value: b
Token: Operator, Value: +
Token: Identifier, Value: c

For Expression "int x=ab+bc+30+switch+ 0y ":
Token: Keyword, Value: int
Token: Identifier, Value: x
Token: Operator, Value: =
Token: Identifier, Value: ab
Token: Operator, Value: +
Token: Identifier, Value: bc
Token: Operator, Value: +
Token: Integer, Value: 30
Token: Operator, Value: +
Token: Keyword, Value: switch
Token: Operator, Value: +
Token: Unidentified, Value: 0y
```

---
