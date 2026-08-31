# 01-Basics → 07-Constants

> **Topic:** Constants, Literals, `const`, `#define`, and Constant Expressions
> **Level:** Beginner → Medium
> **Goal:** Understand what values cannot/should not change, how C represents literal values, and how to use them correctly.

---

# 1. What is a Constant?

A **constant** is a value that is not intended to change during program execution.

Examples:

```c
10
3.14159
'A'
"Hello"
```

C has several related concepts that should not be confused:

| Concept                | Example               | Technical Meaning                                      |
| ---------------------- | --------------------- | ------------------------------------------------------ |
| Integer literal        | `10`                  | Integer value written directly in source code          |
| Floating-point literal | `3.14`                | Floating-point value written directly in source code   |
| Character constant     | `'A'`                 | Character value written using single quotes            |
| String literal         | `"Hello"`             | Sequence of characters written using double quotes     |
| `const` object         | `const int age = 20;` | Object that cannot be modified through that identifier |
| Macro                  | `#define PI 3.14159`  | Preprocessor macro used for textual replacement        |
| Constant expression    | `10 + 20`             | Expression that can be evaluated as a constant         |

> **Important:** A literal, a `const` object, and a `#define` macro are **not the same thing**.

---

# 2. Literal

## Definition

A **literal** is a value written directly in the source code.

Examples:

```c
10
25.5
'A'
"Hello"
```

Instead of storing the value in a variable first, you write the value directly.

Example:

```c
int age = 20;
```

Here:

```text
int        → Data Type
age        → Identifier / Variable Name
=          → Assignment / Initialization Operator
20         → Integer Literal
;          → Statement Terminator
```

---

# 3. Types of Literals in C

| Literal Type           | Example   | Technical Name                         | Common Data Type                              |
| ---------------------- | --------- | -------------------------------------- | --------------------------------------------- |
| Integer                | `10`      | Integer Literal                        | `int`                                         |
| Decimal floating-point | `3.14`    | Floating-Point Literal                 | `double`                                      |
| Float                  | `3.14f`   | Floating-Point Literal with `f` suffix | `float`                                       |
| Long double            | `3.14L`   | Floating-Point Literal with `L` suffix | `long double`                                 |
| Character              | `'A'`     | Character Constant                     | `int`-compatible character value              |
| String                 | `"Hello"` | String Literal                         | Character array                               |
| Hexadecimal integer    | `0xFF`    | Hexadecimal Integer Literal            | Integer type                                  |
| Octal integer          | `077`     | Octal Integer Literal                  | Integer type                                  |
| Binary*                | `0b1010`  | Binary Integer Literal                 | Supported in newer C versions/implementations |

*Binary literals depend on the C standard/compiler version being used.

---

# 4. Integer Literals

An integer literal represents a whole-number value.

Examples:

```c
10
100
-20
0
```

Example:

```c
int age = 22;
```

Here `22` is an **integer literal**.

## Common integer literal forms

| Form        | Example   | Number System |
| ----------- | --------- | ------------- |
| Decimal     | `25`      | Base 10       |
| Octal       | `031`     | Base 8        |
| Hexadecimal | `0x19`    | Base 16       |
| Binary      | `0b11001` | Base 2        |

### Decimal

```c
int number = 25;
```

### Octal

```c
int number = 031;
```

### Hexadecimal

```c
int number = 0x19;
```

---

# 5. Integer Literal Suffixes

Suffixes can specify the type of an integer literal.

| Suffix        | Meaning                | Example  |
| ------------- | ---------------------- | -------- |
| No suffix     | Normal integer literal | `100`    |
| `U` / `u`     | Unsigned               | `100U`   |
| `L` / `l`     | Long                   | `100L`   |
| `LL` / `ll`   | Long long              | `100LL`  |
| `UL` / `ul`   | Unsigned long          | `100UL`  |
| `ULL` / `ull` | Unsigned long long     | `100ULL` |

Example:

```c
100
100U
100L
100LL
100UL
100ULL
```

---

# 6. Floating-Point Literals

A floating-point literal represents a number containing a fractional part.

Examples:

```c
3.14
10.5
0.25
```

By default, a decimal floating-point literal such as:

```c
3.14
```

has type `double`.

---

# 7. Floating-Point Literal Suffixes

| Literal | Suffix | Type          |
| ------- | ------ | ------------- |
| `3.14`  | None   | `double`      |
| `3.14f` | `f`    | `float`       |
| `3.14F` | `F`    | `float`       |
| `3.14L` | `L`    | `long double` |
| `3.14l` | `l`    | `long double` |

Recommended:

```c
float price = 10.5f;
double weight = 10.5;
long double value = 10.5L;
```

### Why use `f`?

```c
float number = 12.01f;
```

The `f` explicitly makes the literal a `float`.

Without it:

```c
float number = 12.01;
```

`12.01` is a `double` literal and is converted to `float` when assigned.

---

# 8. Character Constants

A character is written using **single quotes**.

```c
char grade = 'A';
```

Here:

```text
'A'
↓
Character Constant
```

## Character vs String

| Syntax  | Name               | Meaning                                     |
| ------- | ------------------ | ------------------------------------------- |
| `'A'`   | Character Constant | One character                               |
| `"A"`   | String Literal     | String containing one character plus `'\0'` |
| `"ABC"` | String Literal     | Multiple characters                         |

Example:

```c
char grade = 'A';
char name[] = "ABC";
```

---

# 9. Escape Sequences

Escape sequences are special character representations beginning with `\`.

| Escape Sequence | Technical Name                 | Meaning                           |
| --------------- | ------------------------------ | --------------------------------- |
| `\n`            | Newline Escape Sequence        | Moves to next line                |
| `\t`            | Horizontal Tab Escape Sequence | Inserts a tab                     |
| `\r`            | Carriage Return                | Moves cursor to beginning of line |
| `\b`            | Backspace                      | Moves one position backward       |
| `\a`            | Alert/Bell                     | Produces an alert if supported    |
| `\\`            | Backslash Escape Sequence      | Prints `\`                        |
| `\'`            | Single Quote Escape Sequence   | Prints `'`                        |
| `\"`            | Double Quote Escape Sequence   | Prints `"`                        |
| `\0`            | Null Character                 | Character with value zero         |

Example:

```c
printf("Hello\nWorld");
```

Output:

```text
Hello
World
```

---

# 10. String Literals

A string literal is a sequence of characters enclosed in double quotes.

```c
"Hello"
"Gajanand"
"Hello World"
```

Example:

```c
char name[] = "Gajanand";
```

Conceptually:

```text
G   a   j   a   n   a   n   d   \0
```

The `'\0'` is called the **null character**.

It marks the end of a C string.

---

# 11. `const`

## Definition

`const` is a **type qualifier** used to specify that an object is not modifiable through that identifier.

Example:

```c
const int age = 20;
```

You can read `age`:

```c
printf("%d", age);
```

But you cannot normally modify it:

```c
age = 25;   // ERROR
```

---

# 12. Syntax of `const`

General syntax:

```c
const data_type variable_name = value;
```

Examples:

```c
const int age = 20;
const float pi = 3.14f;
const double weight = 10.5;
const char grade = 'A';
```

---

# 13. `const` Declaration Breakdown

Consider:

```c
const int age = 20;
```

| Part    | Technical Name          | Meaning                                                             |
| ------- | ----------------------- | ------------------------------------------------------------------- |
| `const` | Type Qualifier          | Specifies that the object is not modifiable through this identifier |
| `int`   | Data Type               | Specifies integer type                                              |
| `age`   | Identifier              | Name of the object                                                  |
| `=`     | Initialization Operator | Assigns initial value                                               |
| `20`    | Integer Literal         | Literal value                                                       |
| `;`     | Statement Terminator    | Ends statement                                                      |

---

# 14. Initialization of `const`

A `const` object should normally be initialized when it is declared if you want it to have a useful value.

```c
const int MAX_AGE = 100;
```

Then:

```c
printf("%d", MAX_AGE);
```

But:

```c
const int MAX_AGE;

MAX_AGE = 100;   // ERROR
```

Because the object is not modifiable through that identifier.

---

# 15. `const` Does Not Mean "Compile-Time Constant" in Every Context

This is an important distinction.

```c
const int age = 20;
```

means:

> `age` is a non-modifiable object through this identifier.

It does **not** simply mean "replace every `age` with `20` before compilation."

That is different from:

```c
#define AGE 20
```

---

# 16. `const` vs `#define`

| Feature                                 | `const`                             | `#define`                                |
| --------------------------------------- | ----------------------------------- | ---------------------------------------- |
| Technical category                      | Type qualifier applied to an object | Preprocessor macro                       |
| Example                                 | `const int MAX = 100;`              | `#define MAX 100`                        |
| Handled by                              | Compiler                            | Preprocessor                             |
| Has a C data type                       | Yes                                 | No                                       |
| Creates an object                       | Yes                                 | No object is created by the macro itself |
| Scope                                   | C language scope rules              | Preprocessor replacement rules           |
| Type checking                           | Yes                                 | No type checking for replacement text    |
| Debugging                               | Generally easier                    | Can be less transparent                  |
| Can represent typed values              | Yes                                 | No inherent type                         |
| Can be used as text replacement         | No                                  | Yes                                      |
| Recommended for typed read-only objects | Yes                                 | Not applicable                           |
| Common use                              | Read-only data                      | Simple symbolic macros                   |

---

# 17. `#define`

`#define` is a **preprocessor directive** used to define a macro.

Syntax:

```c
#define MACRO_NAME replacement
```

Example:

```c
#define PI 3.14159
```

Before compilation, the preprocessor replaces occurrences of `PI` with `3.14159`.

Example:

```c
printf("%f", PI);
```

Conceptually becomes:

```c
printf("%f", 3.14159);
```

---

# 18. `#define` Breakdown

```c
#define PI 3.14159
```

| Part      | Technical Name                 | Meaning                             |
| --------- | ------------------------------ | ----------------------------------- |
| `#`       | Preprocessing Directive Marker | Identifies a preprocessor directive |
| `define`  | Macro Definition Directive     | Defines a macro                     |
| `PI`      | Macro Identifier               | Name of the macro                   |
| `3.14159` | Replacement List               | Text substituted for `PI`           |

---

# 19. `const` Example

```c
#include <stdio.h>

int main()
{
    const int age = 20;

    printf("Age: %d\n", age);

    return 0;
}
```

Output:

```text
Age: 20
```

Trying:

```c
age = 25;
```

is not allowed.

---

# 20. `#define` Example

```c
#include <stdio.h>

#define PI 3.14159

int main()
{
    printf("PI: %.5f\n", PI);

    return 0;
}
```

Output:

```text
PI: 3.14159
```

---

# 21. `const` with Different Data Types

| Declaration                   | Data Type | Example Value |
| ----------------------------- | --------- | ------------- |
| `const int age = 20;`         | `int`     | `20`          |
| `const float pi = 3.14f;`     | `float`   | `3.14`        |
| `const double weight = 10.5;` | `double`  | `10.5`        |
| `const char grade = 'A';`     | `char`    | `A`           |

---

# 22. Constants and Format Specifiers

A constant's format specifier depends on the **type of the expression/object being printed**, not simply on whether it is "constant."

| Data             | Example   | `printf()` Format Specifier | Specific Name                      |
| ---------------- | --------- | --------------------------- | ---------------------------------- |
| Integer          | `20`      | `%d`                        | Decimal Integer Format Specifier   |
| Float            | `20.5f`   | `%f`                        | Floating-Point Format Specifier    |
| Double           | `20.5`    | `%f`                        | Floating-Point Format Specifier    |
| Character        | `'A'`     | `%c`                        | Character Format Specifier         |
| String           | `"Hello"` | `%s`                        | String Format Specifier            |
| Unsigned integer | `20U`     | `%u`                        | Unsigned Decimal Format Specifier  |
| Long             | `20L`     | `%ld`                       | Long Integer Format Specifier      |
| Long long        | `20LL`    | `%lld`                      | Long Long Integer Format Specifier |

---

# 23. `printf()` Terminology

Example:

```c
printf("Age: %d\n", age);
```

| Code          | Technical Name                   | Purpose                      |
| ------------- | -------------------------------- | ---------------------------- |
| `printf()`    | Formatted Output Function        | Displays output              |
| `"Age: %d\n"` | Format String                    | Controls output format       |
| `Age:`        | Literal Text                     | Printed exactly              |
| `%d`          | Decimal Integer Format Specifier | Represents an integer        |
| `\n`          | Newline Escape Sequence          | Moves to next line           |
| `age`         | Function Argument                | Value supplied to `printf()` |

---

# 24. `scanf()` Terminology

Example:

```c
int age;

scanf("%d", &age);
```

| Code      | Technical Name                   | Purpose                              |
| --------- | -------------------------------- | ------------------------------------ |
| `scanf()` | Formatted Input Function         | Reads input                          |
| `"%d"`    | Format String                    | Specifies expected input             |
| `%d`      | Decimal Integer Format Specifier | Expects an `int`                     |
| `&`       | Address-of Operator              | Obtains address of `age`             |
| `age`     | Variable / Object                | Receives input                       |
| `&age`    | Address Argument                 | Tells `scanf()` where to store input |

---

# 25. `printf()` vs `scanf()` Format Specifiers

| Data Type      | `printf()` | `scanf()` | Specific Name            |
| -------------- | ---------- | --------- | ------------------------ |
| `int`          | `%d`       | `%d`      | Decimal Integer          |
| `unsigned int` | `%u`       | `%u`      | Unsigned Decimal Integer |
| `float`        | `%f`       | `%f`      | Floating-Point           |
| `double`       | `%f`       | `%lf`     | Double Floating-Point    |
| `long double`  | `%Lf`      | `%Lf`     | Long Double              |
| `char`         | `%c`       | `%c`      | Character                |
| String         | `%s`       | `%s`      | String                   |

### Important Rule

```text
float:
printf → %f
scanf  → %f

double:
printf → %f
scanf  → %lf
```

---

# 26. Precision with Constants

Example:

```c
#define PI 3.14159

printf("%f\n", PI);
```

Output may be:

```text
3.141590
```

To control the number of digits:

```c
printf("%.2f\n", PI);
```

Output:

```text
3.14
```

```c
printf("%.5f\n", PI);
```

Output:

```text
3.14159
```

| Format | Technical Term            | Meaning                           |
| ------ | ------------------------- | --------------------------------- |
| `%f`   | Floating-Point Conversion | Default floating-point formatting |
| `%.2f` | Precision Format          | 2 digits after decimal            |
| `%.3f` | Precision Format          | 3 digits after decimal            |
| `%.5f` | Precision Format          | 5 digits after decimal            |

---

# 27. Constant Expressions

A **constant expression** is an expression whose value can be evaluated as a constant according to C's rules.

Examples:

```c
10 + 20
5 * 10
100 / 4
2 + 3 * 4
```

Example:

```c
int result = 10 + 20;
```

The expression:

```c
10 + 20
```

is composed entirely of constants.

---

# 28. Literal vs Constant Expression

These are different terms.

| Concept             | Example             | Meaning                                        |
| ------------------- | ------------------- | ---------------------------------------------- |
| Literal             | `10`                | Single value written directly                  |
| Expression          | `10 + 20`           | Combination of values/operators                |
| Constant expression | `10 + 20`           | Expression that can be evaluated as a constant |
| `const` object      | `const int x = 10;` | Non-modifiable object                          |
| Macro               | `#define X 10`      | Preprocessor replacement                       |

---

# 29. `const` Does Not Make a Variable a Macro

This:

```c
const int age = 20;
```

does NOT mean:

```text
Replace every "age" with "20".
```

Instead, it defines an object named `age` that is not modifiable through that identifier.

Whereas:

```c
#define AGE 20
```

means the preprocessor performs macro replacement.

---

# 30. Constants vs Variables

| Feature                  | Variable        | `const` Object             | Literal                           | `#define` Macro          |
| ------------------------ | --------------- | -------------------------- | --------------------------------- | ------------------------ |
| Example                  | `int age = 20;` | `const int age = 20;`      | `20`                              | `#define AGE 20`         |
| Has identifier           | Yes             | Yes                        | No                                | Yes                      |
| Has C type               | Yes             | Yes                        | Has a type/category               | No inherent C type       |
| Modifiable               | Yes             | No through that identifier | No                                | Not an object            |
| Storage object           | Yes             | Yes                        | Not necessarily a separate object | No                       |
| Compiler feature         | Yes             | Yes                        | Yes                               | No, preprocessor feature |
| Preprocessor replacement | No              | No                         | No                                | Yes                      |
| Common use               | Changeable data | Read-only data             | Direct values                     | Symbolic replacement     |

---

# 31. Naming Constants

Common naming conventions:

```c
const int MAX_SIZE = 100;
const int MIN_AGE = 18;

#define PI 3.14159
#define MAX_USERS 100;
```

For macros, uppercase names are conventional:

```c
#define MAX_SIZE 100
#define PI 3.14159
```

For `const` objects, C style can vary:

```c
const int max_size = 100;
```

or:

```c
const int MAX_SIZE = 100;
```

The important thing is to be consistent.

---

# 32. Important Rules

## Rule 1: `const` objects cannot normally be assigned to

```c
const int age = 20;

age = 25;   // ❌ Error
```

---

## Rule 2: A literal is written directly

```c
int age = 20;
```

`20` is the literal.

---

## Rule 3: String literals use double quotes

```c
"Gajanand"
```

---

## Rule 4: Character constants use single quotes

```c
'A'
```

---

## Rule 5: Floating-point literals without a suffix are `double`

```c
3.14      // double
3.14f     // float
3.14L     // long double
```

---

## Rule 6: `#define` is handled before compilation

```c
#define PI 3.14159
```

is processed by the **preprocessor**.

---

## Rule 7: `#define` does not have a C data type

```c
#define AGE 20
```

`AGE` itself is a macro, not an `int` variable.

---

# 33. Complete Example

```c
#include <stdio.h>

#define PI 3.14159

int main()
{
    // const-qualified object
    const int age = 20;

    // Integer literal
    int employeeId = 101;

    // Floating-point literal
    double weight = 65.75;

    // Float literal
    float height = 5.8f;

    // Character constant
    char grade = 'A';

    // String literal
    char name[] = "Gajanand";

    printf("Age: %d\n", age);
    printf("Employee ID: %d\n", employeeId);
    printf("PI: %.5f\n", PI);
    printf("Weight: %.2f\n", weight);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}
```

Output:

```text
Age: 20
Employee ID: 101
PI: 3.14159
Weight: 65.75
Height: 5.80
Grade: A
Name: Gajanand
```

---

# 34. Master Terminology Table

This is the table you should remember.

| Syntax              | Technical Name                    | Category               | Purpose                                       |
| ------------------- | --------------------------------- | ---------------------- | --------------------------------------------- |
| `10`                | Integer Literal                   | Literal                | Represents integer value                      |
| `10U`               | Unsigned Integer Literal          | Literal                | Represents unsigned integer                   |
| `10L`               | Long Integer Literal              | Literal                | Represents long integer                       |
| `10LL`              | Long Long Integer Literal         | Literal                | Represents long long integer                  |
| `3.14`              | Floating-Point Literal            | Literal                | Represents `double`                           |
| `3.14f`             | Float Literal                     | Literal                | Represents `float`                            |
| `3.14L`             | Long Double Literal               | Literal                | Represents `long double`                      |
| `'A'`               | Character Constant                | Literal                | Represents a character                        |
| `"Hello"`           | String Literal                    | Literal                | Represents a character string                 |
| `const`             | Type Qualifier                    | Keyword                | Prevents modification through that identifier |
| `const int x = 10;` | Const-Qualified Object Definition | Declaration/Definition | Creates a non-modifiable object               |
| `#define PI 3.14`   | Macro Definition                  | Preprocessor Directive | Defines replacement text                      |
| `PI`                | Macro Identifier                  | Preprocessor           | Refers to macro                               |
| `10 + 20`           | Constant Expression               | Expression             | Expression consisting of constant values      |
| `%d`                | Decimal Integer Format Specifier  | Format Specification   | Handles integer formatting                    |
| `%f`                | Floating-Point Format Specifier   | Format Specification   | Handles floating-point output                 |
| `%lf`               | Double Input Format Specifier     | Format Specification   | Used by `scanf()` for `double`                |
| `%c`                | Character Format Specifier        | Format Specification   | Handles characters                            |
| `%s`                | String Format Specifier           | Format Specification   | Handles strings                               |
| `%.2f`              | Precision Format Specification    | Format Specification   | Displays 2 decimal places                     |
| `\n`                | Newline Escape Sequence           | Escape Sequence        | Moves output to next line                     |

---

# 35. Quick Revision

```text
LITERAL
│
├── Integer Literal
│   └── 10
│
├── Floating-Point Literal
│   ├── 3.14       → double
│   ├── 3.14f      → float
│   └── 3.14L      → long double
│
├── Character Constant
│   └── 'A'
│
└── String Literal
    └── "Hello"


CONSTANT-RELATED C FEATURES
│
├── const
│   └── const int age = 20;
│       → const-qualified object
│
└── #define
    └── #define PI 3.14159
        → preprocessor macro
```

## Most Important Things to Memorize

```text
10
→ Integer Literal

3.14
→ Floating-Point Literal → double

3.14f
→ Floating-Point Literal → float

'A'
→ Character Constant

"Hello"
→ String Literal

const int age = 20;
→ Const-Qualified Object

#define PI 3.14159
→ Preprocessor Macro

%d
→ Decimal Integer Format Specifier

%f
→ Floating-Point Format Specifier

%lf
→ Double Input Format Specifier for scanf()

%c
→ Character Format Specifier

%s
→ String Format Specifier

%.2f
→ Floating-Point Format Specification with Precision = 2
```

> **Core distinction:**
> **Literal = value written directly in code**
> **`const` = non-modifiable object through that identifier**
> **`#define` = preprocessor macro/replacement**
> **Constant expression = expression that can be evaluated as a constant**
