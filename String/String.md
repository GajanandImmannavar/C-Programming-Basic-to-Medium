## Day 2 — Topic 9: Strings in C

### 1. What is a String?

A **string** is a collection of characters stored inside a character array.

For example:

```c
"Hello"
```

A string contains:

```text
H   e   l   l   o   \0
```

In C, strings are represented using:

```c
char
```

So, a string is basically a **character array**.

---

### 2. Declaring a String

```c
char name[20];
```

Explanation:

* `char` → stores characters
* `name` → array name
* `20` → maximum number of characters the array can hold

```text
name
 ↓
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
```

---

### 3. Initializing a String

```c
char name[6] = "Hello";
```

Here:

```text
Index:  0   1   2   3   4    5
       [H] [e] [l] [l] [o]  [\0]
```

The string `"Hello"` needs **6 spaces**, because C also stores the ending character `'\0'`.

You can also write:

```c
char name[] = "Hello";
```

The compiler automatically calculates the required size.

---

### 4. Accessing Individual Characters

Use the array index.

```c
#include <stdio.h>

int main()
{
    char name[] = "Hello";

    printf("%c\n", name[0]);
    printf("%c\n", name[1]);
    printf("%c\n", name[4]);

    return 0;
}
```

### Output

```text
H
e
o
```

Remember:

```text
name[0] → H
name[1] → e
name[2] → l
name[3] → l
name[4] → o
```

---

### 5. Printing the Complete String

Use `%s` with `printf()`.

```c
#include <stdio.h>

int main()
{
    char name[] = "Gajanand";

    printf("%s\n", name);

    return 0;
}
```

### Output

```text
Gajanand
```

### Difference Between `%c` and `%s`

| Format | Used for        | Example   |
| ------ | --------------- | --------- |
| `%c`   | One character   | `name[0]` |
| `%s`   | Complete string | `name`    |

Example:

```c
printf("%c\n", name[0]);  // One character
printf("%s\n", name);     // Complete string
```

---

### 6. Traversing a String

We can use a loop to access every character.

```c
#include <stdio.h>

int main()
{
    char name[] = "Hello";

    for(int i = 0; i < 5; i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}
```

### Output

```text
H
e
l
l
o
```

Another way is to use `strlen()`, but we will learn string functions later.

---

### 7. Character vs String

#### Character

A character uses **single quotes**:

```c
char grade = 'A';
```

#### String

A string uses **double quotes**:

```c
char name[] = "A";
```

| Character            | String                        |
| -------------------- | ----------------------------- |
| `'A'`                | `"A"`                         |
| Stores one character | Stores one or more characters |
| Uses `%c`            | Uses `%s`                     |
| Uses single quotes   | Uses double quotes            |

---

### 8. Updating a String Character

```c
#include <stdio.h>

int main()
{
    char name[] = "Hello";

    name[0] = 'Y';

    printf("%s\n", name);

    return 0;
}
```

### Output

```text
Yello
```

Only the character at index `0` was changed.

---

### 9. Important Rules

#### Rule 1: Use double quotes for strings

```c
char name[] = "Hello";
```

Correct.

```c
char name[] = 'Hello';
```

Incorrect.

#### Rule 2: Use `%s` to print a string

```c
printf("%s", name);
```

#### Rule 3: Index starts from zero

For:

```c
char name[] = "Hello";
```

Valid character indexes are:

```text
0, 1, 2, 3, 4
```

#### Rule 4: Do not access outside the array

```c
char name[5] = "Hello";
```

This is incorrect because `"Hello"` needs 6 spaces including `'\0'`.

Use:

```c
char name[6] = "Hello";
```

or:

```c
char name[] = "Hello";
```

---

## Practice Problems

Try solving these without code suggestions:

1. Declare a string containing your name and print it.
2. Print the first character of a string.
3. Print the last character of `"Programming"`.
4. Print every character of `"Hello"` using a loop.
5. Change the first character of `"World"` to `'M'`.
6. Count the characters manually using a loop.
7. Print a string in reverse order.
8. Store and print your college name.
9. Compare the output of `%c` and `%s`.
10. Declare a string with size 20 and initialize it with `"C Programming"`.

### Progress

```text
✓ Functions
✓ Parameters
✓ Return
✓ Scope
✓ 1D Arrays
✓ Array Operations
✓ Array Problems
✓ 2D Arrays
→ Strings
→ '\0'
→ String Input
→ String Functions
→ String Problems
```

Next topic: **`'\0'` — String Termination in C**.
