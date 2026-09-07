We have completed **Pointer Arithmetic**. Now we move to the next topic in your roadmap:

# 7. Recursion

## What is Recursion?

**Recursion means a function calling itself.**

Example:

```c
void fun()
{
    fun();
}
```

Here, `fun()` calls itself again and again.

But this would continue forever. Therefore, recursion must have a **base case**.

---

## Two Important Parts

### 1. Base Case

The condition that stops the function.

### 2. Recursive Case

The part where the function calls itself.

```text
Function
   ↓
Check base case
   ↓
If false → call itself
   ↓
Repeat
   ↓
Base case becomes true
   ↓
Stop
```

---

# Example 1: Print Numbers from 1 to 5

### Code

```c
#include <stdio.h>

void PrintNumbers(int n)
{
    if(n > 5)
    {
        return;
    }

    printf("%d\n", n);

    PrintNumbers(n + 1);
}

int main()
{
    PrintNumbers(1);

    return 0;
}
```

### Expected Output

```text
1
2
3
4
5
```

### Explanation

First call:

```c
PrintNumbers(1);
```

Then:

```text
PrintNumbers(1)
    prints 1
    calls PrintNumbers(2)

PrintNumbers(2)
    prints 2
    calls PrintNumbers(3)

PrintNumbers(3)
    prints 3
    calls PrintNumbers(4)

PrintNumbers(4)
    prints 4
    calls PrintNumbers(5)

PrintNumbers(5)
    prints 5
    calls PrintNumbers(6)
```

At `n = 6`:

```c
if(n > 5)
{
    return;
}
```

The function stops.

---

# Example 2: Factorial Using Recursion

Factorial means:

```text
5! = 5 × 4 × 3 × 2 × 1
```

So:

```text
5! = 120
```

### Code

```c
#include <stdio.h>

int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * Factorial(n - 1);
}

int main()
{
    int result = Factorial(5);

    printf("Factorial = %d\n", result);

    return 0;
}
```

### Expected Output

```text
Factorial = 120
```

### How It Works

```text
Factorial(5)
= 5 × Factorial(4)
= 5 × 4 × Factorial(3)
= 5 × 4 × 3 × Factorial(2)
= 5 × 4 × 3 × 2 × Factorial(1)
= 5 × 4 × 3 × 2 × 1
= 120
```

The **base case** is:

```c
if(n == 0 || n == 1)
{
    return 1;
}
```

Without this condition, the function would never stop.

---

## Important Rule

Every recursive function should have:

```c
if(base_condition)
{
    return;
}
```

or return a value:

```c
if(base_condition)
{
    return 1;
}
```

---

## Recursion vs Loop

| Loop                               | Recursion                                        |
| ---------------------------------- | ------------------------------------------------ |
| Uses `for`, `while`, or `do-while` | Function calls itself                            |
| Usually uses less memory           | Uses stack memory                                |
| Easier for simple repetition       | Useful for trees, graphs, and divide-and-conquer |
| Must have a loop condition         | Must have a base case                            |

### Simple interview answer

> Recursion is a technique where a function calls itself to solve a smaller version of the same problem. It must contain a base case to stop the calls.

**Next, we will learn recursion using `sum of numbers`, then reverse a number and Fibonacci.**




Yes, **recursion is an important part of DSA**, especially for trees, linked lists, backtracking, divide and conquer, and dynamic programming.

Your main confusion is:

> **Why do we write `return 1`? What happens if we write only `return`?**

Let’s understand this properly.

# 1. What is recursion?

Recursion means:

> A function calls itself to solve a smaller version of the same problem.

Example:

```c
void PrintNumbers(int n)
{
    if(n > 5)
    {
        return;
    }

    printf("%d\n", n);

    PrintNumbers(n + 1);
}
```

## Line-by-line explanation

```c
void PrintNumbers(int n)
```

This creates a function named `PrintNumbers`.

* `void` means the function does not return a value.
* `int n` is the input.

```c
if(n > 5)
{
    return;
}
```

This is the **base case**.

When `n` becomes greater than `5`, the function stops.

Without this condition, the function would call itself forever.

```c
printf("%d\n", n);
```

Prints the current value.

```c
PrintNumbers(n + 1);
```

The function calls itself with a bigger value.

Execution:

```text
PrintNumbers(1)
    prints 1
    PrintNumbers(2)
        prints 2
        PrintNumbers(3)
            prints 3
            PrintNumbers(4)
                prints 4
                PrintNumbers(5)
                    prints 5
                    PrintNumbers(6)
                        return
```

Output:

```text
1
2
3
4
5
```

Here, `return;` means:

> Stop this function and go back to the previous function call.

Because the function is `void`, it does not need to return a value.

---

# 2. Difference between `return;` and `return 1;`

## `return;`

Used when the function does not return a value.

```c
void Example()
{
    return;
}
```

Meaning:

```text
Stop the function.
```

## `return 1;`

Used when the function returns an integer.

```c
int Example()
{
    return 1;
}
```

Meaning:

```text
Stop the function and send the value 1 back.
```

For example:

```c
int Add()
{
    return 1;
}
```

```c
int result = Add();
printf("%d", result);
```

Output:

```text
1
```

But this is different:

```c
void Add()
{
    return 1;   // Wrong
}
```

A `void` function cannot return an integer value.

---

# 3. Why does factorial use `return 1`?

Consider:

```c
int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * Factorial(n - 1);
}
```

Factorial means:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

## Line-by-line explanation

```c
int Factorial(int n)
```

The function returns an integer.

Therefore, every successful path must return an integer.

```c
if(n == 0 || n == 1)
```

This checks the base case.

Mathematically:

```text
0! = 1
1! = 1
```

```c
return 1;
```

This sends the answer `1` back to the previous function call.

It does **not** mean “stop only.”

It means:

> Stop this function and return the integer value `1`.

```c
return n * Factorial(n - 1);
```

This means:

1. Solve the smaller factorial.
2. Multiply its result by `n`.
3. Return the answer.

For example:

```text
Factorial(5)
= 5 * Factorial(4)
= 5 * 4 * Factorial(3)
= 5 * 4 * 3 * Factorial(2)
= 5 * 4 * 3 * 2 * Factorial(1)
= 5 * 4 * 3 * 2 * 1
= 120
```

---

# 4. What happens if we write only `return;`?

Suppose we write:

```c
int Factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return;
    }

    return n * Factorial(n - 1);
}
```

This is incorrect because the function is declared as:

```c
int Factorial(int n)
```

That means it must return an integer.

But:

```c
return;
```

returns nothing.

You will get a compiler warning or error, and the function will not correctly provide the factorial result.

Correct:

```c
return 1;
```

Incorrect:

```c
return;
```

---

# 5. Very important: Recursion has two parts

Every recursive function usually has:

```text
1. Base case
2. Recursive case
```

Example:

```c
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}
```

## Base case

```c
if(n == 0)
{
    return 0;
}
```

When there is nothing left to add, the answer is `0`.

## Recursive case

```c
return n + Sum(n - 1);
```

The problem becomes smaller.

For example:

```text
Sum(5)
= 5 + Sum(4)
= 5 + 4 + Sum(3)
= 5 + 4 + 3 + Sum(2)
= 5 + 4 + 3 + 2 + Sum(1)
= 5 + 4 + 3 + 2 + 1 + Sum(0)
= 5 + 4 + 3 + 2 + 1 + 0
= 15
```

Complete program:

```c
#include <stdio.h>

int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}

int main()
{
    int result = Sum(5);

    printf("Sum = %d\n", result);

    return 0;
}
```

Output:

```text
Sum = 15
```

---

# 6. Why does the base case return `0` here?

Because we are calculating a sum.

```text
5 + 4 + 3 + 2 + 1 + 0
```

The base case must not change the answer.

For sum:

```c
return 0;
```

For factorial:

```c
return 1;
```

Because:

```text
5 × 4 × 3 × 2 × 1 × 1 = 120
```

If factorial returned `0`:

```text
5 × 4 × 3 × 2 × 1 × 0 = 0
```

That would destroy the answer.

### Remember this table

| Problem            | Base case return |
| ------------------ | ---------------: |
| Sum of numbers     |              `0` |
| Factorial          |              `1` |
| Product of numbers |              `1` |
| Counting items     |              `0` |
| Boolean success    |    `true` or `1` |
| Boolean failure    |   `false` or `0` |
| `void` function    |        `return;` |

The base case value depends on the operation.

---

# 7. How does recursion return back?

Look at this:

```c
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}
```

When we call:

```c
Sum(3);
```

The calls go downward:

```text
Sum(3)
    Sum(2)
        Sum(1)
            Sum(0)
```

At `Sum(0)`:

```c
return 0;
```

Now the calls return upward:

```text
Sum(0) returns 0
Sum(1) returns 1 + 0 = 1
Sum(2) returns 2 + 1 = 3
Sum(3) returns 3 + 3 = 6
```

Diagram:

```text
Going down:       Going up:

Sum(3)             Sum(3) = 6
  ↓                  ↑
Sum(2)             Sum(2) = 3
  ↓                  ↑
Sum(1)             Sum(1) = 1
  ↓                  ↑
Sum(0)             Sum(0) = 0
```

This is the most important idea in recursion:

> First, recursive calls go down. After reaching the base case, answers return upward.

---

# 8. Example: Print numbers using recursion

```c
void Print(int n)
{
    if(n == 0)
    {
        return;
    }

    Print(n - 1);

    printf("%d\n", n);
}
```

Call:

```c
Print(5);
```

Output:

```text
1
2
3
4
5
```

Why?

Because the `printf()` comes **after** the recursive call.

Execution:

```text
Print(5)
    Print(4)
        Print(3)
            Print(2)
                Print(1)
                    Print(0)
                    print 1
                print 2
            print 3
        print 4
    print 5
```

Compare:

## Print before recursion

```c
printf("%d\n", n);
Print(n - 1);
```

Output:

```text
5
4
3
2
1
```

## Print after recursion

```c
Print(n - 1);
printf("%d\n", n);
```

Output:

```text
1
2
3
4
5
```

### DSA connection

This concept is very important in:

* Tree traversal
* Linked list recursion
* Backtracking
* Postorder traversal
* Reverse operations

---

# 9. Example: Reverse a string using recursion

```c
#include <stdio.h>

void Reverse(char str[], int index)
{
    if(str[index] == '\0')
    {
        return;
    }

    Reverse(str, index + 1);

    printf("%c", str[index]);
}

int main()
{
    char str[] = "hello";

    Reverse(str, 0);

    return 0;
}
```

Output:

```text
olleh
```

## Explanation

The string is:

```text
h e l l o \0
0 1 2 3 4 5
```

Calls:

```text
Reverse(0)
    Reverse(1)
        Reverse(2)
            Reverse(3)
                Reverse(4)
                    Reverse(5)
                        return
                    print o
                print l
            print l
        print e
    print h
```

The base case:

```c
if(str[index] == '\0')
{
    return;
}
```

means:

> We reached the end of the string, so stop going forward.

The recursive call:

```c
Reverse(str, index + 1);
```

moves to the next character.

The print statement:

```c
printf("%c", str[index]);
```

comes after recursion, so characters are printed in reverse order.

---

# 10. Example: Count digits of a number

```c
int CountDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return 1 + CountDigits(n / 10);
}
```

For:

```c
CountDigits(12345);
```

Execution:

```text
CountDigits(12345)
= 1 + CountDigits(1234)
= 1 + 1 + CountDigits(123)
= 1 + 1 + 1 + CountDigits(12)
= 1 + 1 + 1 + 1 + CountDigits(1)
= 1 + 1 + 1 + 1 + 1 + CountDigits(0)
= 5
```

## Why `return 1`?

Because every recursive call removes one digit.

```c
return 1 + CountDigits(n / 10);
```

means:

```text
Count the current digit as 1,
then count the remaining digits.
```

Here:

```c
return 0;
```

is the base case because no digits remain.

---

# 11. Example: Fibonacci recursion

Fibonacci sequence:

```text
0 1 1 2 3 5 8 13
```

Formula:

```text
F(n) = F(n - 1) + F(n - 2)
```

Code:

```c
int Fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
```

For:

```c
Fibonacci(5);
```

```text
F(5)
= F(4) + F(3)
= 3 + 2
= 5
```

## Why two base cases?

Because Fibonacci needs two starting values:

```text
F(0) = 0
F(1) = 1
```

This is an example of **multiple recursive calls**.

Important:

```c
return Fibonacci(n - 1) + Fibonacci(n - 2);
```

Both recursive calls must finish before the addition can happen.

---

# 12. How to identify recursion in DSA

When solving a problem, ask these questions:

## Question 1: Can I solve the problem using a smaller input?

Example:

```text
Sum of 5 numbers
```

Can become:

```text
5 + Sum of 4 numbers
```

If yes, recursion may be possible.

## Question 2: What is the smallest input?

Examples:

```text
Sum: n == 0
Factorial: n == 0 or n == 1
Array: index == size
String: str[index] == '\0'
Tree: root == NULL
```

This becomes the base case.

## Question 3: What should the function return?

Ask:

> What answer should this function give to its caller?

Examples:

```text
Factorial → integer
Sum → integer
Search → true/false or index
Tree height → integer
Print → void
```

## Question 4: How does the problem become smaller?

Examples:

```c
n - 1
```

```c
index + 1
```

```c
n / 10
```

```c
left + 1
```

```c
right - 1
```

## Question 5: Should the work happen before or after recursion?

### Before recursion

Useful for:

* Printing from beginning
* Processing while going down
* Preorder tree traversal

### After recursion

Useful for:

* Reverse printing
* Returning calculated answers
* Postorder tree traversal
* Backtracking

---

# 13. The recursion template

For a function that returns a value:

```c
ReturnType Function(Input)
{
    if(base_case)
    {
        return base_answer;
    }

    return current_work + Function(smaller_input);
}
```

For a function that does not return a value:

```c
void Function(Input)
{
    if(base_case)
    {
        return;
    }

    current_work;

    Function(smaller_input);
}
```

For two recursive calls:

```c
ReturnType Function(Input)
{
    if(base_case)
    {
        return base_answer;
    }

    return Function(smaller_input_1)
         + Function(smaller_input_2);
}
```

---

# 14. Common mistakes

## Mistake 1: No base case

```c
int Sum(int n)
{
    return n + Sum(n - 1);
}
```

This never stops.

## Mistake 2: Input does not become smaller

```c
Sum(n);
```

This calls the same input forever.

Correct:

```c
Sum(n - 1);
```

## Mistake 3: Wrong base return

```c
int Factorial(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n * Factorial(n - 1);
}
```

This always returns `0`.

Correct:

```c
return 1;
```

## Mistake 4: Forgetting to return the recursive result

Incorrect:

```c
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    Sum(n - 1);
}
```

The recursive result is calculated but not returned.

Correct:

```c
return n + Sum(n - 1);
```

## Mistake 5: Using `return;` in an integer function

Incorrect:

```c
int Sum(int n)
{
    if(n == 0)
    {
        return;
    }
}
```

Correct:

```c
return 0;
```

---

# 15. A simple way to think about `return`

Suppose you call:

```c
int result = Sum(5);
```

The caller is asking:

> “Please calculate the sum and give me an integer answer.”

Therefore, the function must eventually return an integer.

```c
return 15;
```

For a `void` function:

```c
Print(5);
```

The caller is asking:

> “Just perform the printing. I do not need an answer.”

Therefore:

```c
return;
```

is enough.

---

# 16. Practice these in this order

Do not directly jump to difficult recursion. Practice in this order:

1. Print numbers from `1` to `n`
2. Print numbers from `n` to `1`
3. Sum of first `n` numbers
4. Factorial
5. Count digits
6. Sum of digits
7. Reverse a number
8. Power of a number
9. Fibonacci
10. Check palindrome
11. Reverse an array
12. Find maximum in an array recursively
13. Binary search recursively
14. Tree traversal

The most important rule is:

> **Do not try to understand every recursive call at once. Trust that the smaller function will return the correct answer, then use that answer.**

For example:

```c
return n + Sum(n - 1);
```

Think only:

```text
I know how to add n.
The smaller function will give me the sum of the remaining numbers.
```

That is called the **recursion trust**.

### Your first exercise

Try to predict the output:

```c
#include <stdio.h>

int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + Sum(n - 1);
}

int main()
{
    printf("%d\n", Sum(4));

    return 0;
}
```

The answer is:

```text
10
```

Because:

```text
4 + 3 + 2 + 1 + 0 = 10
```

You are asking the right question. Understanding **what `return` sends back** is one of the biggest steps toward becoming comfortable with recursion in DSA.
