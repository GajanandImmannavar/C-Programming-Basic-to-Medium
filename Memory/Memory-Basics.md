# 🚀 Day 3 — Pointers + Recursion + Medium-Level C

### Day 3 Roadmap

| #  | Topic                 | What you'll learn                        |
| -- | --------------------- | ---------------------------------------- |
| 1  | 🧠 Memory Basics      | Address and memory concept               |
| 2  | 👉 Pointers           | `*` and `&`                              |
| 3  | 🔓 Dereferencing      | Access value through pointer             |
| 4  | 🔄 Pointer + Function | Modify values using pointers             |
| 5  | 📦 Pointer + Array    | Relationship between arrays and pointers |
| 6  | ➕ Pointer Arithmetic  | `++`, `--`, `+`, `-`                     |
| 7  | 🔁 Recursion          | Base case + recursive case               |
| 8  | 🏗️ Structures        | Basic `struct`                           |
| 9  | 💾 Dynamic Memory     | `malloc`, `calloc`, `free`               |
| 10 | 🧩 Mixed Problems     | Combine concepts                         |

---

# 1️⃣ Memory Basics

Before learning pointers, you **must understand memory**.

Don't worry — we don't need advanced computer architecture here.

## What is memory?

When your C program runs, variables need a place to store their values.

For example:

```c
int age = 22;
```

The value `22` has to be stored somewhere in your computer's memory.

Think of memory like a huge collection of boxes:

```text
Memory

┌──────────────┐
│ Address      │
├──────────────┤
│ 1000         │ → some data
│ 1004         │ → some data
│ 1008         │ → some data
│ 1012         │ → some data
│ 1016         │ → some data
└──────────────┘
```

Each memory location has an **address**.

---

# 2️⃣ Variable + Memory

Suppose:

```c
int age = 22;
```

Conceptually:

```text
Variable
   ↓
┌───────────┐
│    22     │
└───────────┘
     ↑
   value

Memory Address
     ↓
   1000
```

So we can think:

```text
age
 │
 ├── Value   → 22
 │
 └── Address → some memory address
```

The actual address is determined by the operating system/compiler/runtime, so **don't expect it to literally be 1000**.

---

# 3️⃣ How to see the address?

C provides the **address-of operator**:

```c
&
```

Example:

```c
#include <stdio.h>

int main()
{
    int age = 22;

    printf("Value = %d\n", age);
    printf("Address = %p\n", &age);

    return 0;
}
```

Possible output:

```text
Value = 22
Address = 0x7ffd1234abcd
```

Your address will be different.

---

# ⭐ Important

### `age`

means:

> Give me the **value stored in `age`**.

```c
printf("%d", age);
```

Output:

```text
22
```

### `&age`

means:

> Give me the **memory address of `age`**.

```c
printf("%p", (void *)&age);
```

Output could be:

```text
0x7ffd1234abcd
```

So:

```text
age
 ↓
22

&age
 ↓
Memory address
```

---

# 4️⃣ Why do we need addresses?

This is the reason **pointers exist**.

Suppose:

```c
int age = 22;
```

We know:

```text
age → 22
```

But sometimes we want another variable to **store the address of `age`**.

That's where a pointer comes in.

Eventually we'll have:

```text
age
 │
 │ value
 ↓
┌───────┐
│  22   │
└───────┘
   ↑
   │
   │ address
   │
┌───────┐
│   p   │
└───────┘
```

`p` will be a **pointer**.

---

# 5️⃣ Important terms

| Term     | Meaning                         |
| -------- | ------------------------------- |
| Variable | Named storage location          |
| Value    | Data stored in variable         |
| Address  | Location of variable in memory  |
| `&`      | Gets address                    |
| Pointer  | Variable that stores an address |

---

# 6️⃣ Simple example

```c
#include <stdio.h>

int main()
{
    int number = 50;

    printf("Value = %d\n", number);
    printf("Address = %p\n", (void *)&number);

    return 0;
}
```

Think:

```text
number
   │
   ├──────── Value → 50
   │
   └──────── Address → 0x7ffd...
```

---

# ⚠️ One important rule

When printing an address with `printf`, use:

```c
%p
```

Example:

```c
printf("%p\n", (void *)&number);
```

Don't use:

```c
%d
```

for addresses.

---

# 🧠 Remember this

The most important concept for today's first topic:

```text
VARIABLE
   │
   ├── VALUE
   │
   └── ADDRESS
```

For example:

```c
int x = 10;
```

```text
x       → value = 10

&x      → address of x
```

And later:

```text
pointer → stores &x
```

That's the foundation of pointers.

### Quick check before moving to Topic 2

If:

```c
int x = 100;
```

What do these mean?

```c
x
&x
```

**Answer:**

```text
x  → value stored in x → 100

&x → address of x
```

Next topic is **2️⃣ Pointers — understanding `*` and `&` properly**, where we'll create our first pointer and trace exactly what happens in memory.
