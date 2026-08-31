Yes. This is the **Day 2 plan** we’ll follow.

Since Day 1 is now complete, we start with:

# 🔵 Day 2 → Topic 1: Functions in C

A **function** is a reusable block of code that performs a specific task.

Instead of writing the same logic multiple times, you put it inside a function and call it whenever needed.

```text
main()
  │
  ├── call function 1()
  │       ↓
  │    perform task
  │
  ├── call function 2()
  │       ↓
  │    perform task
  │
  └── continue
```

---

## 1. Why Do We Need Functions?

Suppose you need to calculate the sum several times.

Without functions:

```text
Write addition logic
       ↓
Write it again
       ↓
Write it again
```

With a function:

```text
Create sum()
    ↓
Call sum() whenever required
```

### Main benefits

* **Reusability** — write once, use multiple times
* **Organization** — divide a large program into smaller tasks
* **Readability** — easier to understand
* **Maintenance** — easier to modify
* **Problem solving** — useful when moving toward DSA

---

# 2. Basic Function Structure

A function generally has:

```c
return_type function_name()
{
    // function body
}
```

Example:

```c
void greet()
{
    printf("Hello");
}
```

Here:

```text
void
 ↓
Return type

greet
 ↓
Function name

()
 ↓
Parameters

{ }
 ↓
Function body
```

---

# 3. Function Declaration

A **function declaration** tells the compiler that a function exists.

```c
void greet();
```

This is also called a **function prototype**.

It tells C:

> There is a function called `greet` that takes no arguments and returns nothing.

---

# 4. Function Definition

The actual implementation of the function is called its **definition**.

```c
void greet()
{
    printf("Hello");
}
```

So:

```text
Declaration
    ↓
void greet();

Definition
    ↓
void greet()
{
    printf("Hello");
}
```

---

# 5. Function Call

Writing a function doesn't execute it.

You have to **call** it.

```c
greet();
```

Example:

```c
#include <stdio.h>

void greet()
{
    printf("Hello\n");
}

int main()
{
    greet();

    return 0;
}
```

Output:

```text
Hello
```

Flow:

```text
main()
  ↓
greet()
  ↓
printf("Hello")
  ↓
return to main()
```

---

# 6. Three Important Parts ⭐

Remember these three terms:

```text
Declaration
    ↓
Definition
    ↓
Call
```

Example:

```c
#include <stdio.h>

void greet();          // Declaration

void greet()           // Definition
{
    printf("Hello");
}

int main()
{
    greet();           // Call

    return 0;
}
```

---

# 7. Why Is `main()` a Function?

You have already been using:

```c
int main()
{
    ...
}
```

`main()` is a function.

It is the function where program execution begins in a hosted C program.

So:

```text
Program
  ↓
main()
  ↓
Other functions
```

For example:

```c
int main()
{
    greet();
    calculate();
    display();

    return 0;
}
```

---

# 8. Function With No Return Value

Use `void` when the function doesn't return a value.

```c
void greet()
{
    printf("Hello");
}
```

Calling:

```c
greet();
```

The function performs its task and returns control to the caller.

---

# 9. Function That Returns a Value

A function can calculate something and return the result.

Example:

```c
int add()
{
    return 10 + 20;
}
```

Then:

```c
int result = add();
```

Now:

```text
add()
 ↓
10 + 20
 ↓
30
 ↓
result = 30
```

---

# 10. `return`

`return` sends a value back to the calling code.

Example:

```c
int square()
{
    return 5 * 5;
}
```

Then:

```c
int result = square();
```

Result:

```text
result = 25
```

---

# 11. Function With Parameters

A function can receive information from the caller.

Example:

```c
void greet(char name[])
{
    printf("Hello %s", name);
}
```

Conceptually:

```text
main()
  │
  │ "Gajanand"
  ↓
greet(name)
  │
  ↓
Hello Gajanand
```

The values supplied to a function are called **arguments**.

The variables receiving those values are called **parameters**.

---

# 12. Parameters vs Arguments ⭐

Consider:

```c
void add(int a, int b)
{
    printf("%d", a + b);
}
```

Here:

```text
a and b
 ↓
parameters
```

When you call:

```c
add(10, 20);
```

Here:

```text
10 and 20
 ↓
arguments
```

### Remember

```text
Function definition:
int a, int b → parameters

Function call:
10, 20 → arguments
```

---

# 13. Function With Parameters and Return Value

This is one of the most important patterns.

```c
int add(int a, int b)
{
    return a + b;
}
```

Call:

```c
int result = add(10, 20);
```

Flow:

```text
add(10, 20)
     ↓
a = 10
b = 20
     ↓
a + b
     ↓
30
     ↓
return 30
     ↓
result = 30
```

---

# 14. Four Common Function Types

You should know these four patterns:

### 1. No parameters, no return

```c
void greet()
{
    printf("Hello");
}
```

### 2. Parameters, no return

```c
void greet(char name[])
{
    printf("Hello %s", name);
}
```

### 3. No parameters, returns value

```c
int getNumber()
{
    return 10;
}
```

### 4. Parameters and returns value ⭐

```c
int add(int a, int b)
{
    return a + b;
}
```

Think of them like this:

```text
                Return?
              No       Yes
             ┌───────────────┐
Parameters No │ void greet()  │ int getNumber()
             │               │
Parameters Yes│ void display │ int add(a,b)
             └───────────────┘
```

---

# 15. Example: Even/Odd Function

Instead of putting everything inside `main()`:

```c
int isEven(int number)
{
    return number % 2 == 0;
}
```

Then:

```c
if (isEven(10))
{
    printf("Even");
}
else
{
    printf("Odd");
}
```

This makes the logic reusable.

---

# 16. Example: Maximum of Two Numbers

```c
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
```

Then:

```c
int result = maximum(10, 20);
```

Result:

```text
20
```

This type of function will become very useful when solving DSA problems.

---

# 17. Function Execution Flow

Consider:

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);

    printf("%d", result);

    return 0;
}
```

Execution:

```text
main()
  ↓
add(5, 3)
  ↓
a = 5, b = 3
  ↓
return 8
  ↓
result = 8
  ↓
printf(8)
```

Output:

```text
8
```

---

# 18. Important: Function Must Be Declared Before Use

This works:

```c
void greet();

int main()
{
    greet();
}

void greet()
{
    printf("Hello");
}
```

The declaration tells the compiler about `greet()` before `main()` calls it.

Alternatively, define the function before `main()`:

```c
void greet()
{
    printf("Hello");
}

int main()
{
    greet();
}
```

---

# 19. Functions and DSA ⭐

Functions are extremely important for DSA.

Instead of writing:

```text
One huge program
```

you'll eventually write:

```text
main()
 │
 ├── search()
 ├── sort()
 ├── reverse()
 ├── findMax()
 ├── binarySearch()
 └── ...
```

This makes algorithms easier to test and reuse.

---

# 🧪 Practice

Write these yourself:

### Basic

1. Create a function that prints `"Hello World"`.
2. Create a function that prints your name.
3. Create a function that prints numbers from 1 to 10.
4. Create a function to add two numbers.
5. Create a function to subtract two numbers.

### Logic

6. Function to check even/odd.
7. Function to find maximum of two numbers.
8. Function to find maximum of three numbers.
9. Function to calculate factorial.
10. Function to check whether a number is prime.
11. Function to reverse a number.
12. Function to check palindrome.
13. Function to calculate GCD.
14. Function to calculate LCM.
15. Function to calculate the sum of digits.

### ⭐ Important Practice

Try to convert your Day 1 number problems into functions:

```text
factorial()
prime()
reverse()
palindrome()
fibonacci()
gcd()
lcm()
sumDigits()
countDigits()
```

Don't worry about arrays yet.

---

# 🧠 Quick Check

Make sure you understand:

```text
Function
   ↓
Reusable block of code

Declaration
   ↓
Tells compiler function exists

Definition
   ↓
Contains function implementation

Call
   ↓
Executes the function

Parameter
   ↓
Variable in function definition

Argument
   ↓
Actual value passed during call

return
   ↓
Sends a value back
```

### Day 2 Progress

```text
✓ Functions — Declaration, definition, call
→ Parameters — Next
→ Return
→ Scope
→ Arrays
→ Array Operations
→ Array Problems
→ 2D Arrays
→ Strings
```



Yes — this is an important distinction. Think of a function as a **machine**:

```text
              FUNCTION
                 │
        ┌────────┴────────┐
        ↓                 ↓
     Parameter         Return Type
     INPUT             OUTPUT
```

## 1. Parameter = Input

A **parameter** is the data that you **give to the function**.

Example:

```c
void greet(char name[])
{
    printf("Hi %s", name);
}
```

Here:

```c
char name[]
```

is a **parameter**.

When you call:

```c
greet("Gajanand");
```

you are giving `"Gajanand"` **to** the function.

Flow:

```text
"Gajanand"
     ↓
   greet()
     ↓
   prints it
```

So:

> **Parameter = information going INTO the function.**

---

# 2. Return type = Output

The **return type** tells you what kind of value the function sends **back**.

Example:

```c
int getAge()
{
    return 22;
}
```

Here:

```c
int
```

is the **return type**.

The function sends:

```text
22
```

back to the caller.

```c
int age = getAge();
```

Flow:

```text
getAge()
   │
   │ return 22
   ↓
 main()
   │
   ↓
age = 22
```

So:

> **Return type = information coming OUT of the function.**

---

# 3. Very simple comparison

### Parameter

```c
void greet(char name[])
```

```text
             INPUT
               ↓
        ┌────────────┐
        │   greet()  │
        └────────────┘
```

### Return value

```c
int getAge()
```

```text
        ┌────────────┐
        │  getAge()  │
        └────────────┘
               │
               ↓
             22
            OUTPUT
```

---

# 4. Function with both

You can have **parameters AND a return value**:

```c
int add(int a, int b)
{
    return a + b;
}
```

Look at this carefully:

```c
int add(int a, int b)
│   │   └──────────┘
│   │   parameters
│   │
│   function name
│
return type
```

Here:

```text
int a      → input
int b      → input
int        → output
```

When you call:

```c
int result = add(10, 20);
```

the flow is:

```text
        10 ──────┐
                 ↓
              add()
                 ↑
        20 ──────┘
                 │
                 │ return 30
                 ↓
              result
                 │
                 ↓
                30
```

---

# 5. Why are they different?

Because they have **different directions**.

```text
                  FUNCTION
                     │
            ┌────────┴────────┐
            │                 │
            ↓                 ↑
        Parameter          Return
          INPUT             OUTPUT
```

For example:

```c
int multiply(int a, int b)
{
    return a * b;
}
```

You give:

```text
a = 5
b = 4
```

to the function.

The function calculates:

```text
5 × 4 = 20
```

Then it returns:

```text
20
```

So:

```text
5, 4  ─────→  multiply()  ─────→  20
             INPUT              OUTPUT
          parameters          return value
```

---

## 6. Don't confuse `int` in these two places

This is especially important:

```c
int add(int a, int b)
```

There are **three `int`s** here:

```text
int add(int a, int b)
↑        ↑       ↑
│        │       │
│        │       └── parameter type
│        └────────── parameter type
└─────────────────── return type
```

So:

```c
int add(int a, int b)
```

means:

> "This function **accepts two integers** and **returns one integer**."

That's the easiest way to remember it:

**Parameters → what the function receives.**
**Return type → what the function gives back.**


Yes, you **can use `printf()` instead of `return` in some situations**, but they do **completely different jobs**.

Your example is:

```c
int getMarks()
{
    return 100;
}

int main()
{
    int Marks = getMarks();

    printf("%d\n", Marks);

    return 0;
}
```

Let's understand the difference.

---

# 1. `return` gives a value back

In:

```c
int getMarks()
{
    return 100;
}
```

`return 100;` means:

> "Send the value `100` back to whoever called this function."

Then:

```c
int Marks = getMarks();
```

receives that `100`.

So:

```text
getMarks()
    ↓
 return 100
    ↓
Marks = 100
```

Now `Marks` contains the value:

```text
100
```

You can use it later:

```c
printf("%d\n", Marks);
```

---

# 2. `printf()` displays something

If you write:

```c
int getMarks()
{
    printf("100");
}
```

`printf()` means:

> "Display `100` on the screen."

It does **not mean**:

> "Give 100 back to `main()`."

So:

```text
getMarks()
    │
    └── printf("100")
             ↓
          SCREEN
             ↓
            100
```

The value isn't being returned to `main()`.

---

# 3. Try replacing `return` with `printf`

Suppose you write:

```c
#include <stdio.h>

int getMarks()
{
    printf("100");
}

int main()
{
    int Marks = getMarks();

    printf("%d\n", Marks);

    return 0;
}
```

You might see something like:

```text
100
some unpredictable value
```

Why?

Because you declared:

```c
int getMarks()
```

This says:

> "This function must return an `int`."

But you didn't return anything.

So this is incorrect.

---

# 4. Why do we use `return`?

Imagine you want to **calculate something** and give the result back.

For example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Then:

```c
int result = add(10, 20);
```

The function calculates:

```text
10 + 20 = 30
```

and:

```c
return 30;
```

sends `30` back.

Now `result` contains:

```text
30
```

You can do anything with it:

```c
printf("%d\n", result);
```

or:

```c
int result2 = result * 2;
```

or:

```c
if (result > 25)
{
    printf("Greater than 25");
}
```

That's why `return` is powerful.

---

# 5. `printf()` is only for displaying

For example:

```c
void greet()
{
    printf("Hello");
}
```

This function's job is simply:

> Display "Hello".

You don't need to return a value.

```text
greet()
  ↓
printf()
  ↓
Screen
```

---

# 6. Very important comparison

| `return`                            | `printf()`                                      |
| ----------------------------------- | ----------------------------------------------- |
| Sends a value back to caller        | Displays something on screen                    |
| Used to give output from a function | Used for user-visible output                    |
| Can store the returned value        | Cannot be used to return your calculated result |
| Can be used in calculations         | Mainly for displaying                           |
| Ends the current function           | Does not necessarily end the function           |

---

# 7. Think about a calculator

Imagine a calculator function:

```c
int add(int a, int b)
{
    return a + b;
}
```

You give it:

```text
10 + 20
```

It gives you:

```text
30
```

You can then decide what to do with `30`.

```c
int result = add(10, 20);
```

This is like:

```text
              10, 20
                 ↓
             ┌────────┐
             │  add() │
             └────────┘
                 ↓
                30
                 ↓
              result
```

But if you do:

```c
int add(int a, int b)
{
    printf("%d", a + b);
}
```

the function is basically saying:

```text
              10, 20
                 ↓
             ┌────────┐
             │  add() │
             └────────┘
                 ↓
               SCREEN
                 ↓
                30
```

The caller doesn't receive `30` as the function's return value.

---

# 8. When should you use each?

### Use `printf()` when:

You want to **show something to the user**.

```c
printf("Your marks are %d", Marks);
```

### Use `return` when:

You want to **send a value back to the caller**.

```c
return Marks;
```

For example:

```c
int getMarks()
{
    return 100;
}
```

Then:

```c
int Marks = getMarks();
```

---

# 9. They can work together

This is what you're doing in your original program:

```c
int getMarks()
{
    return 100;
}
```

Then:

```c
int Marks = getMarks();
```

Then:

```c
printf("%d\n", Marks);
```

Flow:

```text
              getMarks()
                  │
                  │ return 100
                  ↓
              Marks = 100
                  │
                  │
                  ↓
              printf()
                  │
                  ↓
                SCREEN
                  │
                  ↓
                 100
```

**`return` moves the value between functions.**

**`printf()` displays the value to the user.**

That's the fundamental difference.


Think of a function like a **machine**:

```text
                 FUNCTION
                    │
        ┌───────────┴───────────┐
        ↓                       ↓
     INPUT                    OUTPUT
   Parameter                  Return
```

The confusing part is **parameter vs argument**. They are closely related, but they are not the same.

---

## 1. Parameter

A **parameter** is the variable written **inside the function definition**.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Here:

```c
int a
int b
```

are **parameters**.

They are like empty boxes waiting to receive values.

```text
int add(int a, int b)
             ↑     ↑
          parameter parameter
```

---

## 2. Argument

An **argument** is the actual value you give to the function **when calling it**.

```c
int result = add(10, 20);
```

Here:

```c
add(10, 20);
    ↑   ↑
    │   │
 argument argument
```

So:

```text
Parameter                  Argument
─────────                  ────────
a                          10
b                          20
```

The values are passed like this:

```text
a ← 10
b ← 20
```

---

# 3. Return Type

The **return type** tells us what type of value the function sends back.

Look at:

```c
int add(int a, int b)
```

The first `int` is the **return type**:

```text
int add(int a, int b)
↑
Return type
```

It means:

> This function will return an `int` value.

And:

```c
return a + b;
```

actually sends the value back.

For:

```c
add(10, 20)
```

the function calculates:

```text
10 + 20 = 30
```

and:

```c
return 30;
```

sends `30` back.

---

# 4. All three together

Look at this one function:

```c
int add(int a, int b)
{
    return a + b;
}
```

### Function definition

```text
int add(int a, int b)
↑       ↑        ↑
│       │        │
│       └────────┴── Parameters
│
└── Return type
```

Then call it:

```c
int result = add(10, 20);
                    ↑   ↑
                    │   │
                 Arguments
```

Complete flow:

```text
                    add()
                     │
        ┌────────────┴────────────┐
        ↓                         ↓
    argument                    argument
       10                          20
        │                           │
        ↓                           ↓
   parameter a                parameter b
        │                           │
        └────────────┬──────────────┘
                     ↓
                  a + b
                     ↓
                    30
                     ↓
                  return
                     ↓
                  result
                     ↓
                    30
```

---

# 5. Your `getUsn()` example

You had:

```c
int getUsn(int Usn)
{
    return Usn;
}
```

Here:

```c
int
```

is the **return type**.

```c
int getUsn(int Usn)
            ↑
         parameter
```

Then:

```c
getUsn(101);
       ↑
    argument
```

So:

```text
Return type → int
Parameter   → Usn
Argument    → 101
```

Flow:

```text
getUsn(101)
    ↓
Usn = 101
    ↓
return Usn
    ↓
return 101
```

---

# 6. Another example

```c
float calculateAverage(int total, int count)
{
    return (float)total / count;
}
```

Here:

```text
float
  ↑
Return type

total
  ↑
Parameter

count
  ↑
Parameter
```

Calling:

```c
float avg = calculateAverage(450, 5);
```

Here:

```text
450 → Argument
  5 → Argument
```

The function receives:

```text
total = 450
count = 5
```

Then:

```text
450 / 5 = 90
```

and returns:

```text
90.0
```

---

# ⭐ Remember this simple rule

```text
PARAMETER = Variable in function definition

ARGUMENT = Actual value in function call

RETURN TYPE = Type of value function gives back
```

### Example:

```c
int add(int a, int b)
{
    return a + b;
}

int result = add(10, 20);
```

| Part         | Meaning                   | Example    |
| ------------ | ------------------------- | ---------- |
| Return type  | Type function returns     | `int`      |
| Parameters   | Variables receiving input | `a`, `b`   |
| Arguments    | Actual values passed      | `10`, `20` |
| Return value | Actual value sent back    | `30`       |

**One sentence to memorize:**

> **Arguments are the values you give, parameters are the variables that receive them, and the return type tells what type of value comes back.**

