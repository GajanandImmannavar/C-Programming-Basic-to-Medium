// 1. No Parameter + No Return Value

#include <stdio.h>

// Function Declaration / Function Prototype
// void → Return type: function returns no value.
// greet → Function name.
// () → No parameters.
void greet();

int main()
{
    // Function Call
    // No argument is passed because the function has no parameters.
    greet();

    return 0;
}

// Function Definition
// Defines what the greet() function does.
// void → No value is returned.
void greet()
{
    printf("Hello Gajanand!\n");
}

// Output:

// Hello Gajanand!



// ----------------------[][][][][][][][]------------------------------------



// 2. Parameter + No Return Value


#include <stdio.h>

// Function Declaration / Function Prototype
// void → Return type: function returns no value.
// greet → Function name.
// char name[] → Parameter that receives a string.
void greet(char name[]);

int main()
{
    // Function Call
    // "Gajanand" is the argument passed to the parameter 'name'.
    greet("Gajanand");

    return 0;
}

// Function Definition
// void → Function does not return a value.
// name → Parameter that receives the argument from the function call.
void greet(char name[])
{
    printf("Hello %s!\n", name);
}



// Output:

// Hello Gajanand!
// Flow
// greet("Gajanand")
//         ↓
// "Gajanand" → Argument
//         ↓
// name → Parameter
//         ↓
// printf()


// --------------------------------{}{}{}{}{}{}------------------------------------------




// 3. No Parameter + Return Value


#include <stdio.h>

// Function Declaration / Function Prototype
// int → Return type: function returns an integer.
// getAge → Function name.
// () → No parameters.
int getAge();

int main()
{
    // Function Call
    // getAge() returns an integer value.
    // The returned value is stored in the variable 'age'.
    int age = getAge();

    printf("Age: %d\n", age);

    return 0;
}

// Function Definition
// int → Function returns an integer value.
// getAge → Function name.
// () → No parameters.
int getAge()
{
    // return → Sends a value back to the caller.
    // 22 → Integer value returned by the function.
    return 22;
}


// Output:

// Age: 22
// Flow
// getAge()
//    ↓
// return 22
//    ↓
// age = 22

// -----------------------------------------[][][][][][][]-----------------------------------



// 4. Parameter + Return Value

#include <stdio.h>

// Function Declaration / Function Prototype
// int → Return type: function returns an integer.
// add → Function name.
// int a → First parameter.
// int b → Second parameter.
int add(int a, int b);

int main()
{
    // Function Call
    // 10 → First argument, received by parameter 'a'.
    // 20 → Second argument, received by parameter 'b'.
    //
    // add(10, 20) returns 30.
    // The returned value is stored in 'sum'.
    int sum = add(10, 20);

    printf("Sum: %d\n", sum);

    return 0;
}

// Function Definition
// int → Function returns an integer.
// add → Function name.
// a → First parameter.
// b → Second parameter.
int add(int a, int b)
{
    // return → Sends the calculated result back to the caller.
    // a + b → Expression that calculates the sum.
    return a + b;
}

// Output:

// Sum: 30

// Flow


// add(10, 20)
//    ↓
// 10 → a
// 20 → b
//    ↓
// a + b
//    ↓
// return 30
//    ↓
// sum = 30


// ---------------------------------{}{}{}{}{}{}{}{}{}{}{}--------------------------------------


// 5. Another Example — Parameter + Return Value

#include <stdio.h>

// Function Declaration / Function Prototype
// int → Function returns an integer.
// square → Function name.
// int number → Parameter that receives the number.
int square(int number);

int main()
{
    // Function Call
    // 5 is the argument passed to the parameter 'number'.
    // The function returns 25.
    int result = square(5);

    printf("Square: %d\n", result);

    return 0;
}

// Function Definition
// int → Returns an integer.
// number → Parameter receiving the argument 5.
int square(int number)
{
    // Returns number multiplied by itself.
    return number * number;
}

// Output:

// Square: 25


// 6. Quick Comparison


// | Type | Function Example          | Parameters | Return |
// | ---- | ------------------------- | ---------- | ------ |
// | 1    | `void greet()`            | ❌          | ❌      |
// | 2    | `void greet(char name[])` | ✅          | ❌      |
// | 3    | `int getAge()`            | ❌          | ✅      |
// | 4    | `int add(int a, int b)`   | ✅          | ✅      |


// The four patterns
// 1. No Parameter + No Return
// void function();


// 2. Parameter + No Return
// void function(int value);


// 3. No Parameter + Return
// int function();


// 4. Parameter + Return
// int function(int value);







//----------------------------------------()()()()()()()()()()--------------------------------------

// 1. Function Defined Before main() — No Separate Declaration Needed

// If the function definition appears before main(), the compiler sees the function before it is called.

#include <stdio.h>

// Function Definition
// The complete function is written before main().
// Therefore, a separate function declaration/prototype is not required.
void greet()
{
    printf("Hello Gajanand!\n");
}

int main()
{
    // Function Call
    // greet() has already been defined above,
    // so the compiler already knows about this function.
    greet();

    return 0;
}


// Flow
// Function Definition
//        ↓
//     main()
//        ↓
// Function Call
// Why no declaration?

// Because the compiler encounters:

// void greet()
// {
//     printf("Hello Gajanand!\n");
// }

// before it encounters:

// greet();

// So it already knows:

// Function name → greet
// Return type → void
// Parameters → none
// Function body → available

// ---------------------------------------------------------[][][][][][][]-----------------------------

// 2. Function Defined After main() — Declaration Required

// If you define the function after main(), but call it inside main(), 
// you should provide a function declaration/prototype before main().



#include <stdio.h>

// Function Declaration / Function Prototype
// Tells the compiler about greet() before main() calls it.
//
// void → Return type
// greet → Function name
// () → No parameters
void greet();

int main()
{
    // Function Call
    // The compiler already knows about greet()
// because of the declaration above.
    greet();

    return 0;
}

// Function Definition
// The actual implementation of greet() is written here.
void greet()
{
    printf("Hello Gajanand!\n");
}


// Flow
// Function Declaration
//        ↓
//     main()
//        ↓
// Function Call
//        ↓
// Function Definition


// 3. Why Is the Declaration Needed?

// Consider this:


// #include <stdio.h>

// int main()
// {
//     greet();

//     return 0;
// }

// void greet()
// {
//     printf("Hello");
// }


// // Here main() calls:

// greet();

// // before the compiler has seen the declaration/definition of greet.

// // The correct approach is:

// #include <stdio.h>

// // Declaration
// void greet();

// int main()
// {
//     greet();

//     return 0;
// }

// // Definition
// void greet()
// {
//     printf("Hello");
// }


// . Three Important Terms

// You should clearly understand these three:

// Function Declaration
// void greet();

// Tells the compiler:

// "A function named greet exists."

// Function Definition
// void greet()
// {
//     printf("Hello");
// }

// Tells the compiler:

// "Here is the actual implementation of greet."

// Function Call
// greet();

// Tells the program:

// "Execute greet now."

// 5. Both Ways Side-by-Side
// Way 1 — Define Before main()
// #include <stdio.h>

// // Function Definition
// void greet()
// {
//     printf("Hello\n");
// }

// int main()
// {
//     // Function Call
//     greet();

//     return 0;
// }
// Definition
//     ↓
//  main()
//     ↓
//  Call

// Separate declaration: ❌ Not needed.

// Way 2 — Define After main()
// #include <stdio.h>

// // Function Declaration
// void greet();

// int main()
// {
//     // Function Call
//     greet();

//     return 0;
// }

// // Function Definition
// void greet()
// {
//     printf("Hello\n");
// }
// Declaration
//     ↓
//  main()
//     ↓
//  Call
//     ↓
// Definition

// Separate declaration: ✅ Needed before the call.

// 6. Very Important Rule

// Remember this:

// A function must be declared before it is called.

// The declaration can be provided by:

// Function Definition
//        OR
// Function Prototype

// So:

//                  Function available?
//                          │
//                 ┌────────┴────────┐
//                 │                 │
//           Before main()      After main()
//                 │                 │
//                 ▼                 ▼
//           Definition        Declaration
//            is enough        required before
//                            the function call
// 7. Professional/Common Style

// In real C projects, functions are often declared in header files and defined in .c files.

// For example:

// project
// │
// ├── main.c
// ├── functions.c
// └── functions.h

// functions.h:

void greet();
int add(int a, int b);

functions.c:

void greet()
{
    printf("Hello");
}

int add(int a, int b)
{
    return a + b;
}

main.c:

// #include "functions.h"

// int main()
// {
//     greet();

//     int result = add(10, 20);

//     return 0;
// }

// You don't need to learn multiple files yet, but remember the basic principle:

// Declaration before call → Definition can come later.

// Your Notes — One Rule to Memorize
// ┌───────────────────────────────────────────────────┐
// │              FUNCTION PLACEMENT RULE               │
// ├───────────────────────────────────────────────────┤
// │                                                   │
// │ Function defined BEFORE main()                    │
// │        ↓                                          │
// │ Separate declaration NOT required                 │
// │                                                   │
// │ Function defined AFTER main()                     │
// │        ↓                                          │
// │ Declaration / Prototype REQUIRED before call      │
// │                                                   │
// └───────────────────────────────────────────────────┘

// And the most important sentence:

// The compiler must know about a function before the function is called.