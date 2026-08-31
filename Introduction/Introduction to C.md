# Day 1 — Introduction to C

We'll start from **zero** and build the foundation properly.

## 1. What is C?

C is a **general-purpose, procedural programming language** used to develop software where performance and control over memory are important.

C was developed by **Dennis Ritchie** at **Bell Labs** in the early 1970s.

### Where is C used?

| Area              | Examples                                |
| ----------------- | --------------------------------------- |
| Operating Systems | Linux, Unix                             |
| Embedded Systems  | Microcontrollers, IoT devices           |
| System Software   | Compilers, drivers                      |
| Networking        | Network software                        |
| Databases         | Database systems                        |
| Game/Graphics     | Performance-critical software           |
| DSA               | Learning data structures and algorithms |

---

# 2. Why Learn C?

C is useful because it teaches you how programs work closer to the computer.

You will eventually understand:

```text
Your C Program
      ↓
    Compiler
      ↓
Machine Code
      ↓
      CPU
      ↓
    Output
```

C also gives you a strong foundation for:

* C++
* Java
* Operating Systems
* Embedded Systems
* DSA
* Computer Architecture

---

# 3. Your First C Program

Create a file:

```text
hello.c
```

Write:

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!");

    return 0;
}
```

Output:

```text
Hello, World!
```

---

# 4. Understand Every Line

### Line 1

```c
#include <stdio.h>
```

`stdio.h` means **Standard Input/Output Header**.

It provides functions such as:

```c
printf()
scanf()
```

`#include` tells the preprocessor to include the contents needed from that header.

---

### Line 2

```c
int main()
```

`main()` is the function where execution of a C program begins.

```text
int
 ↓
Return type

main()
 ↓
Main function
```

The `int` means the function returns an integer value.

---

### Line 3

```c
{
```

This starts the body of the `main()` function.

---

### Line 4

```c
printf("Hello, World!");
```

`printf()` displays text on the screen.

```text
printf()
   ↓
Print something
   ↓
Screen
```

The text inside `" "` is called a **string literal**.

---

### Line 5

```c
return 0;
```

This ends the `main()` function and returns `0` to the operating system.

Conventionally:

```text
return 0 → Program completed successfully
```

---

### Line 6

```c
}
```

This marks the end of `main()`.

---

# 5. Basic Structure of a C Program

A simple C program generally looks like:

```c
#include <header.h>

int main()
{
    // statements

    return 0;
}
```

Think of it as:

```text
Header files
     ↓
main()
     ↓
Statements
     ↓
return
```

---

# 6. What is a Compiler?

C is a **compiled language**.

You write:

```text
hello.c
```

The compiler converts your C source code into code that the computer can execute.

```text
hello.c
   ↓
Compiler
   ↓
Executable / Machine code
   ↓
CPU
   ↓
Output
```

For example, with GCC:

```bash
gcc hello.c -o hello
```

Then run:

```bash
./hello
```

On Windows, the executable is commonly:

```bash
hello.exe
```

---

# 7. Comments in C

Comments are ignored by the compiler.

### Single-line comment

```c
// This is a comment
```

### Multi-line comment

```c
/*
   This is
   a multi-line comment
*/
```

Example:

```c
#include <stdio.h>

int main()
{
    // Print a message
    printf("Hello");

    return 0;
}
```

---

# 8. Semicolon `;`

Most C statements end with a semicolon.

```c
printf("Hello");
return 0;
```

Think:

```text
Statement → ;
```

For example:

```c
int age = 21;
printf("%d", age);
```

Forgetting `;` can cause a compilation error.

---

# 9. Important Basic Terms

| Term        | Meaning                                         |
| ----------- | ----------------------------------------------- |
| Program     | Instructions written to solve a problem         |
| Source Code | C code written by the programmer                |
| Compiler    | Converts C source code into executable code     |
| Function    | A block of code that performs a task            |
| `main()`    | Starting point of program execution             |
| Header File | Provides declarations for library functionality |
| Statement   | An instruction in a C program                   |
| `printf()`  | Displays output                                 |
| Comment     | Explanation ignored by compiler                 |
| `return`    | Sends a value back from a function              |

---

# 10. Your First Practice

Don't just copy the previous program. Type these yourself.

### Program 1

Print:

```text
Hello
My name is Gajanand
I am learning C
```

Expected output:

```text
Hello
My name is Gajanand
I am learning C
```

### Program 2

Print your:

```text
Name
Age
College
Branch
```

### Program 3

Print:

```text
*
**
***
****
*****
```

---

# 🧠 Check Your Understanding

Before moving to **Variables and Data Types**, make sure you can answer:

1. What is C?
2. Who developed C?
3. What is the purpose of `main()`?
4. What does `#include <stdio.h>` do?
5. What is `printf()` used for?
6. Why do we use `return 0;`?
7. What is a compiler?
8. What is a comment?
9. Why is `;` used?
10. What happens to a C program between writing the code and getting the output?


