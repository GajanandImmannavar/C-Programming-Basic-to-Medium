// Include the standard input-output library.
// It is needed here because we use printf().
#include <stdio.h>

// main() is the starting point of the C program.
// int means the function returns an integer value.
int main()
{
    // Declare an integer variable named Age and store the value 22 in it.
    int Age = 22;

    // Print the value stored in the Age variable.
    // %d is used to display an integer.
    // Age provides the value that replaces %d.
    // \n moves the cursor to the next line.
    printf("Age : %d\n", Age);

    // Update the value stored in Age from 22 to 21.
    Age = 21;

    // Print the updated value of Age.
    printf("Updated Age is: %d\n", Age);


    // Declare an integer variable named first_Number
    // and initialize it with the value 10.
    int first_Number = 10;

    // Declare another integer variable named second.
    // Copy the current value of first_Number into second.
    int second = first_Number;

    // Print the value stored in first_Number.
    printf("First Number is: %d\n", first_Number);

    // Print the value stored in second.
    printf("Second Number is: %d\n", second);

    // End the main() function and indicate successful program execution.
    return 0;
 }


// 1. What is a Variable?

// A variable is a named object used to store a value in memory.

// Example:

// int Age = 22;

// Think of it like a labeled box:

// Variable Name        Value
// ─────────────        ─────
// Age                  22

// You use the name Age to access or change the stored value.

// 2. int Age = 22;
// int Age = 22;

// This line has three important parts:

// int       Age       =       22;
//  │         │        │        │
//  │         │        │        └── Value
//  │         │        │
//  │         │        └────────── Assignment / initialization
//  │         │
//  │         └─────────────────── Variable name
//  │
//  └───────────────────────────── Data type
// What?

// It creates a variable named Age that can store an integer value and gives it the initial value 22.

// Why?

// Because instead of writing the value directly everywhere:

// printf("%d", 22);

// you can store it:

// int Age = 22;
// printf("%d", Age);

// This makes the program easier to update and understand.

// How?

// Conceptually:

// Memory
// ┌─────────────┐
// │ Age = 22    │
// └─────────────┘
// 3. printf("Age : %d\n", Age);
// printf("Age : %d\n", Age);
// %d

// %d is a format specifier for an int.

// The value of Age replaces %d.

// Format String:   "Age : %d\n"
//                         │
//                         ▼
// Variable:               Age
//                         │
//                         ▼
// Value:                   22

// Output:

// Age : 22
// How it works
// printf("Age : %d\n", Age);

// Conceptually becomes:

// Age : 22
// 4. Age = 21;
// Age = 21;

// This changes the existing value of Age.

// Before:

// Age
//  │
//  ▼
// 22

// After:

// Age
//  │
//  ▼
// 21
// Important difference
// int Age = 22;

// This is a declaration + initialization.

// But:

// Age = 21;

// This is assignment/update.

// You should not write this:

// int Age = 22;

// int Age = 21; // ❌ Error: Age already declared in the same scope

// Instead:

// int Age = 22;

// Age = 21; // ✅ Update existing variable
// 5. int first_Number = 10;
// int first_Number = 10;

// Creates another integer variable.

// Variable Name       Value
// ─────────────       ─────
// first_Number         10

// The underscore _ is allowed in C variable names.

// For example:

// int first_number;
// int student_age;
// int total_marks;

// These are valid.

// 6. int second = first_Number;

// This is the most important concept in your program.

// int second = first_Number;

// Here:

// C reads the current value of first_Number.
// The current value is 10.
// That value is copied into second.

// Conceptually:

// first_Number = 10
//         │
//         │ Copy value
//         ▼
// second = 10

// After this:

// Variable          Value
// ────────          ─────
// first_Number       10
// second             10
// Important: They are separate variables

// If you later change:

// first_Number = 50;

// then:

// first_Number = 50
// second = 10

// Because second received a copy of the value, not a permanent connection to first_Number.

// Example:

// int first_Number = 10;

// int second = first_Number;

// first_Number = 50;

// printf("%d\n", first_Number);
// printf("%d\n", second);

// Output:

// 50
// 10
// Your Program Execution Step by Step
// int Age = 22;

// Memory:

// Age = 22

// Then:

// printf("Age : %d\n", Age);

// Output:

// Age : 22

// Then:

// Age = 21;

// Memory changes:

// Age = 21

// Then:

// int first_Number = 10;

// Memory:

// Age           = 21
// first_Number  = 10

// Then:

// int second = first_Number;

// The value is copied:

// first_Number ────copy────> second

//       10                    10

// Final output:

// Age : 22
// Updated Age is: 21
// First Number is: 10
// Second Number is: 10
// Key concepts you learned
// Concept	Example
// Variable declaration	int Age;
// Initialization	int Age = 22;
// Variable access	printf("%d", Age);
// Variable update	Age = 21;
// Copying a value	int second = first_Number;
// Integer format specifier	%d
// Naming with _	first_Number

// Your program is correct. One small naming convention suggestion: in C, variable names are commonly written in snake_case or camelCase, so these would be more conventional:

// int age = 22;
// int first_number = 10;

// But your current names are valid C identifiers.