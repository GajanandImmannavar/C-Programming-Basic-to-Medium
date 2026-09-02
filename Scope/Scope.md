# 🔵 Day 2 — Topic 4: Scope in C

**Scope** means:

> The region of the program where a variable can be accessed by its name.

The main beginner-level scopes to understand are:

```text
Local scope
Global scope
```

---

# 1. Local Variable

A variable declared inside a function or block is local to that scope.

```c
#include <stdio.h>

void test()
{
    int number = 10;

    printf("%d", number);
}

int main()
{
    test();

    return 0;
}
```

`number` belongs to `test()`.

```text
test()
 └── number
```

You cannot directly use it in `main()`:

```c
int main()
{
    printf("%d", number);   // ❌
}
```

---

# 2. Local Variable Inside `main()`

```c
int main()
{
    int number = 10;

    printf("%d", number);

    return 0;
}
```

`number` is accessible within its enclosing block.

---

# 3. Global Variable

A variable declared outside all functions is a global variable.

```c
#include <stdio.h>

int number = 10;

void display()
{
    printf("%d\n", number);
}

int main()
{
    printf("%d\n", number);

    display();

    return 0;
}
```

Both functions can access `number` by name.

```text
Global
  ↓
number
 ├── main()
 └── display()
```

---

# 4. Local vs Global

| Local                                     | Global                                                      |
| ----------------------------------------- | ----------------------------------------------------------- |
| Declared inside a function/block          | Declared outside functions                                  |
| Limited scope                             | Can be accessible throughout the file after its declaration |
| Good for temporary/function-specific data | Useful for shared program state, but use carefully          |

---

# 5. Same Variable Name

You can have a local variable with the same name as a global variable.

```c
#include <stdio.h>

int number = 100;

int main()
{
    int number = 20;

    printf("%d", number);

    return 0;
}
```

Output:

```text
20
```

The local variable **shadows** the global variable within that scope.

---

# 6. Scope Inside `if`

Scope also applies to blocks.

```c
#include <stdio.h>

int main()
{
    int x = 10;

    if (x > 5)
    {
        int y = 20;

        printf("%d\n", y);
    }

    return 0;
}
```

`y` exists within the `if` block.

This won't work:

```c
printf("%d", y);   // ❌
```

because `y` is outside its scope.

---

# 7. Outer Variable Accessible Inside Inner Block

```c
int main()
{
    int x = 10;

    if (x > 5)
    {
        printf("%d", x);
    }

    return 0;
}
```

This works because the inner block can access variables declared in an enclosing scope.

```text
main block
 │
 ├── x
 │
 └── if block
       │
       └── can access x
```

---

# 8. Function Scope Example

```c
#include <stdio.h>

void function1()
{
    int x = 10;
}

void function2()
{
    printf("%d", x);   // ❌
}
```

`x` belongs to `function1()`.

It doesn't automatically exist in `function2()`.

---

# 9. Global + Local Example

```c
#include <stdio.h>

int x = 100;

void function1()
{
    int x = 10;

    printf("Function 1: %d\n", x);
}

void function2()
{
    printf("Function 2: %d\n", x);
}

int main()
{
    function1();
    function2();

    return 0;
}
```

Output:

```text
Function 1: 10
Function 2: 100
```

Why?

```text
Global x = 100
     │
     ├── function2 → 100
     │
function1 has local x = 10
     │
     └── function1 → 10
```

---

# 10. Scope + `return`

These concepts work together.

```c
int add(int a, int b)
{
    int result = a + b;

    return result;
}
```

Here:

```text
a
b
result
```

are local to `add()`.

The value of `result` is returned:

```text
add()
 │
 ├── a
 ├── b
 └── result
       ↓
    return result
       ↓
     main()
```

The **value** is returned, not the local variable itself.

---

# 🧠 Most Important Difference

Don't confuse these:

```text
return
  ↓
Sends a value back from a function

scope
  ↓
Determines where a variable can be accessed
```

---

# 🧪 Practice

### `return`

1. Function returning a number.
2. Function returning the sum of two numbers.
3. Function returning the largest of two numbers.
4. Function returning whether a number is even.
5. Function returning the square of a number.

### `scope`

6. Create a local variable inside `main()`.
7. Create a local variable inside another function.
8. Create a global variable and access it from two functions.
9. Create the same variable name globally and locally and observe the output.
10. Create a variable inside an `if` block and try accessing it outside.

---

## ✅ Today's Topics

```text
Day 2

✓ Functions
✓ Declaration / Definition / Call
✓ Parameters / Arguments
✓ return
✓ Scope
```


# 🧠 The Main Rule of Scope

> **A variable can normally be accessed only inside the block/function where it is declared and inside blocks nested within that scope.**

Think of `{ }` as **rooms**.

```text
Outer Room
{
    int a;

    Inner Room
    {
        // can access a
    }
}

// cannot access a here
```

---

# 1. Variable Declared in `main()`

```c
int main()
{
    int x = 10;

    printf("%d", x);
}
```

✅ Can access `x` here because `x` is declared inside the `main` block.

```text
main()
{
    int x = 10;     ← x belongs to this block

    printf("%d", x);  ← ✅
}
```

---

# 2. After the Block Ends ❌

```c
int main()
{
    int x = 10;
}

printf("%d", x);    // ❌
```

Why?

```text
{
    int x = 10;
}                   ← x's scope ends here

printf("%d", x);    ← ❌
```

The variable is not accessible outside its block.

---

# 3. Inner Block Can Access Outer Variable ✅

This is very important.

```c
int main()
{
    int x = 10;

    if (x > 5)
    {
        printf("%d", x);
    }
}
```

✅ This works.

Why?

```text
main block
{
    int x = 10;

    if block
    {
        access x ✅
    }
}
```

The `if` block is **inside** the `main` block.

---

# 4. Inner Block Creates Its Own Variable

```c
int main()
{
    int x = 10;

    if (x > 5)
    {
        int y = 20;

        printf("%d", x);  // ✅
        printf("%d", y);  // ✅
    }

    printf("%d", x);      // ✅
    printf("%d", y);      // ❌
}
```

Why?

```text
main
{
    x
    │
    └── if
        {
            y
        }
}
```

`x` belongs to the outer block.

`y` belongs to the inner block.

Therefore:

```text
Inside if:
x → ✅
y → ✅

Outside if:
x → ✅
y → ❌
```

---

# 5. Inner Block → Outer Variable ✅

```c
int main()
{
    int x = 10;

    {
        printf("%d", x);
    }
}
```

✅ Works.

The inner block can access variables from its surrounding scope.

Think:

```text
OUTER
│
│ x = 10
│
└── INNER
     │
     └── can see x ✅
```

---

# 6. Outer Block → Inner Variable ❌

Reverse the situation:

```c
int main()
{
    {
        int y = 20;
    }

    printf("%d", y);  // ❌
}
```

Why?

`y` belongs to the inner block.

```text
OUTER
│
└── INNER
     │
     └── y
```

The outer block cannot access something declared only inside the inner block.

### Remember:

```text
Outer → Inner variable ❌

Inner → Outer variable ✅
```

---

# 7. Function Variables

This is where beginners commonly get confused.

```c
void function1()
{
    int x = 10;
}

void function2()
{
    printf("%d", x);  // ❌
}
```

`x` belongs to `function1()`.

```text
function1()
{
    x
}

function2()
{
    cannot access x ❌
}
```

Even though both functions are in the same program, their local variables are separate.

---

# 8. `main()` Cannot Access Another Function's Local Variable

```c
void test()
{
    int number = 50;
}

int main()
{
    printf("%d", number);  // ❌
}
```

`number` is local to `test()`.

```text
test()
{
    number
}

main()
{
    ❌ number is not in this scope
}
```

---

# 9. Function Cannot Access Another Function's Local Variable

```c
void first()
{
    int a = 10;
}

void second()
{
    printf("%d", a);  // ❌
}
```

`a` is only available in `first()`'s scope.

---

# 10. Global Variable ⭐

Now we have a special case.

A variable declared **outside all functions** is a global variable.

```c
#include <stdio.h>

int x = 100;

void first()
{
    printf("%d\n", x);
}

void second()
{
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);

    first();
    second();

    return 0;
}
```

Output:

```text
100
100
100
```

Because `x` is global.

Think:

```text
GLOBAL
  │
  └── x = 100
       │
       ├── first()  ✅
       ├── second() ✅
       └── main()   ✅
```

---

# 11. Global Variable + Local Variable Same Name

This is very important.

```c
#include <stdio.h>

int x = 100;

int main()
{
    int x = 20;

    printf("%d", x);

    return 0;
}
```

Output:

```text
20
```

Why?

The local `x` **shadows** the global `x`.

```text
Global:
x = 100

main:
x = 20  ← this one is closer

printf(x)
    ↓
20
```

---

# 12. Inner Block Can Also Shadow

You can have:

```c
int main()
{
    int x = 10;

    {
        int x = 20;

        printf("%d", x);
    }

    printf("%d", x);
}
```

Output:

```text
20
10
```

Why?

```text
Outer block:
x = 10

    Inner block:
    x = 20
    ↓
    printf → 20

Outer block:
x = 10
↓
printf → 10
```

The inner `x` temporarily hides the outer `x`.

---

# 13. Three Levels of Scope

You can even have:

```c
int x = 100;

int main()
{
    int x = 20;

    {
        int x = 10;

        printf("%d", x);
    }
}
```

Output:

```text
10
```

Because C looks for the variable starting from the **nearest enclosing scope**.

```text
Global x = 100
       ↑
main x = 20
       ↑
inner x = 10  ← nearest
```

So:

```text
inner x → 10
```

---

# 14. What If Inner Scope Doesn't Have `x`?

```c
int x = 100;

int main()
{
    int y = 20;

    {
        printf("%d", x);
        printf("%d", y);
    }
}
```

Both work.

The inner block looks outward:

```text
Inner block
     ↓
Does it have x? No
     ↓
Outer block? No
     ↓
Global? Yes
     ↓
x = 100
```

For `y`:

```text
Inner block
     ↓
Does it have y? No
     ↓
Outer block? Yes
     ↓
y = 20
```

---

# 15. Very Important: Scope Search Direction

When you write:

```c
printf("%d", x);
```

C essentially looks for `x` starting from the current scope and moving outward through enclosing scopes.

```text
Current block
     ↓
Outer block
     ↓
More outer block
     ↓
File/global scope
```

It **does not search inside sibling or unrelated blocks/functions**.

---

# 16. Sibling Blocks ❌

Look at this:

```c
int main()
{
    if (1)
    {
        int x = 10;
    }

    if (1)
    {
        printf("%d", x);  // ❌
    }
}
```

Why?

The second `if` is not inside the first `if`.

They are **siblings**.

```text
main
│
├── if 1
│    └── x
│
└── if 2
     └── cannot access x ❌
```

---

# 17. Nested Blocks ✅

But this works:

```c
int main()
{
    int x = 10;

    if (1)
    {
        if (1)
        {
            printf("%d", x);
        }
    }
}
```

Because:

```text
main
│
└── if 1
     │
     └── if 2
          │
          └── x ✅
```

---

# 18. `for` Loop Scope

Variables declared in a `for` loop can have limited scope.

```c
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
    }

    printf("%d", i);  // ❌
}
```

`i` is declared in the `for` statement and is available within the loop's scope.

```text
for
{
    i → ✅
}

i → ❌
```

---

# 19. `while` Loop

If you declare the variable before the loop:

```c
int main()
{
    int i = 0;

    while (i < 5)
    {
        printf("%d", i);
        i++;
    }

    printf("%d", i);  // ✅
}
```

Why?

`i` belongs to the outer `main` block, not the `while` body.

```text
main
│
├── i
│
└── while
     └── can access i
```

---

# 20. Variable Declared Inside `while`

```c
int main()
{
    while (1)
    {
        int x = 10;

        printf("%d", x);
    }

    printf("%d", x);  // ❌
}
```

`x` belongs to the body of the `while` statement.

---

# 21. Function Parameter Scope

Parameters are also local to the function.

```c
void add(int a, int b)
{
    printf("%d", a + b);
}
```

Here:

```text
a → available inside add()
b → available inside add()
```

But:

```c
int main()
{
    printf("%d", a);  // ❌
}
```

because `a` belongs to `add()`.

---

# 22. Parameter + Local Variable

```c
void add(int a, int b)
{
    int result = a + b;

    printf("%d", result);
}
```

Inside `add()`:

```text
a       → ✅
b       → ✅
result  → ✅
```

Outside `add()`:

```text
a       → ❌
b       → ❌
result  → ❌
```

All three are local to that function.

---

# 23. Function Parameter vs Global

```c
int x = 100;

void test(int x)
{
    printf("%d", x);
}
```

Call:

```c
test(50);
```

Output:

```text
50
```

The parameter `x` shadows the global `x`.

```text
Global x = 100

test(x)
   ↓
parameter x = 50
   ↓
50
```

---

# 24. One Big Example ⭐

Study this carefully:

```c
#include <stdio.h>

int a = 100;

void test(int b)
{
    int c = 30;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    {
        int d = 40;

        printf("%d\n", a);  // ✅
        printf("%d\n", b);  // ✅
        printf("%d\n", c);  // ✅
        printf("%d\n", d);  // ✅
    }

    printf("%d\n", d);      // ❌
}

int main()
{
    int e = 50;

    printf("%d\n", a);      // ✅
    printf("%d\n", e);      // ✅

    printf("%d\n", b);      // ❌
    printf("%d\n", c);      // ❌
}
```

Think of it as:

```text
GLOBAL
│
└── a = 100
     │
     ├───────────────┐
     ↓               ↓
 test()             main()
 │                    │
 b                    e
 c
 │
 └── inner block
      │
      └── d
```

### Inside `test()`:

```text
a → ✅ Global
b → ✅ Parameter
c → ✅ Local
d → ❌ Outside inner block
```

### Inside inner block:

```text
a → ✅
b → ✅
c → ✅
d → ✅
```

### Inside `main()`:

```text
a → ✅ Global
e → ✅ Local
b → ❌ test parameter
c → ❌ test local
d → ❌ inner-block local
```

---

# 🧠 The Golden Rule

Whenever you see a variable, ask:

### Question 1

**Where was it declared?**

```text
Global?
Function?
Block?
Loop?
```

### Question 2

**Where am I trying to use it?**

```text
Same scope?
Inside nested scope?
Outside scope?
Different function?
Sibling block?
```

Then apply:

```text
Same scope              → ✅

Inside nested scope    → ✅

Outer scope accessing
inner variable          → ❌

Different function     → ❌
(unless global/etc.)

Sibling block          → ❌

Global variable        → ✅
(subject to declaration/linkage rules)

Nearest variable with
same name               → used/shadows outer one
```

---

# 🎯 One Diagram to Memorize

```text
GLOBAL SCOPE
│
│   int A = 100;
│
├───────────────┐
│               │
FUNCTION 1      FUNCTION 2
│               │
│ x             │ y
│               │
└── INNER BLOCK │
    │           │
    │ z         │
    │           │
    └───────────┘
```

Inside **Inner Block**:

```text
A → ✅
x → ✅
z → ✅
y → ❌
```

Inside **Function 1**:

```text
A → ✅
x → ✅
z → ❌
y → ❌
```

Inside **Function 2**:

```text
A → ✅
y → ✅
x → ❌
z → ❌
```

---

## ⭐ Most Important Mental Model

Think of scopes as **nested boxes**:

```text
┌──────────────────────── GLOBAL ────────────────────────┐
│                                                        │
│  A                                                      │
│                                                        │
│   ┌──────────────── FUNCTION ─────────────────────┐    │
│   │                                               │    │
│   │  B                                            │    │
│   │                                               │    │
│   │    ┌──────────── INNER BLOCK ────────────┐    │    │
│   │    │                                     │    │    │
│   │    │  C                                  │    │    │
│   │    │                                     │    │    │
│   │    └─────────────────────────────────────┘    │    │
│   │                                               │    │
│   └───────────────────────────────────────────────┘    │
│                                                        │
└────────────────────────────────────────────────────────┘
```

Inside the inner block, you can see:

```text
A ✅
B ✅
C ✅
```

Inside the function but outside the inner block:

```text
A ✅
B ✅
C ❌
```

Outside the function:

```text
A ✅
B ❌
C ❌
```

**That is the core idea of scope in C.** Once this becomes comfortable, parameters, arrays, and pointers will be much easier to understand.



Yes 👍 Here is a **complete scope table** covering the ways you need for your current C learning level.

## 📌 Scope in C — Complete Notes Table

| Type                         | Where variable is declared       | Where can access?                                          | Where can't access?                    | Example                               |
| ---------------------------- | -------------------------------- | ---------------------------------------------------------- | -------------------------------------- | ------------------------------------- |
| **Local / Block Scope**      | Inside `{ }`                     | Only inside that block                                     | Outside the block ❌                    | `if`, `for`, `while`, standalone `{}` |
| **Function Parameter Scope** | Inside function parameter list   | Inside that function                                       | Outside that function ❌                | `void add(int a)`                     |
| **Global / File Scope**      | Outside all functions            | Functions in the same file, subject to scope/linkage rules | Not automatically across other files ❌ | `int x = 10;` before `main()`         |
| **Function Scope**           | Label used with `goto`           | Anywhere inside that function                              | Outside that function ❌                | `start:`                              |
| **Nested Block Scope**       | Inside an inner `{ }`            | Inner block only                                           | Outside that inner block ❌             | `{ int x = 10; }`                     |
| **Outer → Inner access**     | Variable declared in outer block | Outer block + its inner blocks ✅                           | —                                      | `main()` variable used inside `if`    |
| **Inner → Outer access**     | Variable declared in inner block | Inner block only                                           | Outer block ❌                          | `if` variable used after `}`          |

---

# ⭐ Most Important Examples

### 1. Local / Block Scope

```c
int main()
{
    int a = 10;

    printf("%d", a);  // ✅

    return 0;
}
```

`a` belongs to the `main()` block.

```text
main()
┌────────────────────┐
│ int a = 10;        │
│                    │
│ a ✅               │
└────────────────────┘

outside main:
a ❌
```

---

### 2. Inner Block

```c
int main()
{
    int a = 10;

    {
        int b = 20;

        printf("%d", a);  // ✅
        printf("%d", b);  // ✅
    }

    printf("%d", a);      // ✅
    printf("%d", b);      // ❌
}
```

| Variable | Inside inner block | After inner block |
| -------- | -----------------: | ----------------: |
| `a`      |                  ✅ |                 ✅ |
| `b`      |                  ✅ |                 ❌ |

### Rule:

> **Outer → Inner = ✅**

> **Inner → Outer = ❌**

---

# 3. Function Parameter Scope

```c
void add(int a)
{
    printf("%d", a);  // ✅
}

int main()
{
    int x = 10;

    add(x);

    // printf("%d", a);  // ❌
}
```

Here:

```c
void add(int a)
```

`a` is a **parameter**.

Its scope is inside `add()`.

```text
main()
   │
   │ x = 10
   ↓
add(x)
   │
   ↓
parameter a = 10
   │
   ↓
use a ✅
```

After `add()` finishes:

```text
a ❌
```

---

# 4. Global / File Scope

```c
#include <stdio.h>

int x = 100;  // Global variable

void first()
{
    printf("%d\n", x);  // ✅
}

void second()
{
    printf("%d\n", x);  // ✅
}

int main()
{
    printf("%d\n", x);  // ✅

    first();
    second();

    return 0;
}
```

Because `x` is declared outside all functions:

```text
                 x = 100
               GLOBAL/FILE
                    │
          ┌─────────┼─────────┐
          ↓         ↓         ↓
       first()   second()   main()
          ✅        ✅         ✅
```

---

# 5. Nested Blocks

You can have blocks inside blocks.

```c
int main()
{
    int a = 10;

    {
        int b = 20;

        {
            int c = 30;

            printf("%d", a);  // ✅
            printf("%d", b);  // ✅
            printf("%d", c);  // ✅
        }

        printf("%d", a);      // ✅
        printf("%d", b);      // ✅
        printf("%d", c);      // ❌
    }

    printf("%d", a);          // ✅
    printf("%d", b);          // ❌
    printf("%d", c);          // ❌
}
```

Think of it like **levels**:

```text
Level 1: main
│
│ a = 10
│
└── Level 2: block
    │
    │ b = 20
    │
    └── Level 3: block
        │
        │ c = 30
        │
        └── can access:
             a ✅
             b ✅
             c ✅
```

But going back outward:

```text
Level 3 → Level 2

c ❌
```

because `c` belongs to Level 3.

---

# 6. Same Variable Name — Shadowing

This is also important.

```c
int main()
{
    int x = 10;

    {
        int x = 20;

        printf("%d\n", x);
    }

    printf("%d\n", x);

    return 0;
}
```

Output:

```text
20
10
```

Why?

```text
main()
│
│ x = 10
│
└── inner block
    │
    │ x = 20
    │
    │ x → 20 is used here
    │
    └── end
       
       x → 10 is used again
```

The inner `x` **shadows** the outer `x`.

---

# 🎯 Final Cheat Sheet

| Situation                                               |                                 Access? |
| ------------------------------------------------------- | --------------------------------------: |
| Variable used inside the block where declared           |                                       ✅ |
| Outer variable used inside inner block                  |                                       ✅ |
| Inner variable used in outer block                      |                                       ❌ |
| Function parameter used inside its function             |                                       ✅ |
| Function parameter used outside its function            |                                       ❌ |
| Global variable used inside functions in same file      |                                       ✅ |
| Variable declared inside `if` used after `if`           |                                       ❌ |
| Variable declared inside `for` used after `for`         |                                       ❌ |
| Variable declared inside `while` used after `while`     |                                       ❌ |
| Variable declared inside a standalone `{}` used outside |                                       ❌ |
| Same variable name in inner block                       | ✅, but inner variable shadows outer one |
| `goto` label used inside its function                   |                                       ✅ |
| `goto` label used from another function                 |                                       ❌ |

### 🧠 One rule that covers most of it

```text
              OUTER BLOCK
                  │
            variable exists
                  │
                  ↓
             INNER BLOCK
                  │
        Can access outer variable ✅
                  │
                  ↓
              INNER ends
                  │
                  ↓
        Inner variable ❌
        Outer variable ✅
```

**Remember this:**

> **A variable is accessible from its declaration point to the end of its scope.**

That single idea will make most C scope questions much easier.
Yes 👍 I'll give you **one example for every scope/access case from the table**, with comments explaining **why it works or why it doesn't work**.

# 1. Variable inside its own block ✅

```c
#include <stdio.h>

int main()
{
    int a = 10;              // 'a' is declared in main block

    printf("%d\n", a);       // ✅ Can access 'a'
                             // Because we are inside the same block

    return 0;
}
```

**Rule:** A variable can be accessed inside the block where it is declared.

---

# 2. Outer variable → Inner block ✅

```c
#include <stdio.h>

int main()
{
    int a = 10;              // 'a' belongs to outer block

    if(a > 5)
    {
        printf("%d\n", a);   // ✅ Can access 'a'
                             // Inner block can access outer variable
    }

    return 0;
}
```

**Rule:**

```text
Outer → Inner = ✅
```

---

# 3. Inner variable → Outer block ❌

```c
#include <stdio.h>

int main()
{
    if(1)
    {
        int b = 20;          // 'b' belongs to if block

        printf("%d\n", b);   // ✅ 'b' is accessible here
    }

    printf("%d\n", b);       // ❌ ERROR
                             // 'b' belongs to the if block
                             // We are now outside that block

    return 0;
}
```

**Rule:**

```text
Inner → Outer = ❌
```

---

# 4. Function parameter inside its function ✅

```c
#include <stdio.h>

void display(int number)
{
    // 'number' is a parameter
    // Its scope is inside display()

    printf("%d\n", number);  // ✅ Can access 'number'
}

int main()
{
    display(100);

    return 0;
}
```

**Rule:**

```text
Parameter → its function = ✅
```

---

# 5. Function parameter outside its function ❌

```c
#include <stdio.h>

void display(int number)
{
    printf("%d\n", number);  // ✅
}

int main()
{
    display(100);

    printf("%d\n", number);  // ❌ ERROR
                             // 'number' belongs to display()
                             // main() cannot access it

    return 0;
}
```

**Rule:**

```text
Parameter → outside function = ❌
```

---

# 6. Global variable inside functions ✅

```c
#include <stdio.h>

int number = 100;            // Global / file-scope variable

void first()
{
    printf("%d\n", number);  // ✅
                             // Global variable can be accessed here
}

void second()
{
    printf("%d\n", number);  // ✅
                             // Global variable can also be accessed here
}

int main()
{
    printf("%d\n", number);  // ✅
                             // main() can access it too

    first();
    second();

    return 0;
}
```

**Rule:**

```text
Global variable
      ↓
Functions in same file
      ↓
Can generally access it
```

---

# 7. Variable inside `if` → after `if` ❌

```c
#include <stdio.h>

int main()
{
    if(1)
    {
        int x = 50;          // 'x' belongs to if block

        printf("%d\n", x);   // ✅
    }

    printf("%d\n", x);       // ❌ ERROR
                             // if block ended at }
                             // 'x' is out of scope

    return 0;
}
```

---

# 8. Variable inside `for` → after `for` ❌

```c
#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", i);   // ✅ 'i' is accessible inside for loop
    }

    printf("%d\n", i);       // ❌ ERROR
                             // 'i' was declared in the for statement
                             // Its scope ends with the for loop

    return 0;
}
```

### Important

```c
for(int i = 0; ...)
```

`i` is available only within the `for` loop.

---

# 9. Variable inside `while` → after `while` ❌

```c
#include <stdio.h>

int main()
{
    while(1)
    {
        int x = 10;          // 'x' belongs to while block

        printf("%d\n", x);   // ✅
        
        break;
    }

    printf("%d\n", x);       // ❌ ERROR
                             // 'x' belongs to while block

    return 0;
}
```

---

# 10. Variable inside standalone `{}` → outside ❌

```c
#include <stdio.h>

int main()
{
    {
        int x = 10;          // 'x' belongs to this block

        printf("%d\n", x);   // ✅
    }

    printf("%d\n", x);       // ❌ ERROR
                             // Block ended at }
                             // 'x' is no longer accessible

    return 0;
}
```

---

# 11. Same variable name — Shadowing ⭐

```c
#include <stdio.h>

int main()
{
    int x = 10;              // Outer 'x'

    {
        int x = 20;          // Inner 'x'
                             // This shadows the outer x

        printf("%d\n", x);   // 20
                             // Inner x is used
    }

    printf("%d\n", x);       // 10
                             // Inner x disappeared
                             // Outer x is used again

    return 0;
}
```

Flow:

```text
Outer x = 10
     ↓
Inner x = 20
     ↓
Inside block → 20
     ↓
Block ends
     ↓
Outside → 10
```

---

# 12. Nested blocks ⭐

```c
#include <stdio.h>

int main()
{
    int a = 10;                  // Level 1

    {
        int b = 20;              // Level 2

        {
            int c = 30;          // Level 3

            printf("%d\n", a);   // ✅ Can access Level 1
            printf("%d\n", b);   // ✅ Can access Level 2
            printf("%d\n", c);   // ✅ Can access Level 3
        }

        printf("%d\n", a);       // ✅
        printf("%d\n", b);       // ✅
        // printf("%d\n", c);    // ❌ c belongs to Level 3
    }

    printf("%d\n", a);           // ✅
    // printf("%d\n", b);        // ❌ b belongs to Level 2
    // printf("%d\n", c);        // ❌ c belongs to Level 3

    return 0;
}
```

Think:

```text
Level 1
│
│ a
│
└── Level 2
    │
    │ b
    │
    └── Level 3
        │
        │ c
        │
        └── c can access a, b, c
```

---

# 13. `goto` label — Function Scope

This is less important for you right now, but for completeness:

```c
#include <stdio.h>

int main()
{
    goto message;            // Jump to label

    printf("Hello\n");

message:
    printf("Welcome\n");     // Label belongs to this function

    return 0;
}
```

The label:

```c
message:
```

can be used within `main()`.

You cannot jump to that label from another function.

---

# 🧠 Your Most Important 4 Rules

For your current C → DSA learning, memorize these:

### Rule 1

```text
Same block → ✅
```

```c
{
    int x = 10;
    printf("%d", x);    // ✅
}
```

### Rule 2

```text
Outer → Inner → ✅
```

```c
int x = 10;

{
    printf("%d", x);    // ✅
}
```

### Rule 3

```text
Inner → Outer → ❌
```

```c
{
    int x = 10;
}

printf("%d", x);        // ❌
```

### Rule 4

```text
Function parameter → only inside that function
```

```c
void test(int x)
{
    printf("%d", x);    // ✅
}

// x ❌
```

### ⭐ Easy way to remember

```text
             OUTER
               │
               ↓
             INNER
               │
               ↓
        Can see outside ✅

But...

             INNER
               │
               ↓
             OUTER
               │
               ↓
        Cannot see inside ❌
```

That's the core of **scope in C**.
