# 🔵 Day 2 → Topic 5: Arrays — 1D Arrays

Now we start **Arrays**. This is an important topic for DSA.

> **Array = a collection of multiple values of the same data type stored under one variable name.**

---

# 1. Why Do We Need Arrays?

Suppose you want to store 5 numbers.

Without an array:

```c
int n1 = 10;
int n2 = 20;
int n3 = 30;
int n4 = 40;
int n5 = 50;
```

This becomes difficult when you have 100 or 1000 values.

With an array:

```c
int numbers[5];
```

Now one array can store 5 integers.

```text
numbers
   │
   ├── 10
   ├── 20
   ├── 30
   ├── 40
   └── 50
```

---

# 2. Array Declaration

Syntax:

```c
data_type array_name[size];
```

Example:

```c
int numbers[5];
```

Meaning:

```text
int     → type of each element
numbers → array name
[5]     → can contain 5 elements
```

Other examples:

```c
float marks[5];

char letters[10];

double prices[20];
```

---

# 3. Array Index ⭐

This is extremely important.

C uses **zero-based indexing**.

For:

```c
int numbers[5];
```

The indexes are:

```text
Value:    10    20    30    40    50
          ↓     ↓     ↓     ↓     ↓
Index:    0     1     2     3     4
```

### Important

If size is `5`:

```text
First index → 0
Last index  → 4
```

Not 5.

---

# 4. Accessing an Element

Use:

```c
array_name[index]
```

Example:

```c
int numbers[5] = {10, 20, 30, 40, 50};

printf("%d", numbers[0]);
```

Output:

```text
10
```

Another:

```c
printf("%d", numbers[3]);
```

Output:

```text
40
```

---

# 5. Array Visualization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Think:

```text
          ARRAY
            │
    ┌───────┬───────┬───────┬───────┬───────┐
    │  10   │  20   │  30   │  40   │  50   │
    └───────┴───────┴───────┴───────┴───────┘
       0       1       2       3       4
      index   index   index   index   index
```

---

# 6. Array Initialization

You can initialize an array when declaring it.

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

You can also let the compiler determine the size:

```c
int numbers[] = {10, 20, 30, 40, 50};
```

The compiler determines that there are 5 elements.

---

# 7. Partial Initialization

You don't have to provide values for every element.

```c
int numbers[5] = {10, 20};
```

The remaining elements are initialized to zero.

Conceptually:

```text
Index:   0    1    2    3    4
Value:  10   20    0    0    0
```

---

# 8. Initialize Everything to Zero

A common technique:

```c
int numbers[5] = {0};
```

Result:

```text
0  0  0  0  0
```

---

# 9. Access All Elements

You could manually write:

```c
printf("%d\n", numbers[0]);
printf("%d\n", numbers[1]);
printf("%d\n", numbers[2]);
printf("%d\n", numbers[3]);
printf("%d\n", numbers[4]);
```

But that's inefficient.

We use a loop.

---

# 10. Array + `for` Loop ⭐

```c
#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
```

Output:

```text
10
20
30
40
50
```

Flow:

```text
i = 0 → numbers[0] → 10
i = 1 → numbers[1] → 20
i = 2 → numbers[2] → 30
i = 3 → numbers[3] → 40
i = 4 → numbers[4] → 50
i = 5 → stop
```

---

# 11. Why `i < 5`?

Because:

```text
Size = 5

Valid indexes:
0
1
2
3
4
```

So:

```c
i < 5
```

allows:

```text
0, 1, 2, 3, 4
```

But:

```c
i <= 5
```

would try to access:

```text
numbers[5]
```

which is **outside the valid index range**.

---

# 12. Array Size vs Last Index ⭐

Remember:

```text
Array size = 5
Last index = 4
```

General rule:

```text
Last valid index = size - 1
```

So:

```text
size = 10
last index = 9

size = 100
last index = 99
```

---

# 13. Updating an Array Element

You can change an element:

```c
int numbers[5] = {10, 20, 30, 40, 50};

numbers[2] = 100;
```

Now:

```text
Index:   0    1     2    3    4
Value:  10   20   100   40   50
```

Because:

```c
numbers[2] = 100;
```

changed the third element.

---

# 14. Taking Array Input

You can use `scanf()` with an array.

```c
#include <stdio.h>

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    return 0;
}
```

Suppose input is:

```text
10 20 30 40 50
```

The array becomes:

```text
numbers[0] = 10
numbers[1] = 20
numbers[2] = 30
numbers[3] = 40
numbers[4] = 50
```

Notice:

```c
&numbers[i]
```

We use `&` because `scanf()` needs the **address where it should store the input**.

---

# 15. Taking Input + Printing Array

```c
#include <stdio.h>

int main()
{
    int numbers[5];

    printf("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
```

---

# 16. Different Data Types

Arrays can contain different types, but **one array stores elements of one declared type**.

### Integer

```c
int numbers[5];
```

### Float

```c
float marks[5];
```

### Character

```c
char letters[5];
```

For now, remember:

> An array's elements have the same type.

---

# 17. Character Array

You can create:

```c
char letters[5] = {'A', 'B', 'C', 'D', 'E'};
```

Visualization:

```text
Index:    0    1    2    3    4
Value:   'A'  'B'  'C'  'D'  'E'
```

We'll study **strings** separately later.

---

# 18. Array Memory Concept

An array stores its elements **contiguously** in memory.

Conceptually:

```text
Memory
─────────────────────────────
│ 10 │ 20 │ 30 │ 40 │ 50 │
─────────────────────────────
  ↑    ↑    ↑    ↑    ↑
```

The elements are next to each other in memory.

This is one reason arrays are very important in C and DSA.

---

# 19. Array and Loop Relationship ⭐

You'll use this pattern constantly:

```c
for (int i = 0; i < size; i++)
{
    // use array[i]
}
```

For example:

```c
for (int i = 0; i < 5; i++)
{
    printf("%d ", numbers[i]);
}
```

Think:

```text
i
↓
0 → array[0]
1 → array[1]
2 → array[2]
3 → array[3]
4 → array[4]
```

---

# 20. Common Mistake ❌

Wrong:

```c
int numbers[5];

numbers[5] = 100;
```

Why wrong?

Valid indexes are:

```text
0  1  2  3  4
```

`numbers[5]` is outside the array.

Correct:

```c
numbers[4] = 100;
```

---

# 21. Another Common Mistake ❌

Don't confuse:

```text
Array size
```

with:

```text
Last index
```

For:

```c
int arr[10];
```

it's:

```text
Size       = 10
First index = 0
Last index  = 9
```

---

# 22. Array vs Normal Variable

Normal variable:

```c
int x = 10;
```

Stores one integer.

Array:

```c
int arr[5] = {10, 20, 30, 40, 50};
```

Stores five integers.

```text
x
↓
10


arr
↓
10  20  30  40  50
```

---

# 🧪 Practice — Do These Yourself

Don't copy the solution immediately. Try writing them from scratch.

### Beginner

1. Create an integer array of 5 elements and print all elements.
2. Create an array of 10 integers and print them using a loop.
3. Take 5 integers from the user and print them.
4. Print only the first element.
5. Print only the last element.
6. Update the third element.
7. Print the array in reverse order.
8. Find the sum of all elements.
9. Find the average of the elements.
10. Count how many elements are even.

### ⭐ Important DSA Practice

Try:

```text
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50
```

Then:

```text
Output:
50 40 30 20 10
```

---

# 🧠 Remember These 5 Things

```text
1. Array stores multiple values of the same type.

2. Index starts from 0.

3. Last index = size - 1.

4. array[index] accesses an element.

5. for loop is commonly used to traverse an array.
```

### Your mental model

```text
int arr[5] = {10, 20, 30, 40, 50};

              ARRAY
                │
        ┌───┬───┬───┬───┬───┐
        │10 │20 │30 │40 │50 │
        └───┴───┴───┴───┴───┘
          0   1   2   3   4
          ↑           ↑
        first        last
        index        index
```

---

