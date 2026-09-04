Great 👍 Let’s **start the last part of Strings**.

# 🔤 Strings — Topic 1: `strlen()`

You already understand:

```c
char Name[] = "Gajanand";
```

Memory:

```text
Index:   0 1 2 3 4 5 6 7 8
         G a j a n a n d \0
```

The `'\0'` marks the **end of the string**.

## What is `strlen()`?

`strlen()` means:

> **String Length**

It tells us how many **characters are in the string**, **excluding `'\0'`**.

You get it from:

```c
#include <string.h>
```

### Example

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char Name[] = "Gajanand";

    int Length = strlen(Name);

    printf("Length: %d", Length);

    return 0;
}
```

Output:

```text
Length: 8
```

Why `8`?

```text
G a j a n a n d \0
|_______________|
     8 chars
```

`'\0'` is present in memory, but **`strlen()` does not count it**.

---

### 🔥 Important concept

You might wonder:

> "How does `strlen()` know where the string ends?"

Conceptually, it does something similar to:

```c
int count = 0;

while(Name[count] != '\0')
{
    count++;
}
```

For `"Gajanand"`:

```text
count = 0 → G ≠ '\0' → count++
count = 1 → a ≠ '\0' → count++
count = 2 → j ≠ '\0' → count++
...
count = 7 → d ≠ '\0' → count++
count = 8 → '\0' → STOP
```

Therefore:

```text
strlen("Gajanand") = 8
```

### Remember

```text
strlen() → counts characters
'\0'     → tells where the string ends
'\0'     → NOT included in length
```

## 🧠 Your turn

Without running the program, tell me:

```c
char Name[] = "Hello";
printf("%d", strlen(Name));
```

**What will be the output, and why?**
