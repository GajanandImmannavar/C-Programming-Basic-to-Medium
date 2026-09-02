You're right 👍. For learning, just listing the header files isn't enough. You need to see **what each header provides → a small example → expected output → when to use it**, especially for DSA.

Let me give you a proper **C Header Files for C + DSA** reference in that format.

# Common C Header Files — C + DSA

A **header file** provides declarations for functions, macros, constants, and types that we can use in a C program.

Syntax:

```c
#include <header_file.h>
```

---

# 1. `stdio.h`

### What is it?

`stdio.h` means **Standard Input/Output**.

### What does it provide?

Common functions:

```text
printf()    → output
scanf()     → input
getchar()   → read one character
putchar()   → print one character
fgets()     → read a line/string
puts()      → print a string
```

### When to use?

Use `stdio.h` when your program needs **input or output**.

### Example

```c
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}
```

### Output

```text
Enter a number: 25
You entered: 25
```

### DSA use

Almost every DSA program uses:

```c
#include <stdio.h>
```

for taking input and displaying results.

---

# 2. `stdlib.h`

### What is it?

`stdlib.h` means **Standard Library**.

### Important functions for DSA

```text
malloc()   → dynamically allocate memory
calloc()   → dynamically allocate and initialize memory
realloc()  → resize allocated memory
free()     → release allocated memory
exit()     → terminate program
qsort()    → sorting
bsearch()  → binary search
rand()     → generate pseudo-random numbers
```

### When to use?

Very important for:

* Linked Lists
* Trees
* Graphs
* Dynamic Arrays
* Dynamic Memory
* Sorting
* Searching

### Example: `malloc()`

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(sizeof(int));

    *ptr = 50;

    printf("Value: %d\n", *ptr);

    free(ptr);

    return 0;
}
```

### Output

```text
Value: 50
```

Here:

```text
malloc()
   ↓
allocates memory

free()
   ↓
releases memory
```

This becomes very important when you learn **linked lists, trees, and graphs**.

---

# 3. `stdlib.h` — `exit()`

You specifically mentioned `exit()`.

### What does `exit()` do?

`exit()` **terminates the entire program immediately**.

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Started\n");

    exit(0);

    printf("This will not execute\n");

    return 0;
}
```

### Output

```text
Program Started
```

The second `printf()` does not execute because:

```c
exit(0);
```

terminates the program.

### What does `0` mean?

Commonly:

```text
exit(0) → successful/normal termination
```

Non-zero values are commonly used to indicate some kind of failure/error.

---

# 4. `stdlib.h` — `qsort()`

`qsort()` is particularly interesting for DSA.

### What does it do?

It provides a library function for **sorting an array**.

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int arr[] = {40, 10, 30, 20, 50};
    int size = 5;

    qsort(arr, size, sizeof(int), compare);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### Output

```text
Sorted Array: 10 20 30 40 50
```

### DSA use

Useful when you need sorting but don't want to manually implement a sorting algorithm.

However, while **learning DSA**, you should still implement:

```text
Bubble Sort
Selection Sort
Insertion Sort
Merge Sort
Quick Sort
```

yourself so you understand the algorithms.

---

# 5. `stdlib.h` — `bsearch()`

### What does it do?

`bsearch()` performs a **binary search** on a sorted array.

### Important

The array must already be sorted.

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int *result = bsearch(
        &key,
        arr,
        5,
        sizeof(int),
        compare
    );

    if (result != NULL)
    {
        printf("Element Found: %d\n", *result);
    }
    else
    {
        printf("Element Not Found\n");
    }

    return 0;
}
```

### Output

```text
Element Found: 30
```

### DSA use

Useful for understanding/searching sorted data.

But while learning DSA, implement **Binary Search manually** too.

---

# 6. `string.h`

### What is it?

`string.h` provides functions for working with **C strings and memory**.

### Important functions

```text
strlen()  → length of string
strcpy()  → copy string
strcat()  → join strings
strcmp()  → compare strings
memcpy()  → copy memory
memset()  → fill memory
```

### When to use?

Very useful for:

* String DSA problems
* Character arrays
* String manipulation
* Memory operations

### Example: `strlen()`

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Gajanand";

    int length = strlen(name);

    printf("Length: %d\n", length);

    return 0;
}
```

### Output

```text
Length: 8
```

---

# 7. `string.h` — `strcmp()`

### What does it do?

`strcmp()` compares two strings.

### Example

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "apple";
    char str2[] = "apple";

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are different\n");
    }

    return 0;
}
```

### Output

```text
Strings are equal
```

### DSA use

Very useful for problems involving:

* String comparison
* Anagrams
* Palindromes
* Dictionary/order comparisons
* String searching

---

# 8. `math.h`

### What is it?

`math.h` provides mathematical functions.

### Common functions

```text
sqrt()   → square root
pow()    → power
ceil()   → round upward
floor()  → round downward
round()  → round to nearest integer
fabs()   → absolute value of floating-point number
```

### Example

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double result = sqrt(25);

    printf("Square Root: %.2f\n", result);

    return 0;
}
```

### Output

```text
Square Root: 5.00
```

### DSA use

Useful for:

* Mathematical problems
* Number theory
* Prime-related problems
* Distance calculations
* Geometry
* Mathematical algorithms

---

# 9. `limits.h`

### What is it?

`limits.h` provides the **minimum and maximum limits of integer data types**.

### Important constants

```text
INT_MAX
INT_MIN

CHAR_MAX
CHAR_MIN

LONG_MAX
LONG_MIN
```

### Example

```c
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Maximum int: %d\n", INT_MAX);
    printf("Minimum int: %d\n", INT_MIN);

    return 0;
}
```

### Output

Your exact values depend on the C implementation, but on a typical 32-bit `int` system:

```text
Maximum int: 2147483647
Minimum int: -2147483648
```

### DSA use

Extremely useful.

For example, when finding the minimum value:

```c
int min = INT_MAX;
```

Then:

```c
if (arr[i] < min)
{
    min = arr[i];
}
```

Similarly:

```c
int max = INT_MIN;
```

is commonly used when finding a maximum.

---

# 10. `ctype.h`

### What is it?

`ctype.h` provides functions for **checking and converting characters**.

### Important functions

```text
isdigit()  → checks digit
isalpha()  → checks alphabet
isalnum()  → checks alphabet/digit
isspace()  → checks whitespace
isupper()  → checks uppercase
islower()  → checks lowercase

toupper()  → convert to uppercase
tolower()  → convert to lowercase
```

### Example

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = '7';

    if (isdigit(ch))
    {
        printf("It is a digit\n");
    }

    return 0;
}
```

### Output

```text
It is a digit
```

### DSA use

Very useful in:

* String problems
* Character problems
* Parsing
* Frequency counting
* Palindrome problems

---

# 11. `stdint.h`

### What is it?

`stdint.h` provides **integer types with a specified width**.

Examples:

```text
int8_t
int16_t
int32_t
int64_t

uint8_t
uint16_t
uint32_t
uint64_t
```

### Example

```c
#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t number = 9000000000LL;

    printf("%ld\n", number);

    return 0;
}
```

The exact `printf` format for `int64_t` can be implementation-dependent; for fully portable code, `<inttypes.h>` provides macros such as `PRId64`.

### DSA use

Useful when numbers can become larger than a normal `int` can safely hold.

For example:

```text
Large sums
Large factorial-related calculations
Large DP values
Large array calculations
```

---

# 12. `assert.h`

### What is it?

Provides:

```c
assert()
```

It is mainly used for **debugging**.

### Example

```c
#include <stdio.h>
#include <assert.h>

int main()
{
    int age = 22;

    assert(age >= 0);

    printf("Valid age\n");

    return 0;
}
```

### Output

```text
Valid age
```

If the condition is false:

```c
assert(age >= 0);
```

the program reports an assertion failure.

### DSA use

Useful for checking assumptions while developing/debugging algorithms.

---

# 13. `time.h`

### What is it?

Provides functions related to **time**.

Important functions include:

```text
time()
clock()
```

### Example: `clock()`

```c
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start = clock();

    for (long long i = 0; i < 100000000; i++)
    {
        // Some work
    }

    clock_t end = clock();

    double timeTaken =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time: %f seconds\n", timeTaken);

    return 0;
}
```

### Output

The exact value depends on your computer:

```text
Time: 0.XXX seconds
```

### DSA use

Useful when experimenting with algorithm performance.

For example, comparing:

```text
Bubble Sort
     vs
Quick Sort
```

---

# 14. `conio.h` ⚠️

### Important

`conio.h` is **NOT a standard C header file**.

You may see it in old tutorials:

```c
#include <conio.h>
```

It is associated with older/compiler-specific environments.

Common functions you may encounter:

```text
getch()
getche()
kbhit()
clrscr()
```

---

## `getch()`

### What does it do?

In implementations that provide it, `getch()` reads a single keyboard character **without requiring Enter** and typically does not echo it.

Example in a compiler that supports `conio.h`:

```c
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Press any key...");

    getch();

    return 0;
}
```

### Output

```text
Press any key...
```

The program waits for a key press.

### Important

Do NOT use this as your normal modern C approach because `getch()` is not standard C.

---

# 15. `getchar()` — Standard alternative

If you want to read a character using standard C:

```c
#include <stdio.h>

int main()
{
    printf("Press Enter to continue...");

    getchar();

    return 0;
}
```

### Output

```text
Press Enter to continue...
```

Here the user presses **Enter**.

---

# 16. `getche()`

You may also see:

```c
getche();
```

It is another non-standard `conio.h` function.

The basic idea is:

```text
getch()
  ↓
read key
  ↓
usually don't display it

getche()
  ↓
read key
  ↓
display it
```

Again, these are **compiler-specific**, not standard C.

---

# 17. `inttypes.h`

This is useful together with `stdint.h`.

It provides portable format macros for fixed-width integers.

Example:

```c
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int64_t number = 9000000000LL;

    printf("%" PRId64 "\n", number);

    return 0;
}
```

### Output

```text
9000000000
```

This is the portable way to print an `int64_t`.

---

# DSA Header File Cheat Sheet

| Header       | Important functions/features          | DSA use                     |
| ------------ | ------------------------------------- | --------------------------- |
| `stdio.h`    | `printf`, `scanf`, `fgets`            | Input/output                |
| `stdlib.h`   | `malloc`, `calloc`, `realloc`, `free` | Dynamic memory              |
| `stdlib.h`   | `qsort`                               | Sorting                     |
| `stdlib.h`   | `bsearch`                             | Searching                   |
| `stdlib.h`   | `exit`                                | Program termination         |
| `string.h`   | `strlen`, `strcmp`, `strcpy`          | Strings                     |
| `math.h`     | `sqrt`, `pow`, `ceil`, `floor`        | Math problems               |
| `limits.h`   | `INT_MAX`, `INT_MIN`                  | Min/max algorithms          |
| `ctype.h`    | `isdigit`, `isalpha`, `toupper`       | Character problems          |
| `stdint.h`   | `int32_t`, `int64_t`                  | Large/fixed-width integers  |
| `inttypes.h` | `PRId64`, etc.                        | Portable integer formatting |
| `assert.h`   | `assert`                              | Debugging                   |
| `time.h`     | `clock`, `time`                       | Performance experiments     |
| `conio.h`    | `getch`, `getche`                     | ⚠️ Old/non-standard C       |

---

# ⭐ Headers You Should Prioritize for C + DSA

For your current learning path, learn them in this order:

```text
1. stdio.h
      ↓
2. stdlib.h
      ↓
3. string.h
      ↓
4. limits.h
      ↓
5. math.h
      ↓
6. ctype.h
      ↓
7. stdint.h
      ↓
8. inttypes.h
      ↓
9. assert.h
      ↓
10. time.h
```

And keep this separate:

```text
conio.h
   ↓
Non-standard
   ↓
Know it because you may see it in old tutorials
   ↓
Don't depend on it for modern portable C
```

## One important DSA point

You don't need a special:

```c
#include <dsa.h>
```

There is **no standard DSA header**.

DSA is built using C's existing features:

```text
Arrays
Pointers
Structures
Functions
Dynamic Memory
       ↓
stdlib.h
       ↓
Linked List
Stack
Queue
Tree
Graph
Hash Table
```

So when you learn DSA in C, you'll repeatedly use:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
```

and sometimes:

```c
#include <math.h>
#include <ctype.h>
#include <stdint.h>
#include <inttypes.h>
#include <assert.h>
#include <time.h>
```

You're right to ask for examples and outputs—**that format is much better for learning than a function-name list**. I’ll use this style for your C notes going forward: **concept → what it provides → when to use → code → expected output → DSA relevance**.



Yes 👍 You want a **DSA-focused header-file usage table** showing **where each header is used** — Arrays, Strings, Linked Lists, Sorting, Searching, etc.

### C Header Files — DSA Usage

| Header File      | Mainly Used For                 | DSA Topics Where Used                                                 | Why / What It Provides                                                            |
| ---------------- | ------------------------------- | --------------------------------------------------------------------- | --------------------------------------------------------------------------------- |
| **`stdio.h`**    | Input / Output                  | Arrays, Strings, Linked Lists, Stack, Queue, Trees, Graphs            | `printf()`, `scanf()`, `getchar()`, `puts()` → taking input and displaying output |
| **`stdlib.h`**   | Memory & utilities              | Arrays, Linked Lists, Stack, Queue, Trees, Graphs, Sorting, Searching | `malloc()`, `calloc()`, `realloc()`, `free()`, `qsort()`, `bsearch()`, `exit()`   |
| **`string.h`**   | String operations               | Strings, Character Arrays                                             | `strlen()`, `strcpy()`, `strcmp()`, `strcat()`, `memcpy()`                        |
| **`math.h`**     | Mathematical operations         | Arrays, Searching, Sorting, Number Problems                           | `sqrt()`, `pow()`, `ceil()`, `floor()`                                            |
| **`limits.h`**   | Integer limits                  | Arrays, Searching, Sorting, Min/Max Problems, Graphs                  | `INT_MAX`, `INT_MIN` → useful for initializing minimum/maximum values             |
| **`stdint.h`**   | Fixed-size integers             | Arrays, Large Numbers, Graphs, Bit Manipulation                       | `int8_t`, `int32_t`, `int64_t`, etc.                                              |
| **`inttypes.h`** | Portable integer formatting     | Large-number DSA problems                                             | `PRId64`, `PRIu64` → safely print fixed-width integers                            |
| **`ctype.h`**    | Character checking/conversion   | Strings, Character Arrays                                             | `isdigit()`, `isalpha()`, `toupper()`, `tolower()`                                |
| **`assert.h`**   | Debugging / checking conditions | All DSA                                                               | `assert()` → checks whether a condition is true while debugging                   |
| **`time.h`**     | Measuring execution time        | Sorting, Searching, DSA Performance                                   | `clock()` → compare performance of algorithms                                     |
| **`conio.h`** ⚠️ | Console/key input               | Rarely useful in modern DSA                                           | `getch()`, `getche()`, `kbhit()` → non-standard, compiler-dependent               |

### More specifically by DSA topic

| DSA Topic                 | Commonly Used Header Files                  |
| ------------------------- | ------------------------------------------- |
| **Arrays**                | `stdio.h`, `stdlib.h`, `limits.h`, `math.h` |
| **Strings**               | `stdio.h`, `string.h`, `ctype.h`            |
| **Searching**             | `stdio.h`, `stdlib.h`, `limits.h`           |
| **Sorting**               | `stdio.h`, `stdlib.h`, `time.h`             |
| **Linked List**           | `stdio.h`, `stdlib.h`                       |
| **Stack**                 | `stdio.h`, `stdlib.h`                       |
| **Queue**                 | `stdio.h`, `stdlib.h`                       |
| **Trees**                 | `stdio.h`, `stdlib.h`                       |
| **Graphs**                | `stdio.h`, `stdlib.h`, `limits.h`           |
| **Recursion**             | `stdio.h` + depends on the problem          |
| **Dynamic Memory**        | `stdlib.h`                                  |
| **Bit Manipulation**      | `stdio.h`, `stdint.h`                       |
| **Mathematical Problems** | `stdio.h`, `math.h`, `limits.h`             |
| **Algorithm Performance** | `stdio.h`, `time.h`                         |

### ⭐ The most important for your C + DSA learning

```c
#include <stdio.h>      // Input / Output
#include <stdlib.h>     // Dynamic Memory, qsort, bsearch
#include <string.h>     // String Operations
#include <limits.h>     // INT_MAX, INT_MIN
#include <math.h>       // Mathematical Operations
#include <ctype.h>      // Character Operations
```

**Important:** There is no special `dsa.h` in standard C. DSA is built using C's **arrays, pointers, structures, functions, recursion, and dynamic memory**, along with these standard library headers.



Yes. You want a **complete reference note for each header file**, where the things listed in “What it provides” are also explained individually with **meaning, usage, syntax, and example/output**.

Here is a good format for your C + DSA notes.

## C Header Files — Detailed Reference

| Header       | Name / Meaning               | What it provides                                                                          | Main Usage                                         |
| ------------ | ---------------------------- | ----------------------------------------------------------------------------------------- | -------------------------------------------------- |
| `stdio.h`    | **Standard Input Output**    | `printf()`, `scanf()`, `getchar()`, `putchar()`, `fgets()`, `puts()`                      | Input/Output in almost every DSA program           |
| `stdlib.h`   | **Standard Library**         | `malloc()`, `calloc()`, `realloc()`, `free()`, `qsort()`, `bsearch()`, `exit()`, `rand()` | Dynamic memory, sorting, searching, random numbers |
| `string.h`   | **String Library**           | `strlen()`, `strcpy()`, `strcmp()`, `strcat()`, `memcpy()`                                | Strings and character arrays                       |
| `math.h`     | **Mathematics**              | `sqrt()`, `pow()`, `ceil()`, `floor()`, `round()`                                         | Mathematical calculations                          |
| `limits.h`   | **Integer Limits**           | `INT_MAX`, `INT_MIN`, `LONG_MAX`, etc.                                                    | Min/max problems, initialization                   |
| `ctype.h`    | **Character Type**           | `isdigit()`, `isalpha()`, `isalnum()`, `isspace()`, `toupper()`, `tolower()`              | String and character problems                      |
| `stdint.h`   | **Standard Integer Types**   | `int8_t`, `int16_t`, `int32_t`, `int64_t`                                                 | Fixed-size integers and large values               |
| `inttypes.h` | **Integer Types Formatting** | `PRId64`, `PRIu64`, etc.                                                                  | Portable printing of fixed-size integers           |
| `assert.h`   | **Assertions**               | `assert()`                                                                                | Debugging and checking conditions                  |
| `time.h`     | **Time**                     | `time()`, `clock()`, `difftime()`                                                         | Measuring algorithm execution time                 |
| `conio.h` ⚠️ | **Console Input/Output**     | `getch()`, `getche()`, `kbhit()`                                                          | Old/non-standard console programs                  |

---

# 1. `stdio.h`

### Meaning

**Standard Input Output**

Used for communicating with the user through the console.

### Provides

* `printf()` → output
* `scanf()` → input
* `getchar()` → read one character
* `putchar()` → print one character
* `fgets()` → read a string
* `puts()` → print a string

### Example: `printf()` and `scanf()`

```c
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Age: %d\n", age);

    return 0;
}
```

### Output

```text
Enter your age: 22
Age: 22
```

### DSA Usage

Used in almost **every DSA program** to take input and display results.

---

# 2. `stdlib.h`

### Meaning

**Standard Library**

Provides general-purpose functions.

### Provides

* `malloc()` → allocate memory
* `calloc()` → allocate and initialize memory
* `realloc()` → resize allocated memory
* `free()` → release memory
* `qsort()` → sorting
* `bsearch()` → binary search
* `exit()` → terminate program
* `rand()` → generate random numbers

### Example: `malloc()`

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // Allocate memory for one integer
    ptr = malloc(sizeof(int));

    *ptr = 50;

    printf("Value: %d\n", *ptr);

    // Release allocated memory
    free(ptr);

    return 0;
}
```

### Output

```text
Value: 50
```

### DSA Usage

Very important for:

* Linked Lists
* Trees
* Graphs
* Dynamic Arrays
* Dynamic Stack
* Dynamic Queue

---

# 3. `string.h`

### Meaning

**String Library**

Provides functions for working with strings and memory blocks.

### Provides

* `strlen()` → find string length
* `strcpy()` → copy string
* `strcmp()` → compare strings
* `strcat()` → join strings
* `memcpy()` → copy memory

### Example: `strlen()`

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Gajanand";

    int length = strlen(name);

    printf("Length: %d\n", length);

    return 0;
}
```

### Output

```text
Length: 8
```

### DSA Usage

Important for:

* String problems
* Character arrays
* Palindrome problems
* Anagram problems
* String comparison

---

# 4. `math.h`

### Meaning

**Mathematics Library**

Provides mathematical functions.

### Provides

* `sqrt()` → square root
* `pow()` → power
* `ceil()` → round upward
* `floor()` → round downward
* `round()` → nearest integer

### Example: `sqrt()`

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double result = sqrt(25);

    printf("Square Root: %.2f\n", result);

    return 0;
}
```

### Output

```text
Square Root: 5.00
```

### DSA Usage

Useful in:

* Mathematical problems
* Number problems
* Prime-related problems
* Distance calculations
* Geometry problems

---

# 5. `limits.h`

### Meaning

**Integer Limits**

Provides the minimum and maximum values that integer types can store.

### Provides

```text
INT_MAX
INT_MIN
CHAR_MAX
CHAR_MIN
LONG_MAX
LONG_MIN
```

### Example

```c
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);

    return 0;
}
```

### Output

Typically:

```text
INT_MAX: 2147483647
INT_MIN: -2147483648
```

### DSA Usage

Very important for **minimum/maximum problems**.

For example:

```c
int min = INT_MAX;
int max = INT_MIN;
```

This is commonly used when finding the smallest/largest element in an array.

---

# 6. `ctype.h`

### Meaning

**Character Type Library**

Provides functions for checking and converting characters.

### Provides

* `isdigit()` → checks digit
* `isalpha()` → checks alphabet
* `isalnum()` → checks alphabet or digit
* `isspace()` → checks whitespace
* `toupper()` → converts to uppercase
* `tolower()` → converts to lowercase

### Example: `isdigit()`

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = '7';

    if (isdigit(ch))
    {
        printf("It is a digit\n");
    }

    return 0;
}
```

### Output

```text
It is a digit
```

### DSA Usage

Useful for:

* String problems
* Character problems
* Palindrome
* Anagram
* Input validation

---

# 7. `stdint.h`

### Meaning

**Standard Integer Types**

Provides integers with a specific number of bits.

### Provides

```text
int8_t
int16_t
int32_t
int64_t
uint8_t
uint16_t
uint32_t
uint64_t
```

For example:

```c
int64_t
```

means an integer type that is exactly **64 bits**, when the implementation provides it.

### Example

```c
#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t number = 9000000000LL;

    printf("%lld\n", (long long)number);

    return 0;
}
```

### Output

```text
9000000000
```

### DSA Usage

Useful when a problem contains **very large integers**.

---

# 8. `inttypes.h`

### Meaning

**Integer Types Formatting**

Works with the fixed-width types from `stdint.h`.

### Provides

Portable format macros such as:

```text
PRId64
PRIu64
```

### Example

```c
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int64_t number = 9000000000LL;

    printf("%" PRId64 "\n", number);

    return 0;
}
```

### Output

```text
9000000000
```

### DSA Usage

Useful when working with `int64_t`, `uint64_t`, and other fixed-width integers in portable C code.

---

# 9. `assert.h`

### Meaning

**Assertion Library**

Used to check whether a condition is true while debugging.

### Provides

```c
assert()
```

### Syntax

```c
assert(condition);
```

### Example

```c
#include <stdio.h>
#include <assert.h>

int main()
{
    int age = 22;

    assert(age >= 0);

    printf("Valid age\n");

    return 0;
}
```

### Output

```text
Valid age
```

If the condition is false, `assert()` reports an error and normally terminates the program.

### DSA Usage

Useful for debugging:

* Array indexes
* Linked-list pointers
* Tree conditions
* Function assumptions

---

# 10. `time.h`

### Meaning

**Time Library**

Provides functions related to time and measuring execution time.

### Provides

* `time()` → current calendar time
* `clock()` → processor time used by the program
* `difftime()` → difference between two times

### Example: `clock()`

```c
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;

    start = clock();

    for (long i = 0; i < 1000000; i++)
    {
        // Some work
    }

    end = clock();

    double time_taken =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time: %f seconds\n", time_taken);

    return 0;
}
```

### Output

The exact value varies:

```text
Time: 0.002341 seconds
```

### DSA Usage

Useful when comparing algorithm performance, for example:

```text
Bubble Sort    → slower
Quick Sort     → faster
```

---

# 11. `conio.h` ⚠️

### Meaning

**Console Input/Output**

But remember: **`conio.h` is not part of standard C.**

It is provided by some compilers/environments.

### Provides

Common functions include:

* `getch()` → read a key without waiting for Enter
* `getche()` → read a key and display it
* `kbhit()` → check whether a key was pressed

### Example: `getch()`

```c
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Press any key...");

    getch();

    printf("\nKey pressed!");

    return 0;
}
```

### Output

```text
Press any key...
```

After pressing a key:

```text
Key pressed!
```

### DSA Usage

**Not important for modern DSA.**

For portable C, prefer standard functions such as:

```c
getchar();
```

---

## ⭐ Final DSA Cheat Sheet

| Header       | Remember It As            | Most Important Functions / Things    | DSA Importance |
| ------------ | ------------------------- | ------------------------------------ | -------------- |
| `stdio.h`    | **Input/Output**          | `printf`, `scanf`                    | ⭐⭐⭐⭐⭐          |
| `stdlib.h`   | **Memory + Utilities**    | `malloc`, `free`, `qsort`, `bsearch` | ⭐⭐⭐⭐⭐          |
| `string.h`   | **Strings**               | `strlen`, `strcmp`, `strcpy`         | ⭐⭐⭐⭐⭐          |
| `limits.h`   | **Integer Limits**        | `INT_MAX`, `INT_MIN`                 | ⭐⭐⭐⭐⭐          |
| `math.h`     | **Math**                  | `sqrt`, `pow`                        | ⭐⭐⭐            |
| `ctype.h`    | **Characters**            | `isdigit`, `isalpha`                 | ⭐⭐⭐            |
| `stdint.h`   | **Fixed-size Integers**   | `int64_t`                            | ⭐⭐             |
| `inttypes.h` | **Integer Formatting**    | `PRId64`                             | ⭐⭐             |
| `assert.h`   | **Debugging**             | `assert`                             | ⭐⭐             |
| `time.h`     | **Timing**                | `clock`                              | ⭐⭐             |
| `conio.h`    | **Old Console Functions** | `getch`                              | ⭐              |

**For your C + DSA learning, focus first on:**
`stdio.h` → `stdlib.h` → `string.h` → `limits.h` → `math.h` → `ctype.h`.
