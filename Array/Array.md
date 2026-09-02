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

Yes — this is an important distinction. The reason is **how arrays work with `scanf()`**.

### 1. Normal variable → use `&`

Suppose:

```c
int age;
scanf("%d", &age);
```

Here `age` is a **single variable**.

Think:

```text
age
┌───────┐
│  25   │
└───────┘
   ↑
 address of age = &age
```

`scanf()` needs the **address where it should store the input**, so we give `&age`.

---

### 2. Character array → usually DON'T use `&`

```c
char name[10];
scanf("%s", name);
```

Here `name` is an **array**.

An array already represents the address of its **first element** in most expressions.

```text
name[0]   name[1]   name[2]   name[3]
┌───────┬───────┬───────┬───────┐
│   G   │   a   │   j   │   a   │ ...
└───────┴───────┴───────┴───────┘
    ↑
   name
   = address of name[0]
```

So:

```c
scanf("%s", name);
```

means roughly:

```text
name
 ↓
address of name[0]
 ↓
scanf stores characters starting here
```

That's why we don't need `&`.

---

### 3. But why do we use `&Array[i]`?

This is the part that causes confusion.

Suppose:

```c
int Array[10];
```

If you want to input one element:

```c
scanf("%d", &Array[i]);
```

Why `&`?

Because `Array[i]` is a **single integer variable**.

For example:

```text
Array[0]    Array[1]    Array[2]
┌─────────┬─────────┬─────────┐
│   10    │   20    │   30    │
└─────────┴─────────┴─────────┘
     ↑
   Array[0]
```

`Array[0]` behaves like a normal `int` variable.

Therefore:

```c
scanf("%d", &Array[0]);
```

Just like:

```c
int age;
scanf("%d", &age);
```

---

### The rule to remember 🧠

| What you're passing     | `scanf()`   |
| ----------------------- | ----------- |
| Normal `int` variable   | `&age`      |
| Normal `float` variable | `&salary`   |
| Normal `char` variable  | `&grade`    |
| `int` array element     | `&Array[i]` |
| `char` array/string     | `name`      |

So the key difference is:

```text
name
 ↓
already gives address of first character

Array[i]
 ↓
is one actual int value
 ↓
need & to get its address
```

### Very important

Don't think:

> "Arrays never use `&`."

Instead think:

> **The array name itself usually gives the address of its first element, but an individual array element is a normal variable, so we use `&` for it.**

For example:

```c
char name[10];

scanf("%s", name);       // ✅
scanf("%s", &name);      // ❌ not the correct type for %s
```

but:

```c
int numbers[10];

scanf("%d", &numbers[0]); // ✅
scanf("%d", numbers);     // also works for the first element, but less clear
```

For learning, remember **`&Array[i]`** for integer array input.



Absolutely. Since you are currently learning **arrays + loops + functions**, let's keep the problems strictly within those topics.

### 🟢 Level 1 — Basic Array Practice

1. **Input and Display**

   * Take `N` elements from the user.
   * Store them in an array.
   * Print all elements.

2. **Print Array in Reverse**

   * Input `N` elements.
   * Print them from last element to first.

3. **Find Sum of Array**

   * Input `N` elements.
   * Find and print the sum.

4. **Find Average**

   * Input `N` elements.
   * Calculate and print the average.

5. **Count Even Numbers**

   * Input an array.
   * Count how many elements are even.

6. **Count Odd Numbers**

   * Input an array.
   * Count how many elements are odd.

7. **Print Even Elements**

   * Input an array.
   * Print only the even numbers.

8. **Print Odd Elements**

   * Input an array.
   * Print only the odd numbers.

---

### 🟡 Level 2 — Functions + Arrays

For these, **use a separate function** for the operation.

9. **Find Maximum**

   ```text
   Input: 10 25 7 40 15
   Output: Maximum = 40
   ```

10. **Find Minimum**

```text
Input: 10 25 7 40 15
Output: Minimum = 7
```

11. **Calculate Sum Using Function**

* Pass the array and size to a function.
* Function returns the sum.

12. **Count Even Numbers Using Function**

* Function receives the array and size.
* Function returns the count.

13. **Count Odd Numbers Using Function**

* Function receives the array and size.
* Function returns the count.

14. **Search an Element**

```text
Array: 10 20 30 40 50
Search: 30

Output: Element Found
```

15. **Find Number of Occurrences**

```text
Array: 10 20 10 30 10 40
Search: 10

Output: 10 occurs 3 times
```

---

### 🟠 Level 3 — Good Beginner DSA Practice

16. **Find Second Largest Element**

17. **Find Second Smallest Element**

18. **Copy One Array into Another**

```text
Array1 → 10 20 30 40
Array2 → 10 20 30 40
```

19. **Compare Two Arrays**

* Check whether two arrays contain the same elements in the same order.

20. **Reverse an Array**

* Actually modify the array.
* Then print the reversed array.

21. **Replace All Negative Numbers with 0**

```text
Input: 10 -5 20 -3 7
Output: 10 0 20 0 7
```

22. **Find Positive, Negative and Zero Count**

```text
Input: 10 -5 0 20 -3 0

Positive = 2
Negative = 2
Zero = 2
```

23. **Find Largest and Smallest Together**

* Find both using a single loop.

24. **Check Whether Array is Sorted**

```text
10 20 30 40 50 → Sorted
10 30 20 40 50 → Not Sorted
```

### 🎯 Recommended order for you

Don't jump directly to difficult ones. Practice in this order:

```text
1  → Input & Display
2  → Reverse
3  → Sum
4  → Average
5  → Count Even
6  → Count Odd
7  → Print Even
8  → Print Odd
        ↓
9  → Maximum
10 → Minimum
11 → Sum using Function
12 → Count Even using Function
13 → Count Odd using Function
14 → Search
15 → Occurrences
        ↓
16 → Second Largest
17 → Second Smallest
18 → Copy
19 → Compare
20 → Reverse/Modify
21 → Replace Negative
22 → Positive/Negative/Zero Count
23 → Max + Min
24 → Sorted Check
```

**For now, start with #1.** Try writing it yourself without autocomplete. If you get an error, paste your code and I'll explain **exactly where your logic went wrong** rather than giving you the answer immediately.
