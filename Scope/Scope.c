// #include <stdio.h>
// // Provides printf() function.
// // This line is processed before the actual C program runs.


// int main()
// {
//     // main() is the starting point of program execution.


//     int a = 10;
//     // 'a' is declared inside main().
//     //
//     // Therefore, 'a' belongs to the main() block.
//     //
//     // Scope of 'a':
//     // It can be accessed anywhere inside main(),
//     // including inside the if block.


//     if(a > 10)
//     {
//         // The condition is checked.
//         //
//         // a = 10
//         //
//         // 10 > 10 → FALSE
//         //
//         // Therefore, this entire if block is SKIPPED.


//         int b = 20;
//         // 'b' is declared INSIDE the if block.
//         //
//         // Therefore, 'b' has BLOCK SCOPE.
//         //
//         // 'b' can only be accessed between these braces:
//         //
//         // {
//         //     int b = 20;
//         // }
//         //
//         // Because the condition is false, this line
//         // doesn't even execute in this particular run.


//         printf("%d is Two digit Number\n", a);
//         // 'a' CAN be accessed here.
//         //
//         // Why?
//         // Because 'a' was declared in the outer main() block.
//         //
//         // The inner if block can access variables
//         // declared in its outer block.


//         printf("%d\n", b);
//         // 'b' CAN be accessed here.
//         //
//         // Why?
//         // Because 'b' was declared inside this same block.
//     }


//     printf(" Inner block Variable: %d\n", b);
//     // ❌ ERROR
//     //
//     // 'b' CANNOT be accessed here.
//     //
//     // Why?
//     //
//     // The if block has ended here:
//     //
//     // }
//     //
//     // 'b' belongs to that block.
//     // Once we are outside the block, 'b' is out of scope.
//     //
//     // In other words:
//     //
//     // {
//     //     int b = 20;  ← b exists in this block
//     // }
//     //       ↑
//     //       b cannot be accessed here


//     printf("this outer Block Variable:%d\n", a);
//     // ✅ 'a' CAN be accessed here.
//     //
//     // Why?
//     //
//     // 'a' was declared in main():
//     //
//     // int a = 10;
//     //
//     // We are still inside main().
//     //
//     // Therefore, 'a' is still in scope.


//     return 0;
//     // Ends main() and returns 0 to the operating system.
// }


// #include <stdio.h>
// Provides printf() function.


// int main()
// {
    // Program execution starts from main().


    // int a = 30;
    // 'a' is declared inside the main() block.
    //
    // Scope of 'a':
    // From this line until the closing } of main().
    //
    // Therefore:
    // a can be accessed inside main()
    // a can also be accessed inside the inner if block.


    // if(a > 10)
    // {
        // a = 30
        // 30 > 10 → TRUE
        //
        // Therefore, this block WILL execute.


        // int b = a + 10;
        // 'b' is declared inside the IF block.
        //
        // a = 30
        // b = 30 + 10
        // b = 40
        //
        // 'b' has BLOCK SCOPE.
        // It can only be accessed inside this { } block.


        // printf("Inside If Block:%d\n", b);
        // ✅ b can be accessed.
        //
        // Output:
        // Inside If Block:40


        // printf("Out side if Block And Inside the Main Block: %d\n", a);
        // ✅ a can be accessed.
        //
        // Why?
        // a belongs to the OUTER main() block.
        // The IF block is inside main().
        //
        // Outer → Inner = ✅
    // }


    // The IF block has ended here.
    //
    // b's scope has ended.
    //
    // b ❌ cannot be accessed anymore.
    //
    // a is still available because we are still inside main().


    // printf("\nOut side If Block\n\n");
    // This executes because we are now outside the IF block.


    // printf("Out side The IF Block Accessible: %d\n", a);
    // ✅ a can be accessed.
    //
    // Why?
    // a was declared in main().
    // We are still inside main().
    //
    // Therefore:
    // a = 30


    // printf("Inside the If Block can't Access If block Closed Before Access: %d\n", b);
    // ❌ ERROR
    //
    // b was declared inside the IF block:
    //
    // if(a > 10)
    // {
    //     int b = a + 10;
    // }
    //
    // The IF block ended at }.
    // Therefore b is OUT OF SCOPE here.
    //
    // The compiler does not allow us to use b here.


//     return 0;
// }


// 🔥 Your program's scope

// main()  ← OUTER BLOCK
// │
// │  int a = 30;
// │  │
// │  │  a ✅
// │  │
// │  └── if(a > 10)  ← INNER BLOCK
// │      │
// │      │ int b = a + 10;
// │      │
// │      │ b ✅
// │      │ a ✅
// │      │
// │      └── }
// │
// │  a ✅
// │  b ❌
// │
// └── }


// The important relationship

// 📌 Your exact variables

// | Variable | Declared   | Inside IF | Outside IF | Why?                               |
// | -------- | ---------- | --------: | ---------: | ---------------------------------- |
// | `a`      | `main()`   |         ✅ |          ✅ | `a` belongs to outer `main` block  |
// | `b`      | `if` block |         ✅ |          ❌ | `b` belongs only to the `if` block |


// Remember this rule
// An inner block can access variables from an outer block, but an outer block cannot access variables declared inside an inner block.


// 1. Local / Block Scope
// #include <stdio.h>

// int main()
// {   
//     int a = 10;

//     printf("Local Variable:%d\n",a);

//     return 0;
// }

// a belongs to the main() block.

// main()
// ┌────────────────────┐
// │ int a = 10;        │
// │                    │
// │ a ✅               │
// └────────────────────┘

// outside main:
// a ❌


//  Another Example 

// #include <stdio.h>

// int main()
// {
//     int n = 10;
    
//     printf("%d\n",n);
//     return 0;
// }





// 2. Inner Block

// #include <stdio.h>

// int main()
// {   
//     int Num1 = 12;
//     {
//         int Num2 = 10;
//         printf("Num1 = %d\n",Num1);
//         printf("Num2 = %d\n",Num2);
//     }

//     printf("Num1 is %d",Num1);
//     printf("Num2 is %d",Num2);
//     return 0;
// }

// | Variable | Inside inner block | After inner block |
// | -------- | -----------------: | ----------------: |
// | `Num1`      |                  ✅ |                 ✅ |
// | `Num2`      |                  ✅ |                 ❌ |

// Rule:

// Outer → Inner = ✅

// Inner → Outer = ❌





// 3. Function Parameter Scope

// #include <stdio.h>
// int add(int A)
// {
//     printf("%d\n",A+A);
// }
// int main()
// {
//     int x = 100;
//     add(x);

//     printf("%d\n",A);

//     return 0;
    
// }


// Here:

// void add(int a)

// a is a parameter.

// Its scope is inside add().

// main()
//    │
//    │ x = 10
//    ↓
// add(x)
//    │
//    ↓
// parameter a = 10
//    │
//    ↓
// use a ✅

// After add() finishes:

// a ❌



// #include <stdio.h>
// void Number(int Num)
// {
//     printf("%d\n",Num);
// }
// int main()
// {
//     int A = 100;

//     Number(A);

//     printf("%d\n",Num);
//     printf("%d\n",A);

//     return 0;

// }





// 4. Global / File Scope

// 4. Global / File Scope

// #include <stdio.h>

// Global Variable
// 'x' is declared outside all functions.
// Therefore, it has File Scope (Global Scope).
//
// It can be accessed by functions in this source file,
// including main(), First(), and Second().
// int x = 10;


// Function Definition
// void  → No value is returned.
// First → Function name.
// Num1  → Parameter of First().
//
// IMPORTANT:
// Num1 has Function Scope.
// It can be accessed only inside the First() function.
// void First(int Num1)
// {
//     printf("First Function Number: %d\n", Num1);
// }


// Function Definition
// void  → No value is returned.
// Second → Function name.
// Num2   → Parameter of Second().
//
// IMPORTANT:
// Num2 has Function Scope.
// It can be accessed only inside the Second() function.
// void Second(int Num2)
// {
//     printf("Second Function Number: %d\n", Num2);
// }


// int main()
// {
    // x is a Global/File Scope variable.
    // Therefore, it can be accessed inside main().
    // printf("Global Variable: %d\n", x);


    // Function Call
    // 10 is passed as an argument to First().
    // Inside First(), 10 is received by parameter Num1.
    // First(10);


    // Function Call
    // 20 is passed as an argument to Second().
    // Inside Second(), 20 is received by parameter Num2.
    // Second(20);


    // ❌ ERROR
    // Num1 belongs to First().
    // It is a local parameter of First().
    // Therefore, main() cannot access Num1.
    //
    // printf("%d", Num1);


    // ❌ ERROR
    // Num2 belongs to Second().
    // It is a local parameter of Second().
    // Therefore, main() cannot access Num2.
    //
    // printf("%d", Num2);


//     return 0;
// }


    //              x = 100
    //            GLOBAL/FILE
    //                 │
    //       ┌─────────┼─────────┐
    //       ↓         ↓         ↓
    //    first()   second()   main()
    //       ✅        ✅         ✅


// Scope in your example

// Global/File Scope
//        │
//        ▼
//      int x
//        │
//        ├───────────────┐
//        │               │
//        ▼               ▼
//     First()         Second()
//        │               │
//     Num1            Num2
//        │               │
//  Function Scope    Function Scope


// So:

// | Variable | Declared Where        | Scope                         | Accessible In                 |
// | -------- | --------------------- | ----------------------------- | ----------------------------- |
// | `x`      | Outside all functions | **File Scope / Global Scope** | Functions in that source file |
// | `Num1`   | `First(int Num1)`     | **Function Scope**            | `First()` only                |
// | `Num2`   | `Second(int Num2)`    | **Function Scope**            | `Second()` only               |

// #include <stdio.h>

// int x = 10;

// void First(int Num1)
// {
//     printf("First Function Number: %d\n",Num1);
// }

// void Second(int Num2)
// {
//     printf("Second Function Number: %d\n",Num2);
// }

// int main()
// {   
//     printf("Global Variable: %d\n",x);
//     First(10);
//     Second(20);

//     printf("%d",Num1);
//     printf("%d",Num2);
//     return 0;
// }


// #include <stdio.h>

// int Number = 101;
// void GetName(char name[]);

// void GetAge(int Age);

// int main(){

//     printf("Global Variable: %d\n",Number);

    // GetName("Gajanand");
    // GetAge(22);
    // printf("Age trying to acces out side function: %d\n",Age); Error because trying to Access outside function
    // printf("Name Trying to Acess out side of Function: %s\n",Name);
//     return 0;
// }

// void GetName(char Name[])
// {
//     printf("Name is: %s\n",Name);
// }

// void GetAge(int Age)
// {
//     printf("Age is %d\n",Age);
//     printf("Trying to access Number Global Variable: %d\n",Number);
// }

// #include <stdio.h>

// Global / File Scope Variable
// 'Number' is declared outside all functions.
// Therefore, it can be accessed by functions in this source file.
// int Number = 101;

// Function Declaration
// GetName() receives one string parameter.
// void GetName(char name[]);

// Function Declaration
// GetAge() receives one integer parameter.
// void GetAge(int Age);

// int main()
// {
    // 'Number' has File Scope, so it can be accessed inside main().
    // printf("Global Variable: %d\n", Number);

    // Function Call
    // "Gajanand" is the argument passed to parameter 'Name'.
    // GetName("Gajanand");

    // Function Call
    // 22 is the argument passed to parameter 'Age'.
    // GetAge(22);

    // ERROR:
    // 'Age' is a parameter of GetAge().
    // It has Function Scope and cannot be accessed inside main().
    // printf("Age trying to access outside function: %d\n", Age);

    // ERROR:
    // 'Name' is a parameter of GetName().
    // It has Function Scope and cannot be accessed inside main().
    // printf("Name trying to access outside function: %s\n", Name);

//     return 0;
// }

// Function Definition
// 'Name' is a parameter of GetName().
// It can be accessed only inside GetName().
// void GetName(char Name[])
// {
//     printf("Name is: %s\n", Name);
// }

// Function Definition
// 'Age' is a parameter of GetAge().
// It can be accessed only inside GetAge().
// void GetAge(int Age)
// {
//     printf("Age is %d\n", Age);
// }

// Important concept

// int Number = 101;
//       │
//       └── File Scope / Global Scope
//           Accessible in main(), GetName(), GetAge()


// GetName(char Name[])
//              │
//              └── Function Scope
//                  Accessible only inside GetName()


// GetAge(int Age)
//             │
//             └── Function Scope
//                 Accessible only inside GetAge()

// | Variable | Where declared        | Scope              | Accessible from               |
// | -------- | --------------------- | ------------------ | ----------------------------- |
// | `Number` | Outside all functions | **File Scope**     | Functions in that source file |
// | `Name`   | `GetName()` parameter | **Function Scope** | `GetName()` only              |
// | `Age`    | `GetAge()` parameter  | **Function Scope** | `GetAge()` only               |









// 5. Nested Blocks


// 5. Nested Blocks

// #include <stdio.h>

// int main()
// {
    // x belongs to the main block.
    // Therefore, x is accessible inside all nested blocks.
    // int x = 10;

    // {
        // y belongs to this nested block.
        // y is accessible here and inside its inner block.
        // int y = 20;

        // {
            // z belongs to this innermost block.
            // z is accessible only inside this block.
            // int z = 30;

            // x → accessible from outer block
            // y → accessible from parent block
            // z → accessible from current block
        //     printf("%d\n", x);
        //     printf("%d\n", y);
        //     printf("%d\n", z);
        // }

        // x → accessible
        // y → accessible
        // z → NOT accessible because z's block has ended.
        // printf("%d\n", x);
        // printf("%d\n", y);

        // ERROR: z is out of scope.
        // printf("%d\n", z);
    // }

    // x → accessible because x belongs to the outer main block.

    // printf("%d\n", x);

    // ERROR: y is out of scope.
    // y belonged to the nested block above.
    // printf("%d\n", y);

    // ERROR: z is out of scope.
    // z belonged to the innermost block above.
    // printf("%d\n", z);

//     return 0;
// }



// Scope visualization
// main() block
// │
// ├── x = 10  ✅
// │
// └── Nested Block 1
//     │
//     ├── y = 20  ✅
//     │
//     └── Nested Block 2
//         │
//         └── z = 30  ✅




// #include <stdio.h>


//     int main()
//     {
//         int x = 10;
//         {
//             int y = 20;
//             {
//                 int z = 30;

//                 printf("%d\n",x);
//                 printf("%d\n",y);
//                 printf("%d\n",z);
//             }

//             printf("%d\n",x);
//             printf("%d\n",y);
//             printf("%d\n",z);
//         }

//         printf("%d\n",x);
//         printf("%d\n",y);
//         printf("%d\n",z);

//         return  0;
//     }
    

// Access from each level:


// | Location       | `x` | `y` | `z` |
// | -------------- | --: | --: | --: |
// | Main block     |   ✅ |   ❌ |   ❌ |
// | Nested Block 1 |   ✅ |   ✅ |   ❌ |
// | Nested Block 2 |   ✅ |   ✅ |   ✅ |


// ⭐ Rule to remember

// Inner blocks can access variables from outer blocks, but outer blocks cannot access variables declared inside inner blocks.

// So:

//         Outer Block
//             ↓
//           x = 10
//             ↓
//        ┌───────────┐
//        │ Inner     │
//        │ y = 20    │
//        │    ↓      │
//        │  z = 30   │
//        └───────────┘

// x flows inside, but y and z do not flow outside their blocks.





// 6. Same Variable Name — Shadowing


// #include <stdio.h>

// int main()
// {
//     int x = 10;

//     {
//         int x = 20;

//         printf("%d\n",x);
//     }

//     printf("%d\n",x);

//     return 0;
// }

// Output:

// 20
// 10

// Why?

// main()
// │
// │ x = 10
// │
// └── inner block
//     │
//     │ x = 20
//     │
//     │ x → 20 is used here
//     │
//     └── end
       
//        x → 10 is used again

// The inner x shadows the outer x.


// 🎯 Final Cheat Sheet

// | Situation                                               |                                 Access? |
// | ------------------------------------------------------- | --------------------------------------: |
// | Variable used inside the block where declared           |                                       ✅ |
// | Outer variable used inside inner block                  |                                       ✅ |
// | Inner variable used in outer block                      |                                       ❌ |
// | Function parameter used inside its function             |                                       ✅ |
// | Function parameter used outside its function            |                                       ❌ |
// | Global variable used inside functions in same file      |                                       ✅ |
// | Variable declared inside `if` used after `if`           |                                       ❌ |
// | Variable declared inside `for` used after `for`         |                                       ❌ |
// | Variable declared inside `while` used after `while`     |                                       ❌ |
// | Variable declared inside a standalone `{}` used outside |                                       ❌ |
// | Same variable name in inner block                       | ✅, but inner variable shadows outer one |
// | `goto` label used inside its function                   |                                       ✅ |
// | `goto` label used from another function                 |                                       ❌ |


// 🧠 One rule that covers most of it


        //       OUTER BLOCK
        //           │
        //     variable exists
        //           │
        //           ↓
        //      INNER BLOCK
        //           │
        // Can access outer variable ✅
        //           │
        //           ↓
        //       INNER ends
        //           │
        //           ↓
        // Inner variable ❌
        // Outer variable ✅




