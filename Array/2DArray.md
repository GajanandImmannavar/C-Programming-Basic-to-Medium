# 📌 2D Arrays in C

Now we move to **Day 2 → Topic 8: 2D Arrays**.

A **2D array** is like a table containing rows and columns.

## 1. What is a 2D Array?

A normal array stores values in one line:

```text
10 20 30 40
```

A 2D array stores values in rows and columns:

```text
        Column
          0   1   2
       -------------
Row 0 |  10  20  30
Row 1 |  40  50  60
```

Declaration:

```c
int matrix[2][3];
```

Meaning:

```text
2 rows
3 columns
```

Total elements:

```text
2 × 3 = 6
```

---

# 2. Declaration and Initialization

```c
#include <stdio.h>

int main()
{
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    return 0;
}
```

The array looks like this:

```text
matrix[0][0] = 10
matrix[0][1] = 20
matrix[0][2] = 30

matrix[1][0] = 40
matrix[1][1] = 50
matrix[1][2] = 60
```

### Syntax

```c
data_type array_name[rows][columns];
```

Example:

```c
int numbers[3][4];
```

This contains:

```text
3 rows × 4 columns = 12 elements
```

---

# 3. Accessing Elements

To access a 2D array, use:

```c
matrix[row][column]
```

Example:

```c
printf("%d", matrix[1][2]);
```

Output:

```text
60
```

Because:

```text
matrix[1][2]
       ↑  ↑
      row column
```

---

# 4. Traversing a 2D Array

For a 1D array, we use one loop.

For a 2D array, we use **nested loops**:

```text
Outer loop → rows
Inner loop → columns
```

### Code

```c
#include <stdio.h>

int main()
{
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
10 20 30
40 50 60
```

---

# 5. How Nested Loops Work

```c
for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", matrix[i][j]);
    }
}
```

Dry run:

```text
i = 0
    j = 0 → 10
    j = 1 → 20
    j = 2 → 30

i = 1
    j = 0 → 40
    j = 1 → 50
    j = 2 → 60
```

The inner loop completes fully for every row.

---

# 6. Taking Input in a 2D Array

```c
#include <stdio.h>

int main()
{
    int matrix[2][3];

    printf("Enter 6 numbers:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Example Input

```text
1 2 3
4 5 6
```

### Output

```text
Matrix:
1 2 3
4 5 6
```

---

# 7. Sum of All 2D Array Elements

```c
#include <stdio.h>

int main()
{
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int sum = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
```

### Output

```text
Sum = 210
```

---

# 8. Row and Column Meaning

For:

```c
int matrix[2][3];
```

* `i` represents the row
* `j` represents the column

```c
matrix[i][j]
```

Example:

```text
matrix[0][1]
```

means:

```text
Row 0, Column 1
```

---

# ⭐ Important Rules

### Rule 1: Index starts from zero

For:

```c
int matrix[2][3];
```

Valid indexes are:

```text
Rows:    0, 1
Columns: 0, 1, 2
```

### Rule 2: Use two loops

```c
for(int i = 0; i < rows; i++)
{
    for(int j = 0; j < columns; j++)
    {
        // Work with matrix[i][j]
    }
}
```

### Rule 3: Do not use invalid indexes

This is invalid:

```c
matrix[2][3]
```

Because the last valid element is:

```c
matrix[1][2]
```

---

# ⏱️ Time Complexity

If a matrix contains `rows × columns` elements:

```text
Time Complexity = O(rows × columns)
```

For a `3 × 4` matrix:

```text
3 × 4 = 12 operations
```

---

# 📝 Practice Problems

1. Create and print a `2 × 2` matrix.
2. Take input for a `3 × 3` matrix.
3. Print the sum of all elements.
4. Find the largest element in a 2D array.
5. Find the smallest element in a 2D array.
6. Count even and odd elements.
7. Print each row on a separate line.
8. Print each column on a separate line.
9. Update one element using its row and column.
10. Search for a target value in a matrix.

### Example update

```c
matrix[1][2] = 100;
```

This changes the element at:

```text
Row 1, Column 2
```

---

