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



Absolutely. 👍 Since you're learning **Strings for DSA**, I would separate the operations into **C string-library operations** and **DSA string operations**. You don't need to memorize every C library function; the DSA operations are much more important.

# 🔤 Complete String Operations for C + DSA

## 1. String Fundamentals

These should be completely clear first:

| Operation         | Example                 | Purpose                |
| ----------------- | ----------------------- | ---------------------- |
| Declare string    | `char str[100];`        | Create character array |
| Initialize string | `char str[] = "Hello";` | Create string directly |
| Access character  | `str[i]`                | Get character at index |
| Modify character  | `str[i] = 'A';`         | Change character       |
| Find end          | `str[i] != '\0'`        | Detect string ending   |
| String length     | `strlen(str)`           | Count characters       |

---

# 2. String Input / Output

### Input

```c
scanf("%s", str);
```

Reads one word.

For sentences:

```c
fgets(str, sizeof(str), stdin);
```

### Output

```c
printf("%s", str);
```

### Character output

```c
printf("%c", str[i]);
```

---

# 3. Basic String Traversal ⭐

This is **very important for DSA**.

```c
for(int i = 0; str[i] != '\0'; i++)
{
    printf("%c", str[i]);
}
```

You should become comfortable with:

```text
str[0]
str[1]
str[2]
...
str[i]
...
'\0'
```

---

# 4. String Length

### Library

```c
strlen(str);
```

### Without library ⭐

```c
int count = 0;

while(str[count] != '\0')
{
    count++;
}
```

DSA often expects you to implement operations yourself, so this is important.

---

# 5. Copying Strings

### Library

```c
strcpy(destination, source);
```

Example:

```c
strcpy(str2, str1);
```

### DSA implementation ⭐

```text
source → destination
   ↓
copy character by character
   ↓
also copy '\0'
```

---

# 6. Concatenation

Joining two strings:

```c
strcat(str1, str2);
```

Example:

```text
"Hello" + "World"
        ↓
"HelloWorld"
```

For DSA, learn how to implement concatenation manually.

---

# 7. String Comparison ⭐⭐⭐

```c
strcmp(str1, str2);
```

Examples:

```text
"abc" == "abc" → 0

"abc" < "abd" → negative

"abd" > "abc" → positive
```

You should also understand **lexicographical order**.

---

# 8. Count Characters ⭐⭐⭐

Given:

```text
"Gajanand"
```

Count:

```text
G → 1
a → 2
j → 1
n → 2
d → 1
```

Typical DSA problems:

* Count a particular character
* Count vowels
* Count consonants
* Count digits
* Count spaces
* Count special characters

---

# 9. Character Frequency ⭐⭐⭐

Example:

```text
"banana"
```

Frequency:

```text
b → 1
a → 3
n → 2
```

This is extremely important for DSA.

Common technique:

```c
int freq[256] = {0};
```

Then:

```text
character → ASCII value → frequency array
```

---

# 10. Reverse a String ⭐⭐⭐

```text
"hello"
   ↓
"olleh"
```

Learn both:

### Using another array

```text
original → new array
```

### In-place ⭐

```text
left ↔ right
```

Example:

```text
h e l l o
↑       ↑
L       R

o e l l h
```

---

# 11. Check Palindrome ⭐⭐⭐

A palindrome reads the same from both directions.

```text
madam
racecar
level
```

Technique:

```text
left →      ← right

compare
left == right
```

Very common interview problem.

---

# 12. Count Vowels / Consonants

Example:

```text
"hello"
```

```text
vowels     = 2
consonants = 3
```

---

# 13. Remove Characters

Examples:

```text
"banana"
remove 'a'
      ↓
"bnn"
```

Problems:

* Remove a particular character
* Remove vowels
* Remove spaces
* Remove special characters
* Remove duplicate characters

---

# 14. Remove Duplicate Characters ⭐⭐⭐

Example:

```text
"programming"
```

Remove repeated characters:

```text
"progamin"
```

This introduces important DSA techniques such as:

```text
frequency array
visited array
hashing
```

---

# 15. Find Duplicate Characters

Example:

```text
"programming"
```

Find characters occurring more than once.

---

# 16. First Non-Repeating Character ⭐⭐⭐

Example:

```text
"swiss"
```

Frequency:

```text
s → 3
w → 1
i → 1
```

First non-repeating:

```text
w
```

Very common interview problem.

---

# 17. First Repeating Character

Example:

```text
"swiss"
```

First repeating character:

```text
s
```

---

# 18. Anagram ⭐⭐⭐

Check whether two strings contain the same characters with the same frequencies.

```text
listen
silent
```

Result:

```text
Anagram
```

Common techniques:

```text
Sorting
Frequency array
Hash map
```

---

# 19. Count Words

Example:

```text
"I love programming"
```

Result:

```text
3 words
```

This requires handling spaces carefully.

---

# 20. Reverse Words ⭐⭐⭐

Input:

```text
"I love C"
```

Output:

```text
"C love I"
```

This is different from reversing every character.

```text
Character reverse:
"I love C"
→
"C evol I"

Word reverse:
"I love C"
→
"C love I"
```

---

# 21. Reverse Each Word

Input:

```text
"I love C"
```

Output:

```text
"I evol C"
```

---

# 22. Longest Word

Input:

```text
"I love programming"
```

Output:

```text
programming
```

---

# 23. Shortest Word

Same concept, but find the minimum-length word.

---

# 24. String Rotation ⭐⭐⭐

Example:

```text
"abcde"
```

Left rotation by 2:

```text
"cdeab"
```

Right rotation by 2:

```text
"deabc"
```

---

# 25. Check String Rotation ⭐⭐⭐

Given:

```text
"abcd"
"cdab"
```

Check whether one is a rotation of another.

Important technique:

```text
str1 + str1
```

Then search for `str2`.

---

# 26. Substring ⭐⭐⭐

A substring is a continuous part of a string.

```text
"abcdef"
```

Examples:

```text
abc
bcd
cde
def
```

You should learn:

* Generate substrings
* Count substrings
* Find a particular substring
* Longest substring problems

---

# 27. Subsequence ⭐⭐⭐

Different from substring.

For:

```text
"abcde"
```

`ace` is a subsequence because characters remain in order.

But:

```text
aec
```

is not.

This becomes very important later for:

* LCS
* Dynamic Programming

---

# 28. String Search ⭐⭐⭐

Find whether a pattern exists inside a string.

Example:

```text
Text:    "I love programming"
Pattern: "program"
```

Result:

```text
Found
```

Start with simple/brute-force search.

Later learn:

```text
KMP
Rabin-Karp
Z Algorithm
```

These are more advanced DSA string algorithms.

---

# 29. Count Occurrences of a Substring

Example:

```text
String: "abababa"
Pattern: "aba"
```

Count how many times the pattern occurs.

---

# 30. Longest Common Prefix ⭐⭐⭐

Example:

```text
flower
flow
flight
```

Result:

```text
"fl"
```

Very common interview problem.

---

# 31. Longest Common Substring

Given two strings, find the longest **continuous** common part.

---

# 32. Longest Common Subsequence (LCS) ⭐⭐⭐

Example:

```text
ABCBDAB
BDCAB
```

Find the longest sequence that maintains order but doesn't have to be continuous.

This is a major **Dynamic Programming** topic.

---

# 33. Longest Palindromic Substring ⭐⭐⭐

Example:

```text
babad
```

Possible answer:

```text
bab
```

or:

```text
aba
```

This is a very important DSA problem.

---

# 34. Valid Parentheses ⭐⭐⭐

Example:

```text
"{[()]}"
```

Check whether brackets are correctly matched.

This combines:

```text
String + Stack
```

---

# 35. String Compression ⭐⭐⭐

Example:

```text
aaabbc
```

Output:

```text
a3b2c1
```

Useful for understanding two-pointer techniques.

---

# 36. Run-Length Encoding

Example:

```text
AAAABBCC
```

becomes:

```text
A4B2C2
```

---

# 37. Character Conversion

Examples:

```text
'a' → 'A'
'A' → 'a'
```

Useful functions:

```c
toupper()
tolower()
isalpha()
isdigit()
isspace()
```

from:

```c
#include <ctype.h>
```

---

# 38. Numeric String Problems

Check whether a string contains only digits:

```text
"12345" → yes
"123a5" → no
```

Other problems:

* Convert string → integer
* Convert integer → string
* Add numeric strings
* Multiply numeric strings

---

# 39. Advanced DSA String Topics

You don't need these immediately, but eventually:

```text
Trie
   ↓
KMP
   ↓
Rabin-Karp
   ↓
Z Algorithm
   ↓
Rolling Hash
   ↓
Suffix Array
   ↓
Suffix Tree
```

These are **advanced string algorithms/data structures**.

---

# 🎯 What YOU should learn now

Don't try to learn all 39 at once.

For your current **C → DSA foundation**, I'd use this sequence:

```text
STRING FUNDAMENTALS
       ↓
'\0'
       ↓
Input / Output
       ↓
Traversal
       ↓
strlen()
       ↓
strcpy()
       ↓
strcat()
       ↓
strcmp()
       ↓
Manual implementations
       ↓
Character counting
       ↓
Frequency
       ↓
Reverse
       ↓
Palindrome
       ↓
Vowels / Consonants
       ↓
Remove duplicates
       ↓
Anagram
       ↓
First repeating / non-repeating
       ↓
Word operations
       ↓
Substring / Subsequence
       ↓
String searching
       ↓
String practice problems
       ↓
✅ STRINGS COMPLETE
       ↓
POINTERS
```

**For your current level, the ⭐⭐⭐ topics are the ones I would prioritize for interviews/DSA.**

And importantly, **don't jump to KMP, Trie, LCS, etc. yet**. First become extremely comfortable with **character arrays, `'\0'`, loops, indexing, frequency arrays, and manual string operations**. Those are the foundation everything else builds on.


Yes 👍 Now let's start **C String Functions** properly.

# 🔤 String Functions in C

C provides commonly used string functions through:

```c
#include <string.h>
```

For your **DSA foundation**, focus first on these four:

| Function   | Meaning            | What it does                 |
| ---------- | ------------------ | ---------------------------- |
| `strlen()` | String Length      | Counts characters            |
| `strcpy()` | String Copy        | Copies one string to another |
| `strcat()` | String Concatenate | Joins two strings            |
| `strcmp()` | String Compare     | Compares two strings         |

We already started `strlen()`, so let's make that completely clear before moving on.

---

## 1. `strlen()`

### Syntax

```c
strlen(String);
```

Example:

```c
char Name[] = "Gajanand";

int Length = strlen(Name);
```

Result:

```text
Length = 8
```

Remember:

```text
G a j a n a n d \0
←── 8 characters ──→
```

`strlen()` **doesn't count `'\0'`**.

---

## Why is `strlen()` useful in DSA?

You'll frequently need the length to control loops:

```c
for(int i = 0; i < strlen(Name); i++)
{
    printf("%c", Name[i]);
}
```

And later:

* Reverse string
* Palindrome
* Compare portions of strings
* Find substrings
* Two-pointer problems
* Sliding-window problems

---

## ⚠️ One important point

`strlen()` **doesn't change the string**.

```c
int Length = strlen(Name);
```

It only **calculates and returns the length**.

Think:

```text
Name
 ↓
strlen()
 ↓
8
```

It does NOT do:

```text
Name
 ↓
change Name
```

---

### 🧠 Quick check

What will this produce?

```c
char Word[] = "Hello";

int Length = strlen(Word);

printf("%d", Length);
```

**Tell me the output and why.**

After you answer, we'll move to **`strcpy()`**.

## Next String Function: `strcat()`

`strcat()` means **String Concatenation**.

It is used to **join one string at the end of another string**.

### Header file

```c
#include <string.h>
```

### Syntax

```c
strcat(destination, source);
```

It means:

```text
destination + source → destination
```

### Example

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char FirstName[30] = "Gajanand";
    char LastName[] = " Immannavar";

    strcat(FirstName, LastName);

    printf("%s", FirstName);

    return 0;
}
```

### Output

```text
Gajanand Immannavar
```

### How it works

Before `strcat()`:

```text
FirstName: Gajanand\0
LastName:  Immannavar\0
```

After:

```c
strcat(FirstName, LastName);
```

```text
FirstName: Gajanand Immannavar\0
```

The source string is added **after the existing characters** of the destination.

### Important rule

The destination must have enough space for both strings and `'\0'`.

```c
char FirstName[30] = "Gajanand";
```

This is safe for the example because the array has enough capacity.

But this is unsafe:

```c
char FirstName[10] = "Gajanand";
char LastName[] = " Immannavar";

strcat(FirstName, LastName);   // ❌ Not enough space
```

### `strcpy()` vs `strcat()`

| Function   | Purpose                               |
| ---------- | ------------------------------------- |
| `strcpy()` | Replaces destination with source      |
| `strcat()` | Adds source at the end of destination |

Example:

```c
strcpy(A, B);
```

```text
A becomes B
```

```c
strcat(A, B);
```

```text
A becomes A + B
```

### Practice

What will be the output?

```c
char A[30] = "Hello";
char B[] = " World";

strcat(A, B);

printf("%s", A);
```

Also remember: `strcat()` modifies the **destination string**, not the source string.

## Next String Function: `strcmp()`

`strcmp()` means **String Compare**.

It is used to **compare two strings**.

### Header file

```c
#include <string.h>
```

### Syntax

```c
strcmp(String1, String2);
```

It returns an **integer**:

| Result | Meaning                      |
| -----: | ---------------------------- |
|    `0` | Both strings are equal       |
|  `< 0` | String1 comes before String2 |
|  `> 0` | String1 comes after String2  |

### Example 1 — Equal strings

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char A[] = "Hello";
    char B[] = "Hello";

    int Result = strcmp(A, B);

    printf("%d", Result);

    return 0;
}
```

Output:

```text
0
```

Because:

```text
"Hello" == "Hello"
```

### Example 2 — Different strings

```c
char A[] = "Hello";
char B[] = "World";

int Result = strcmp(A, B);

printf("%d", Result);
```

The exact non-zero value can vary by implementation, so **don't depend on it being exactly `-1` or `1`**.

Instead, check:

```c
if (strcmp(A, B) == 0)
{
    printf("Both are same");
}
else
{
    printf("Both are different");
}
```

### Why not use `==`?

This is an important point for DSA:

```c
if (A == B)   // ❌ Don't use this to compare string contents
```

Use:

```c
if (strcmp(A, B) == 0)   // ✅
```

`strcmp()` compares the **characters inside the strings**.

### Simple memory trick

```text
strlen() → How long?
strcpy() → Copy
strcat() → Join
strcmp() → Compare
```

### Practice

What will this print?

```c
char Name1[] = "Gajanand";
char Name2[] = "Gajanand";

if (strcmp(Name1, Name2) == 0)
{
    printf("Same");
}
else
{
    printf("Different");
}
```

Think about it first. Then we can move to the **next string function**.
