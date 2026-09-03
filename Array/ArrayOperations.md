# 📌 Array Operations in C

Now we move to **Day 2 → Topic 6: Array Operations**.

For beginner-to-medium DSA, focus on these **3 operations**:

1. **Traversal** → visit every element
2. **Update** → change an element
3. **Search** → find an element

---

# 1. Traversal

### What does traversal mean?

**Traversal = visiting each element of an array one by one.**

Example:

```text
Array:
Index:   0   1   2   3   4
        ---------------------
Value:  10  20  30  40  50
```

Traversal means:

```text
10 → 20 → 30 → 40 → 50
```

### C Example

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### Output

```text
10 20 30 40 50
```

### How does the loop work?

```text
i = 0 → arr[0] → 10
i = 1 → arr[1] → 20
i = 2 → arr[2] → 30
i = 3 → arr[3] → 40
i = 4 → arr[4] → 50
i = 5 → stop
```

⭐ **Important:**

```c
i < 5
```

not:

```c
i <= 5
```

Because valid indexes are:

```text
0 1 2 3 4
```

---

# 2. Update an Array Element

### What does update mean?

**Update = change the value stored at a particular index.**

Suppose:

```text
Index:   0   1   2   3   4
         ---------------------
Array:  10  20  30  40  50
```

We want to change `30` to `100`.

`30` is at index `2`.

So:

```c
arr[2] = 100;
```

Now:

```text
Index:   0    1    2    3   4
         ----------------------
Array:  10   20  100   40  50
```

### Complete example

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    arr[2] = 100;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### Output

```text
10 20 100 40 50
```

---

## Updating using user input

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    int value;

    printf("Enter index: ");
    scanf("%d", &index);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[index] = value;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

If input is:

```text
Enter index: 2
Enter new value: 500
```

Output:

```text
10 20 500 40 50
```

---

# 3. Search

### What does search mean?

**Search = find whether a particular value exists in the array.**

Example:

```text
Array:

Index:   0   1   2   3   4
         ---------------------
Value:  10  20  30  40  50
```

Search for:

```text
30
```

We check:

```text
10 ❌
20 ❌
30 ✅
```

This basic method is called **Linear Search**.

---

# Linear Search

The logic is:

```text
Start from index 0
       ↓
Compare element with target
       ↓
If equal → found
       ↓
Otherwise move to next element
       ↓
Continue until array ends
```

### C Example

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int found = 0;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
```

### Output

```text
Element found
```

---

# 🔍 How `found` works

Initially:

```c
int found = 0;
```

Means:

```text
0 → Not found
```

When we find the element:

```c
found = 1;
```

Means:

```text
1 → Found
```

Then:

```c
break;
```

stops the loop because we already found what we wanted.

---

# Search and Find Index

Usually in DSA, we also want to know **where** the element was found.

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 40;
    int index = -1;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        printf("Element found at index %d\n", index);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
```

### Output

```text
Element found at index 3
```

### Why `-1`?

Array indexes normally start from:

```text
0, 1, 2, 3, ...
```

So `-1` can represent:

```text
Not found
```

This is a **very common DSA pattern**.

---

# ⭐ The 3 Array Operations

| Operation | Meaning        | Example                |
| --------- | -------------- | ---------------------- |
| Traversal | Visit elements | `printf("%d", arr[i])` |
| Update    | Change element | `arr[2] = 100`         |
| Search    | Find element   | `if(arr[i] == target)` |

---

# 🧠 One Example Combining All 3

```c
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // Update
    arr[2] = 100;

    // Traversal
    printf("Array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Search
    int target = 40;
    int index = -1;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        printf("\n%d found at index %d\n", target, index);
    }
    else
    {
        printf("\n%d not found\n", target);
    }

    return 0;
}
```

Output:

```text
Array: 10 20 100 40 50
40 found at index 3
```

---

# ⏱️ Time Complexity

For an array of `n` elements:

### Traversal

```text
Visit all n elements
```

**Time: O(n)**

### Update

If you already know the index:

```c
arr[index] = value;
```

**Time: O(1)**

### Linear Search

Worst case, you check every element.

**Time: O(n)**

| Operation       | Time |
| --------------- | ---: |
| Traversal       | O(n) |
| Update by index | O(1) |
| Linear Search   | O(n) |

⭐ Remember this. These are important for DSA.

---

# 📝 Practice

Try these **without looking at the solution**:

### Easy

1. Create an array of 5 integers and print every element.
2. Update the first element.
3. Update the last element.
4. Search for a number and print `Found` / `Not Found`.
5. Search for a number and print its index.

### Medium

6. Take 5 numbers from the user and search for a target.
7. Count how many times a target occurs.
8. Find the first occurrence of a number.
9. Update an element based on an index entered by the user.
10. Search an array and print all indexes where the target occurs.

### ⭐ DSA thinking

For every array problem, start asking:

```text
What is the array size?
        ↓
Where should my loop start?
        ↓
Where should my loop stop?
        ↓
What should I do with arr[i]?
```

That thinking will become extremely useful when you start DSA.

---

## ✅ Day 2 Progress

```text
✓ Functions
✓ Parameters
✓ Return
✓ Scope
✓ 1D Arrays
✓ Array Operations
→ Array Problems
→ 2D Arrays
→ Strings
→ '\0'
→ String Input
→ String Functions
→ String Problems
```

**Next topic: Array Problems** — max, min, sum, reverse, duplicates, counting, etc.
